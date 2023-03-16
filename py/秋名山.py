import re
import requests


url='http://114.67.175.224:15487/'
session=requests.session()
req=session.get(url)
exp=re.search(r'(\d+[+\-*])+(\d+)',req.text).group() # \d is nums |+ is  匹配前面表达式至少一个
result = eval(exp)
val= {'value':result}
print(session.post(url, data = val).text)
# # val=exp[]

# import requests #//引入request库
# import re 		#//引入re库

# url = 'http://114.67.175.224:15487/'
# s = requests.session()  #//用session会话保持表达式是同一个
# retuen = s.get(url)
# equation = re.search(r'(\d+[+\-*])+(\d+)', retuen.text).group()

# result = eval(equation)	#//eval() 函数用来执行一个字符串表达式，并返回表达式的值。
# key = {'value':result}
# print(s.post(url, data = key).text)

