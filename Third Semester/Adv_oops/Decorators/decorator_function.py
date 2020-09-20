# def func(*args,**kwargs):
#     print(args)
#     print(kwargs)

# func(1,2,3,4,a=1,b=2)

# def func1(session):
#     def inner_func(message):
#         print('{0}-{1}'.format(session,message))
#     return inner_func

# f=func1("Good Afternoon")
#print(f)
#f('skgautam')

# def html_tag(tag):
#     def inner_tag(msg):
#         print("<{0}> {1} </{0}>".format(tag,msg))
#     return inner_tag

# f=html_tag('h1')
# f('hello world')

#function within a function
# def outer_func(display):
#     def inner_func():
#         print("before the function executes")
#         display()
#         print("after the function executes")
#     return inner_func

# def display():
#     print("inside display")

# o=outer_func(display)
# o()

#function within a function with arguments

# def print_args(func):
#     def inner_func(*args):
#         t=[]
#         a=0
#         inc=0
#         print("Before the function executes",args)
#         func()
#         print("after the function executes")
#         for i in args:
#             if not isinstance(i,type(args)):
#                 t.append(i)
#             else:
#                 a=a+inc(i)
#                 inc=inc+1
#         t.append(a)
#         print(inc)
#         print(t)
#         if inc==1:
#             print("no of argumants are only {0}".format(args))
#         elif inc==2:
#             print('the no of arguments ar two {0} and {1}'.format(args,t.pop()))
#         else:
#             print("the number of argument are more %s and sum is %d" %(args,t.pop()))
#     return inner_func

# @print_args
# def display(*args):
#     print("no of argument")

#p=print_args(display)
#p()

#display(1,2,3)

#decorator with order

# def decorator_one(func):
#     print("prints before the function executes")
#     return func
# def decorator_two(func):
#     print("before the function")
#     return func

# @decorator_two
# @decorator_one
# def add(x,y):
#     print(x+y)

# add(2,5)
#add=decorator_two(decorator_one(add(2,5)))
#print(add)


#multiple function as an input

# def star(func):
#     def my_print(args):
#         print('*'*20)
#         func(args)
#         print('*'*20)
#     return my_print

# @star
# def hash(func):
#     print('#'*20)
#     print(func)
#     print('#'*20)

#s=star(hash)
#s("Hello world")

#hash("Hello world")

# def star(func):
#     def my_print(args):
#         print('*'*30)
#         func(args)
#         print('*'*30)
#     return my_print

# def hash(func):
#     def my_print(args):
#         print('#*'*30)
#         func(args)
#         print('#*'*30)
#     return my_print

# @hash
# @star
# def printmsg(q):
#     print(q)

# printmsg('sk gautam')




