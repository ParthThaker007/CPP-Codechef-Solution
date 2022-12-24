t=int(input())
for i in range(t):
    n=int(input())
    bob=list(map(int,input().split(' ')))
    sum=0
    for x in bob:
        sum+=x
    mod=998244353
    k=((sum*(sum-1))%mod)
    print(k)
    