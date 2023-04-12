import keyboard
from datetime import datetime as time

start_time =time.now()
print("计时开始！")
# print("开始时间：%s" % str(start_time).split(' ')[1][:11])
Start_seconds= start_time.second
count=1
while True:
    if keyboard.is_pressed('ENTER'):
        stop_time = time.now()
        break
    if(time.second()):
        print("%ds"% count)
        count+=1
   
# print("结束时间：%s" % str(shop_time).split(' ')[1][:11])

print("计时结束,总计:%s"% str(stop_time - start_time)[:10])
