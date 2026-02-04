n, k = map(int, input().split())
a_list = []
cnt = {}
for _ in range(n):
    a_list.append(int(input()))
a_list.reverse()
for a in a_list:
    if k >= a:
        cnt[a] = k // a
        k -= a * (k // a)
    else:
        cnt[a] = 0
# print(cnt)
print(sum(cnt.values()))