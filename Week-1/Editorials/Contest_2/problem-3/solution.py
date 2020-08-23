tc = int(input())
l = []
ar = []
k = []
for i in range(tc):
    l.append(int(input()))
    ar.append(input())
    k.append(int(input()))
#print(l)
#print(ar)
#print(k)
for i in range(tc):
    ar[i] = ar[i].split(" ",)
    #print(ar[i])
    for j in range(l[i]):
        ar[i][j] = int(ar[i][j])
    ar[i] = sorted(ar[i])
    print(ar[i][k[i]-1])
