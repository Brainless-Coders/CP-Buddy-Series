def check(str1):
    z = []
    count1 = 0
    for i in str1:
        if i not in z:
            z.append(i)
            k = str1.count(i)
            count1 = count1 + k - 1
    print(count1)

tc = int(input())
l = []
for i in range(tc):
    check(input())
