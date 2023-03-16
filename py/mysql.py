import pymysql
connect = pymysql.connect(host='localhost', user='root',
                          password='root', charset='utf-8')
cuosor = connect.cursor()
sql = "create database `test2` character set 'utf8';"
cuosor.execute(sql)
connect.close()
