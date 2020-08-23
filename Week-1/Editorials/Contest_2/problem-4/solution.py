len1 = input()
str1 = input()
low = []
up = []
for i in str1:
    if i.islower():
        low.append(i)
    elif i.isupper():
        up.append(i)
up.sort()
low.sort()

newstr = ""
j = 0
u = 0
l = 0
for i in str1:
    #print((newstr),j)
    if i.isupper():
        #print(newstr,j,up,u)
        newstr = newstr + up[u]
        u += 1
    elif i.islower():
        newstr = newstr + low[l]
        l += 1
    j += 1
print(newstr)
