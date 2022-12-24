# cook your dish here
def solution(alice,bob):
    while(bob!=0):
        alice,bob=bob,alice%bob
    return alice

for _ in range(int(input())):
    z=int(input())
    l=list(map(int,input().split()))
    der=l[0]
    for i in l:
        der=solution(der,i)
    for i in l:
        print(i//der,end=" " )
    print()    
        
