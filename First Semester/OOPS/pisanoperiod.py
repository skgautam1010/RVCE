def pisanoPeriod(m): 
    previous, current = 0, 1
    for i in range(0, m * m):
        previous,current= current,(previous+current)%m
        # A Pisano Period starts with 01
        if (previous == 0 and current == 1):
            return i + 1

m=int(input())
print(pisanoPeriod(m))

