from bs4 import BeautifulSoup
import requests
r=requests.session()
login_url='https://www.google.com/'
headers={'User-Agent':'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'}
request=r.get(login_url,headers)
soup=BeautifulSoup(request.content,'lxml')
print(soup.prettify())
print(soup.find('input',attrs={'name':'csrfmiddlewaretoken'},type='hidden')['value'])

#with open("google.html","r") as f:
 #   soup=BeautifulSoup(f,'lxml')
#print(type(soup))
#print(soup.prettify())
#print(type(soup.a))
#print(soup.a.text)
#soup_find=soup.find_all('a')
#print(soup_find)
#for t in soup_find:
#    print(t.text)
