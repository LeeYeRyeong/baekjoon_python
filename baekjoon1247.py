sum = 0
for _ in range(3):
    n = int(input())
    for _ in range(n):
        num = int(input())
        sum += num
    if(sum==0) : print(0)
    elif(sum>0) : print('+')
    else : print("-")
    sum = 0
