# cook your dish here
for _ in range(int(input())):
    alice,bob=map(int,input().split())
    veri=alice*(alice+1)//2-1
    if(bob<alice*(alice-1)):
        print(-1)
    else:
        for j in range(alice-1):
            print("1",end=" ")
        print(bob-veri)    
        
