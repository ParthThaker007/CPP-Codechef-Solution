bob={}
bob[1]=1
mod=1_000_000_007
for i in range(2,1_000_001):
    bob[i]=(bob[i-1]*i)%mod
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split(' ')))
    alice=0
    for k in arr:
        
        alice+=bob[k]
    print(alice%mod)    