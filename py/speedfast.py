# import requests
# import base64
# import re

# url = 'http://114.67.175.224:16921/'

# session = requests.session()

# head = requests.get(url).headers

# print(head)

# flag = base64.b64decode(head['flag'])

# print(flag)
# flag = flag.decode()
# print(flag)
# flag = base64.b64decode(flag.split(':')[1])
# # pattern = '\W*'
# # real_flag = re.match(pattern, flag)
# # print(real_flag)
# print(flag)

# print(s.post(url,flag).text)

import requests
import base64  # 后面涉及到base64解码，所以要导入这个模块
url = "http://114.67.175.224:16921/"
s = requests.session()  # 保持会话
source = s.get(url).headers  # 因为flag在头部所以需要抓取头部
result = base64.b64decode(source['flag'])  # 对source进行解码，同时将值放在flag列表里面
result = result.decode()
"""
将操作后的result进行转换，b64decode后操作的对象
是byte类型的字符串，而split函数要用str类型的
"""
flag = base64.b64decode(result.split(':')[1])
"""
用split函数进行截取，因为抓包的flag有:所以从它后面进行划分，
[1]代表选取第二部分（从0开始）因为这个函数操作类型必须是str型所以有上一步
"""
data = {'margin': flag}  # 相当于创建一个字典将margin对应flag
print(data)
print(s.post(url, data).text)  # 用post方法传入margin，同时输出
