# import requests

# url = "https://www.csdn.net/"
# # url = "http ://10.144.19.136∶15002"
# # sess = requests.session(
# # req = sess.get(url)
# # pattern = " (.*)</p>"
# # match = re.search(pattern,req.text)result = {
# # ' result' : eval(match.group(1))
# # }
# # r = sess.post(url,data=result)print(rsp.text)
# geter = requests.get(url)
# print(geter)
# import re
# import string
# from bs4 import BeautifulSoup
# import requests
# url = "https://www.douyin.com/discover?modal_id=7073782200499571999"
# head ={
#     "Cookie":"__ac_nonce=0636667f0002b8ba4cbe0; __ac_signature=_02B4Z6wo00f01GtC6LgAAIDCMczzrPQAB2Rrc-wAAHm-1c; ttwid=1%7CoCM1Ai5FJpTi8ZDyaeUP0xpyTS5z-xmUn1Isu65N7j4%7C1667655665%7Ca131cf3f4e4254db44af4f31be4dac38653decbc0d9c62e6e7043d98ad9c6caa; douyin.com; home_can_add_dy_2_desktop=%220%22; strategyABtestKey=1667655666.404; s_v_web_id=verify_la3z4joi_HBprZtlA_GreM_4x2W_A862_nK8FunmHqBZq; passport_csrf_token=b202c783a9db2edd5aea180bdc8eec7e; passport_csrf_token_default=b202c783a9db2edd5aea180bdc8eec7e; msToken=JGlI6_5N99lyErQaTFmKmDKsQwxJphEMYVxQEmNqBPDSZDtIzb5tcJcmNohOJOa9Js-uv6JICUiUsB_6qOFS-5dX5mg9SW1oLACBfGL15uICaIytfrdb_FMehsgWsQ==; ttcid=9babfbfc546f4aac87c4106282427db227; tt_scid=JZTy7NVLv26yoYXeVeHb6nIZLtQov0SsjMExUP45VkKzz-Ljnkx6QsOJzKpqXGdl14c3; msToken=ioJtCAvRIpAZ5NYFZZDpmsN5bkeBg2xuk5KyeXinO8sEtpPc8MIsxL4bq8gxqhouFIEFC5-OP2zYn7t-7pLJRcN9oVIqRCiqj2mh4fnN6cJZ2sr8CksADdu2l6GM8Q==; _tea_utm_cache_2018=undefined",
#     "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:106.0) Gecko/20100101 Firefox/106.0"
# }
# req=requests.head(url=url,headers=head)
# head=req.request.headers
# s1=str(head)
# print(s1)
# cookie=re.findall('\'Cookie\':\'[*]\'',s1)
# print(head)
# print(head["Cookie"])
# req.encoding = 'utf-8'
# print(cookie)
# print(req)
# -*- coding: utf-8 -*-
# from selenium import webdriver
# import time
#from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
# from bs4 import BeautifulSoup
# import urllib.request


# user_agent = "Mozilla/5.0 (Windows NT 10.0; WOW64; rv:38.0) Gecko/20100101 Firefox/38.0"

# profile = webdriver.FirefoxProfile()
# profile.set_preference("general.useragent.override", user_agent)

# driver = webdriver.Firefox(firefox_profile=profile)
# #driver = webdriver.Firefox()
# # for line in open("D:/code/py/urls.txt"):

# #     #print(line)
# #     try:
# #         driver.implicitly_wait(10)
# #         driver.maximize_window()
# #         #data = urllib.request.urlopen(line).read().decode()
# #         url=line
# data = driver.get('https://www.jianshu.com/p/d9a5ed98c7f9')
# print(data.page_source)
#dianzan = driver.find_elements_by_xpath("/html/body/div/footer/div[1]/div/div[2]/div[2]/span")
# print(dianzan)

#soup = BeautifulSoup(data, 'html.parser')
#print(soup.find('span', class_='CE7XkkTw'))
# print(dianzan.text)
# time.sleep(300)
#     except:
#         continue
# driver.quit()
# 导入模块

