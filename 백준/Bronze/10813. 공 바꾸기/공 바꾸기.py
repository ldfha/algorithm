n, m = map(int, input().split())
basket = []
for i in range(n):
    basket.append(i+1)

for _ in range(m):
    i, j = map(int, input().split())
    basket[i-1], basket[j-1] = basket[j-1], basket[i-1]

print(*basket)