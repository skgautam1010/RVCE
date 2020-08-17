try:
	while True:
		print("1-->concat\n")
		print("2-->count number of words\n")
		print("3-->count the spaces\n")
		print("4-->uppercase\n")
		print("5-->find word\n")
		print("6-->replace word\n")
		print("7-->exit\n")
		ch=int(input("enter your choice\n"))
		if ch==1:
			f=open("string.txt","w")
			n1=input("enter the string:")
			n2=input("enter the string:")
			n3=n1+n2
			f.write(n3)
			f.close()
			f=open("string.txt","r")
			print(f.read())
			f.close()
		elif ch==2:
			f=open("string.txt","r")
			n3=f.read()
			print("total words==",len(n3.split()))
			f.close()
		elif ch==3:
			f=open("string.txt","r")
			c=f.read()
			d=c.count(' ')
			print("total no of spaces",d)
			f.close()
		elif ch==4:
			f=open("string.txt","r")
			n3=f.read()
			g=open("string1.txt","w")
			g.write(n3.upper())
			g.write( n3[ ::-1])
			g.close()
			g=open("string1.txt","r")
			print(g.read())
			g.close()
		elif ch==5:
			f=open("string.txt","r")
			print(f.read())
			f.seek(0,0)
			c=f.read()
			p=input("enter the word to find:")
			x=c.find(p)
			print("the word is found at index:",x)
			f.close()
		elif ch==6:
			f=open("string.txt","r")
			print(f.read())
			f.seek(0,0)
			c=f.read()
			r=input("enter the word to be replaced:")
			p=input("enter the new word in its place:")
			n=c.replace(r,p)
			print("replaced string:",n)
			f=open("string.txt","a")
			f.write(n)
		elif ch==7:
			break
		else:
			print("wrong input\n")
except NameError as e:
	print(e)
except AttributeError as e:
	print(e)
except ValueError:
	print("value Error: value not correct")
except TypeError:
	print("Type Error: type not correct")
except FileNotFoundError:
	print("filenotfound Error: no files available")
except IOError:
	print("io operation failed")
except KeyboardInterrupt:
	print("keyboard interruption caused")
except RuntimeError:
	print("runtime error")
else:
	print("code running successfully\n")