# #driver = webdriver.PhantomJS()
# url = "https://et.xiamenair.com/xiamenair/book/findFlights.action?lang=zh&tripType=0&queryFlightInfo=XMN,PEK,2018-01-15"
# driver.get(url)
# # 获取cookie列表
# cookie_list = driver.get_cookies()
# # 格式化打印cookie
# for cookie in cookie_list:
#     cookie_dict[cookie['name']] = cookie['value']
#     print(cookie_dict)
# from selenium import webdriver

# url = 'https://blog.csdn.net/tiging/article/details/103653575'

# user_agent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_13_6) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/12.0.3 Safari/605.1.15"

# driver_path = '/path/to/geckodriver'

# profile = webdriver.FirefoxProfile()
# profile.set_preference("general.useragent.override", user_agent)

# browser = webdriver.Firefox(executable_path=driver_path, firefox_profile=profile)
# browser.get(url)
# dianzan = browser.find_element_by_xpath("/html/body/div[3]/div[1]/main/div[2]/div/div[2]/ul/li[1]/a/span")
# print(browser.page_source)
# print(dianzan)
# browser.close()


# 使用requests
from bs4 import BeautifulSoup
import requests
import os
if os.path.exists("webpage.html"):
        os.remove("webpage.html")
for line in open("D:/code/py/urls.txt"):
    url = line
    head = {"Cookie": "Cookiedouyin.com; ttwid=1%7CoCM1Ai5FJpTi8ZDyaeUP0xpyTS5z-xmUn1Isu65N7j4%7C1667655665%7Ca131cf3f4e4254db44af4f31be4dac38653decbc0d9c62e6e7043d98ad9c6caa; home_can_add_dy_2_desktop=%220%22; strategyABtestKey=1667693077.422; s_v_web_id=verify_la3z4joi_HBprZtlA_GreM_4x2W_A862_nK8FunmHqBZq; passport_csrf_token=b202c783a9db2edd5aea180bdc8eec7e; passport_csrf_token_default=b202c783a9db2edd5aea180bdc8eec7e; msToken=6w7iP1VYxcF4mqA_rpn9AdlayWpIJ-KHiw7Z5Pry029dxHmQ5HsCJZ4lFS2XFOdM1BdumOfwjkqcbgkGW6GjCarP4glCy6Tsq8doXlwAuJzRiqAjW5TpPQ==; ttcid=9babfbfc546f4aac87c4106282427db227; _tea_utm_cache_2018=undefined; douyin.com; tt_scid=iFI6o4iPw3ElQ5RtaAj3mwvDiY4cH6xXebzDd2sqjY6wS8BsmNEY2chJJfWsQO4p8766; msToken=FSMuz3tba5hFCnmtcTA4oTpmoMd81iaEKDv2aY2V66zwy6r6olxeqmb1J1Ze3oqpOXThT1fcF7DwV8GrIv7QlZxL3rHGvfXdBVo5uFmX05pIRuszVys8MA==; __ac_nonce=0636720330009281fb74a; __ac_signature=_02B4Z6wo00f01XZFvbgAAIDDLMumruV9qJl2dLkAAD76ziVckpdFkY4EZuvWdvj2kA-gvNF5.RO1br7EsIbQnwNZSqRGEgxiIM9z6TxZv91VzUUbM.b3cDpYO9pXGJsgzI7qYomT2UXUB7-O1a",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; WOW64; rv:38.0) Gecko/20100101 Firefox/38.0"}
    data = requests.get(url=url, headers=head)
# print(data.text)
    soup = BeautifulSoup(data.text, 'html.parser')
    dianzan = soup.find('span', class_='CE7XkkTw')
    print(dianzan)
    try:
        filename = "webpage.html"
        html = open(filename, mode='a', encoding='utf-8')
        html.write(dianzan.text)
    except:
        continue
    html.newlines()
