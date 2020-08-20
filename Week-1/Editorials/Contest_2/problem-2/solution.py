def lp(str1) : 
    n = len(str1) 
    
    for part in range(n-1, 0, -1) : 
        #string slicing 
        prefix = str1[0: part] 
        suffix = str1[-part:] 
        
        if (prefix == suffix) : 
            return part
    return 0
    
tc = input()
#print(tc)
s = []
i = 0
while i < int(tc):
    z = str(input())
    i +=1
    print(lp(z)) 
