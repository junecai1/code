from importlib.metadata import files
from importlib.resources import path
import os
path = 'D:/资料/文档'
files = os.listdir(path)
for f in files:
    if f.endswith('.txt'):
        print(f)
