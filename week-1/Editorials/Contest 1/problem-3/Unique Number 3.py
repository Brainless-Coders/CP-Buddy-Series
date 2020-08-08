t=int(input())
while(t!=0):
    n,k=input().split()
    n=int(n)
    k=int(k)
    arr=list(map(int,input().split()))
    dict={}
    for i in arr:
        if i in dict:
            dict[i]+=1
        else:
            dict[i]=1
    key_list = list(dict.keys()) 
    val_list = list(dict.values()) 
    for i in dict:
          if dict[i]==1:
            print(key_list[val_list.index(dict[i])]) 
    t-=1