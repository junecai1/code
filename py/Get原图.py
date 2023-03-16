# 完整代码
import os
import requests
import time
url = 'https://pvp.qq.com/web201605/js/herolist.json'
herolist = requests.get(url)  # 获取英雄列表json文件

herolist_json = herolist.json()  # 转化为json格式
hero_name = list(map(lambda x: x['cname'], herolist.json()))  # 提取英雄的名字
hero_number = list(map(lambda x: x['ename'], herolist.json()))  # 提取英雄的编号


# 下载图片
def downloadPic():
    i = 0
    for j in hero_number:
        # 创建文件夹  此处文件夹可自行修改
        # if not os.path.exists("D:/code/py/img/wzry"):
        #     os.makedirs("D:/code/py/img/wzry")
        if os.path.exists("D:\\code\\py\\img\\wzry\\" + hero_name[i]):
            os.removedirs("D:\\code\\py\\img")
        os.makedirs("D:\\code\\py\\img\\wzry\\" + hero_name[i])
        # 进入创建好的文件夹
        os.chdir("D:\\code\\py\\img\\wzry\\" + hero_name[i])
        i += 1
        for k in range(10):
            # 拼接url
            onehero_link = 'http://game.gtimg.cn/images/yxzj/img201606/skin/hero-info/' + \
                str(j) + '/' + str(j) + '-bigskin-' + str(k) + '.jpg'
            im = requests.get(onehero_link)  # 请求url
            if im.status_code == 200:
                open(str(k) + '.jpg', 'wb').write(im.content)  # 写入文件
            print("正在下载%s的第%d个皮肤" % (hero_name[i], k+1))


def main():
    # t=60

    # start = time.perf_counter(downloadPic())
    # for i in range(t + 1):
    #     finsh = "▓" * i
    #     need_do = "-" * (t - i)
    #     progress = (i / t) * 100
    #     dur = time.perf_counter() - start
    #     print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(progress,finsh, need_do, dur), end="")
    #     time.sleep(0.05)
    downloadPic()
    print('下载完毕')


if __name__ == "__main__":
    main()
