from bs4 import BeautifulSoup
import requests
import os
from selenium import webdriver
import time

def main():
	# 判断文件
	if os.path.exists("webpage.html"):
		os.remove("webpage.html")
	# 获取链接
	f = open("D:/code/py/urls.txt")
	try:
		for line in f:
			# line = f.readline()
			#删掉读取的\n
			line = line.strip('\n')
			print(line)
			url = line
			#加载浏览器驱动这里是firefox
			browser = webdriver.Firefox()
			browser.get(url=url)
			#延时加载内容
			time.sleep(2)
			data = browser.page_source #获取源码
			soup = BeautifulSoup(data, 'html.parser') #HTML解析
			dianzan = soup.find('span', class_='CE7XkkTw') 
			browser.close()
			print(dianzan)
			filename = "webpage.html"
			html = open(filename, mode='a', encoding='utf-8')
			#数据异常时标记
			try:
				if dianzan ==None:
					html.write("无效数据\n")
				html.write(dianzan.text+"\n")
			except:
				continue
	finally:
		f.close()
if __name__ == "__main__":
	main()