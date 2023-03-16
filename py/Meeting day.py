#! python3
# # -*- coding: utf-8 -*-
import datetime
import time
import os
os.system("echo 开始执行")
date1 = datetime.datetime.today()
date2 = '2022-5-1 12:30:00'
date3 = '2022-3-18 20:10:00'
date4 = '2023-12-06 00:00:00'
date5 = '2023-04-20 00:00:00'

# print(date1)
d2 = datetime.datetime.strptime(date2, '%Y-%m-%d %H:%M:%S')
d3 = datetime.datetime.strptime(date3, '%Y-%m-%d %H:%M:%S')
bir = datetime.datetime.strptime(date4, '%Y-%m-%d %H:%M:%S')
exam = datetime.datetime.strptime(date5, '%Y-%m-%d %H:%M:%S')
d = date1 - d2
meeting = date1-d3
birthday = bir-date1
exam_day = exam-date1
# print(datetime.datetime.strftime(meeting))
print("^^^^^^^^^^^^^^^我们在一起的天数^^^^^^^^^^^^")
print('我们已经在一起：{}天'.format(d.days))
# if meeting.days %50 == 0:
#     print('嘀嘀嘀！！！\n 神秘事件：\n我们已经相遇：{}天'.format(meeting.days))
print('我们已经相遇：{}天'.format(meeting.days))
# if int(birthday)<=0:
#     print('距离上次生日：{}天'.format(date1-bir))
# else:
print('距离月月生日还有：{}天'.format(birthday.days))
print('距离月月考试还有：{}天'.format(exam_day.days))

print("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")
os.system("echo successful！！")
# time.sleep(1000000)
