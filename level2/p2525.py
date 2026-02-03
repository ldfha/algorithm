a, b = map(int, input().split())
c = int(input())
h = a; m = 0
if b + c >= 60:
    m = b + c - 60 * ((b + c) // 60)
    h += (b + c) // 60
    if h >= 24:
        h -= 24
else:
    m = b + c

print(h, m)