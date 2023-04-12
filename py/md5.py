import hashlib

url="http://"

for i in range(100000000):
    md5=hashlib.md5()
    md5.update("nczy"+str(i).encode('utf-8'))
    md5=md5.hexdigest()
    if md5=="58987b2534c18f1d59f18f596e83f3cb":
        print(i)
        break
