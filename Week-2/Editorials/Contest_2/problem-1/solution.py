tc = int(input())
count = []
li = []
ans = []
for i in range(tc):
    count.append(input())
    li.append(input())
for x1 in li:
    x1 = x1.replace(' ','')
    x = list(x1)
    s = sorted(x)
    cout = 0
    while (True):
        for i in range(len(x)):
            if(s[i] != x[i]):
                cout += 1
                t = s.index(x[i])
                x[i],x[t] = x[t],x[i]
                #print(x, s, i,x[i],x[s.index(x[i])])
            else:
                continue
            if(s == x):
                #print(s,x)
                break
        if(s == x):
            break
    ans.append(cout)
for q in ans:
    print(q)
