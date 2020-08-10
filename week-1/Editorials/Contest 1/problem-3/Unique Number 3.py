t=int(input()) #To accept number of testcases
while(t!=0):
    n,k=input().split() #accept the input
    n=int(n)
    k=int(k)
    arr=list(map(int,input().split()))  # to get the array of elements
    dict={}
    for i in arr:
        if i in dict:
            dict[i]+=1  #if element present in dict increment by one
        else:
            dict[i]=1   #if element not present the dict intialise with 1
    #store the key and values of dict in lists
    key_list = list(dict.keys()) 
    val_list = list(dict.values()) 
    for i in dict:
          if dict[i]==1:
            print(key_list[val_list.index(dict[i])])  #print the key of the unique element present the given arr of elements
    t-=1 #decrement the number of test cases by 1
