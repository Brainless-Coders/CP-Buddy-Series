str1 = input()

for z1 in range(3):
    record = []
    for i in range((len(str1))-1):
        if str1[i] == str1[i+1] and (i-1) not in record:
            record.append(i)

    x = 0
    #print(record)
    for j in range(len(record)):
        record[j] -= x
        x += 2

    for w in record:
        str1 = str1[0: w:] + str1[w+1 + 1::]

    
if(len(str1)) > 0:
    print(str1)
else:
    print("Empty String")
