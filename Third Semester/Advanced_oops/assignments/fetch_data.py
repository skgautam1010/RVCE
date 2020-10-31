from GoogleNews import GoogleNews

googlenews=GoogleNews(lang='en')
googlenews = GoogleNews(start='09/02/2020',end='10/28/2020')
googlenews.search('MODI')
file=open("news.txt","a")
str=""
file.write(str.join(googlenews.gettext()))
file.close()
#print(googlenews.gettext())
googlenews.clear()


