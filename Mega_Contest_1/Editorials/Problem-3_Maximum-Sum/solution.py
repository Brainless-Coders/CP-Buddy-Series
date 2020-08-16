# Solution to Mega Contest 1 Problem: Maximum Sum

for testcase in range(int(input())):
    n, k = map(int, input().split())
    array_a = list(map(int, input().split()))
    array_b = list(map(int, input().split()))
    if k>0:
        array_a.sort()
        array_b.sort()
        # max_sum = sum(array_a[k:]+array_b[n-k:])
        values = array_a[k:]
        for val in range(k):
            values.append(max(array_a[val], array_b[-val-1]))
        max_sum = sum(values)
    else: max_sum = sum(array_a)
    print(max_sum)