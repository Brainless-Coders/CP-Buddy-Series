#! bin/bash/python3

# Solution to Mega Contest 1 Problem: Sell Candies

for testcase in range(int(input())):
    net_revenue = 0
    n = int(input())
    vals = list(map(int, input().split()))
    vals.sort(reverse=True)
    cost_reduction = 0
    for val in vals:
        net_revenue     += max(val-cost_reduction, 0)
        net_revenue     %= int(1e9+7)
        cost_reduction  += 1
    print(net_revenue)