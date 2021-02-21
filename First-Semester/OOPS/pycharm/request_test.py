import requests
#r=requests.get('https://www.google.com')
#print(r.text)
#file=open("google.html","w+")
#file.write(r.text)
payload={
    'name':"Sonu gautam",
    'pass':'12345678'
}
params={
    'page':'5'
}
headers={
    'User-Agent':'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'

}
r1=requests.post("https://httpbin.org/post",data=payload,params=params,headers=headers)
print(r1.text)