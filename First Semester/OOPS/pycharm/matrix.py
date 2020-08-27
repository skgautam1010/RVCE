from random import randint as r
matrix=[]
rows=3
coloumn=3
find=int(input("enter the number to be found: "))
store=[]
main_diagonal,sec_diagonal,sum=0,0,0
for i in range(rows):
    a=[]
    for j in range(coloumn):
        a.append(r(0,5))
    matrix.append(a)
for i in range(rows):
    for j in range(coloumn):
        print(str(matrix[i][j]).zfill(2),end=" ")
        if i==j:
            main_diagonal +=matrix[i][j]
        if i==2-j:
            sec_diagonal +=matrix[i][j]
        sum +=matrix[i][j]
        if matrix[i][j]==find:
            store.append((i,j))
    print()
print("main_diag",main_diagonal)
print("secondary",sec_diagonal)
print("sum",sum)
print(store)
dict={"one":1,"two":2,"three":3}
list=[[k,v] for k,v in dict.items()]
print(list)
list1=[j for i in matrix for j in i]
print(list1)