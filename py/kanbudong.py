import hashlib
for i in range(1,999999999):
    if(i % 10000000 == 0):
        print("now is:" + str(i) + ",total is 99999999")
    m="s" + str(i) + "a"
    b=hashlib.md5(m.encode('utf-8')).hexdigest()
    if b.startswith('0e'):
        #print (b)
        for xx in range (2,len(b)):
            #print (b[xx])
            if (b[xx] not in "0123456789"):
                break
            elif(xx==len(b)-1):
                print(xx,b[xx],b,i,m)
                break