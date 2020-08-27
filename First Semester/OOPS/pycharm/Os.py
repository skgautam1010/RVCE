import os
from datetime import datetime
print(dir(os))
#os.chdir('/home/sonu/Desktop')
print(os.getcwd())
for i in os.listdir('/home/sonu/Desktop'):
    print(i)
print(datetime.fromtimestamp(os.stat('java').st_mtime))
for dirpath,dirname,filename in os.walk('/home/sonu/Desktop/os'):
    print('cuurrent dir:',dirpath)
    print('dirs:',dirname)
    print('filename:',filename)
    print('--------------------------------------------------------------')