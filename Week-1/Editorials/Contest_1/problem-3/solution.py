#tc: no. of Test Cases
tc = int(input())

# 2d list to take in test cases
l = [[0 for i in range(2)] for j in range(tc)] 
for i in range(tc):
    for j in range(2):
        l[i][j] = input()

ans = []

#loop for each test case
for i in range(tc):
	# strip() to remove extra whitespaces
    k = l[i][1].strip()
    # split() to separate the input 
    nums = list(k.split(' '))
    
    # fill into 'ans' if occurance count is 1 
    for kk in nums:
        if nums.count(kk) == 1:
            ans.append(kk)

#print contents of 'ans'
for z1 in ans:
    print(str(z1))
