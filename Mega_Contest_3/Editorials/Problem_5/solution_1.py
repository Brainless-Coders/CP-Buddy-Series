#Code By Aaditya Upadhyay (aadiupadhyay)
from sys  import stdin,stdout

#Fast input output 
st=lambda:list(stdin.readline().strip())
li=lambda:list(map(int,stdin.readline().split()))
mp=lambda:map(int,stdin.readline().split())
inp=lambda:int(stdin.readline())
pr=lambda n: stdout.write(str(n)+"\n")

mod=1000000007

def solve():
    n,k=mp()        #Taking space separted input 
    i=1
    ma=float('-inf')    #assigning minimum value to ma

    #calculating maximum factor of n which is less than or equal to k
    while i*i<=n:
        if n%i==0:
            if i!=(n//i):
                if i<=k:
                    ma=max(ma,i)

                if n//i <=k:
                    ma=max(ma,n//i)
            else:
                if i<=k:
                    ma=max(ma,i)
        i+=1
    #ma stores the maximum factor of n which is less than or equal to k
    pr(n//ma)
    
#test cases           
for _ in range(inp()):
    solve()
