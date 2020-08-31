for _ in range(int(input())):
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    p = set(map(int,input().split()))
    for _ in range(100):
        for pi in p:
            if a[pi-1] > a[pi]:
                a[pi], a[pi-1] = a[pi-1], a[pi]
    print("YES" if sorted(a[:]) == a else "NO")
    
# Credits : Aaditya Upadhyay
