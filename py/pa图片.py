import requests
from bs4 import BeautifulSoup
import os
url = 'https://pvp.qq.com/web201605/herolist.shtml'

# 二进制相应内容 content
html = requests.get(url)
# 使用gbk编码
html.encoding = 'gbk'

# 如果不等于200直接结束程序
if html.status_code != 200:
    raise Exception()

# print(html.text)

# 过滤网页内容
soup = BeautifulSoup(html.text, 'html.parser')
for img_urls in soup.find_all('img', class_=None):
    
    print(img_urls)
    #取得src
    print(img_urls['src'])
    #取得alt
    print(img_urls['alt'])
    # img_url = 'https:' + img_urls['src']
    # url_conetent = requests.get(img_url).content
    # # 创建文件夹
    # 1
    # # 下载图片
    # with open('D:/code/py/img/'+img_urls['alt']+'.jpg', 'wb') as file:
    #     file.write(url_conetent)
    #     print('正在下载%s' % img_urls['alt'])
print('下载完毕')
