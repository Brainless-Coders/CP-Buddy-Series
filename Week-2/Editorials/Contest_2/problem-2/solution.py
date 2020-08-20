tc = int(input())
for z in range(tc):
    n = int(input())
    x = input()
    x = x.replace(' ','')
    arr = list(x)
    #print(arr)
    inv = 0
    for i in range(n): 
        for j in range(i + 1, n): 
            if (arr[i] > arr[j]): 
                inv += 1

    print(inv) 
