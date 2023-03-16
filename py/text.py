# # from bs4 import BeautifulSoup
# # import requests
# # import os
# # from selenium import webdriver
# # import time
# # f = open("D:/code/py/urls.txt")
# # url =f.readline()
# # print(url)
# # browser = webdriver.Firefox()
# # browser.get(url)
# # time.sleep(2)
# # data = browser.page_source
# # # print(data)
# # browser.close()
# # # print(data.text)
# # soup = BeautifulSoup(data, 'html.parser')
# # # print(soup)
# # dianzan = soup.find('span', class_='CE7XkkTw')
# # print(dianzan)
# # try:
# #     filename = "webpage.html"
# #     html = open(filename, mode='a', encoding='utf-8')
# #     html.write(url+"\t")
# #     html.write(dianzan.text)
# # except:
# #     print("erro")

# from bs4 import BeautifulSoup
# import requests
# import os
# from selenium import webdriver
# import time

# url = 'https://v.douyin.com/MtTJVeQ/'
# #加载浏览器驱动这里是firefox
# browser = webdriver.Firefox()
# browser.get(url=url)
# #延时加载内容
# time.sleep(2)
# data = browser.page_source #获取源码
# soup = BeautifulSoup(data, 'html.parser') #HTML解析
# dianzan = soup.find('span', class_='CE7XkkTw') 
# browser.close()
# print(dianzan)
# filename = "webpage.html"
# # html = open(filename, mode='a', encoding='utf-8')
# #数据异常时标记
# if dianzan==None:
#     print("0000")
#     # html.write("无效数据\n")


import os
print("列出目录%s"%os.listdir(os.getcwd()))
# if os.path.exists("D:\\code\\py\\img\\wzry\\廉颇"):
#             os.removedirs("D:\\code\\py\\img")