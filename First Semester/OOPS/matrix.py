matrix1=[[1,2],[5,6]]
matrix2=[[5,8],[9,7]]
addition=[[0,0],[0,0]]
for i in range(2):
	for j in range(2):
		print(matrix1[i][j],end=" ")
	print()
print()
for i in range(2):
	for j in range(2):
		print(matrix2[i][j],end=" ")
	print()
print()
for i in range(2):
	for j in range(2):
		addition[i][j]=matrix1[i][j]+matrix2[i][j]
		print(addition[i][j],end=" ")
	print()


