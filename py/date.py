# 时间的替换
import time,datetime
today = datetime.datetime.today()
print('当前时间：',today)
print('当前时间转换成整h整m整s:',today.replace(minute=0, second=0))
# 时间的加减
res1 = today + datetime.timedelta(days=1,minutes=60)
print('增加的时间为res:',res1)

res0 = datetime.datetime.now()
print('未格式化时间res0：',res0)
# 将时间转字符串格式化
res2 = datetime.datetime.now().strftime("%Y/%m/%d")
print('格式化后的时间res:',res2)
# 字符串转时间
res3 = datetime.datetime.strptime('2018/10/11', "%Y/%m/%d")
print('字符串转特定的时间res：',res3)

 # 转成时间元组
print('转成时间元组:',today.timetuple())

#日期0000时间格式转换为普通时间格式
str_time ='2018-12-14 00:00:00'
start_date = datetime.datetime.strptime(str_time, "%Y-%m-%d %H:%M:%S")
print('start_date:',start_date)

print('---------第二部分----------')

from datetime import datetime
from datetime import timedelta
# 1) 获取当前日期和时间
today = datetime.today()    # 返回当前时间时分秒都为0
print('当前today:',today)
today1 = datetime.now()  # 返回当前日期和时间
# now.hour # 时
# now.minute # 分
# now.isoweekday（）# 返回的1-7代表周一--周日；
# now.weekday（）# 返回的0-6代表周一--到周日
# 而标准格式种%w 1-6表示周一--周六，0代表周日
print('today1', today1 )
today2 = datetime.utcnow()  # 返回当前东八区时间就是比当时时间少8个小时
print('today2:',today2)


# 2) 获取指定日期和时间,加减计算
time= datetime(2019, 5, 12, 12, 13, 14)
d= time + timedelta(weeks=0, days=0, hours=0, minutes=0,  seconds=0, milliseconds=0, microseconds=0, )
#依次为 "周" "天", "时","分","秒","毫秒","微秒"
print('time:',time)
print('d:',d)

time1= "2019-5-12 12:13:14"		# 字符串 日期
d1 = datetime.strptime(str(time1),'%Y-%m-%d %H:%M:%S')
plus= d1 + timedelta(days=1)		# 加
minus = d1 - timedelta(days=1)		# 减
print('d1:',d1)
print('plus:',plus)
print('minus:',minus)

time2= 20190512121314
d2 = datetime.strptime(str(time2),'%Y%m%d%H%M%S')
delta = d2  + timedelta(days=1)
print('time2:',time2)
print('d2:',d2 )
print('delta:',delta)

# 3) 日期datetime-timestamp 时间戳相互转
now_stamp = time.timestamp()
print('指定时间对应时间戳 :', now_stamp)

print('对应本地时间 :', datetime.fromtimestamp(now_stamp ))
print('UTC标准时间 :', datetime.utcfromtimestamp(now_stamp ))
print('本周的第几天:', datetime.fromtimestamp(now_stamp ).weekday())


# 4) datetime 时间 转换为str字符串
now = datetime.now()
print('当前时间的的:', now)
print('转换为str字符串:',now.strftime('%Y%m%d%H%M%S'))

print('--------第三部分-------------')
import datetime
from datetime import timedelta

now = datetime.datetime.now()
print('now:',now)
# 今天
today = now
print('today:',today)
# 昨天
yesterday = now - timedelta(days=1)
print('yesterday:',yesterday)
# 明天
tomorrow = now + timedelta(days=1)
print('tomorrow:',tomorrow)
# 当前季度
now_quarter = now.month / 3 if now.month % 3 == 0 else now.month / 3 + 1
print('now_quarter:',now_quarter)
# 本周第一天和最后一天
this_week_start = now - timedelta(days=now.weekday())
this_week_end = now + timedelta(days=6 - now.weekday())
print('this_week_start:',this_week_start)
print('this_week_end:',this_week_end)
# 上周第一天和最后一天
last_week_start = now - timedelta(days=now.weekday() + 7)
last_week_end = now - timedelta(days=now.weekday() + 1)
print('last_week_start:',last_week_start)
print('last_week_end:',last_week_end)

# 本月第一天和最后一天
this_month_start = datetime.datetime(now.year, now.month, 1)
month = now.month + 1
if month == 13:
    month = 1
    year = now.year + 1
    this_month_end = datetime.datetime(now.year + 1, 1, 1) - timedelta(days=1)
    print('this_month_end:',this_month_end )
else:
    this_month_end = datetime.datetime(now.year, now.month + 1, 1) - timedelta(days=1)
    print('this_month_end:',this_month_end )
# 上月第一天和最后一天
last_month_end = this_month_start - timedelta(days=1)
last_month_start = datetime.datetime(last_month_end.year, last_month_end.month, 1)
print('last_month_end:',last_month_end)
print('last_month_start:',last_month_start)
# 本季第一天和最后一天
month = (now.month - 1) - (now.month - 1) % 3 + 1
this_quarter_start = datetime.datetime(now.year, month, 1)
this_quarter_end = datetime.datetime(now.year, month + 3, 1) - timedelta(days=1)
print('this_quarter_start:',this_quarter_start)
print('this_quarter_end:',this_quarter_end)
# 上季第一天和最后一天
last_quarter_end = this_quarter_start - timedelta(days=1)
last_quarter_start = datetime.datetime(last_quarter_end.year, last_quarter_end.month - 2, 1)
print('last_quarter_end:',last_quarter_end)
print('last_quarter_start:',last_quarter_start)

# 本年第一天和最后一天
this_year_start = datetime.datetime(now.year, 1, 1)
this_year_end = datetime.datetime(now.year + 1, 1, 1) - timedelta(days=1)
print('this_year_start:',this_year_start)
print('this_year_end:',this_year_end)
# 去年第一天和最后一天
last_year_end = this_year_start - timedelta(days=1)
last_year_start = datetime.datetime(last_year_end.year, 1, 1)
print('last_year_end:',last_year_end)
print('last_year_start:',last_year_start)
