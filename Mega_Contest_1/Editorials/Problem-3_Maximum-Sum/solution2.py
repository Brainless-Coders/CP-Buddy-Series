def maxSum(a, b, k, n): 
    a.sort() 
    b.sort() 
    i = 0
    j = n - 1
    
    while i < k: 
        if (a[i] < b[j]): 
            a[i], b[j] = b[j], a[i]             
        else: 
            break
        i += 1
        j -= 1
    sum = 0
    for i in range (n): 
        sum += a[i]      
    return(sum) 


tc = int(input())
for i in range(tc):
    kn = input()
    l = list(kn.split(' '))
    l = list(map(int,l))
    #print(tc,kn,l)
    k = l[1]
    n = l[0]
    a1 = input() 
    b1 = input()
    a = list(a1.split(' '))
    b = list(b1.split(' '))
    a = list(map(int,a))
    b = list(map(int,b)) 

    print(maxSum(a, b, k, n)) 
