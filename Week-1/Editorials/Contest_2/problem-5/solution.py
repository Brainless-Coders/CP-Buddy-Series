def pal(str1) : 
    count = [0]*(256) 
    for i in range( 0, len(str1)) : 
        count[ord(str1[i])] += 1
    od = 0    
    for i in range(0, 256): 
        if (count[i] & 1): 
            od += 1
        if (od > 1) : 
            return False               
    return True


tc = int(input())
l = []
for i in range(tc):
    #l.append(input())
    if (pal(input())):
        print("Yes")
    else:
        print("No")
