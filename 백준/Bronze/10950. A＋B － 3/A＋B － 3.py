n = int(input())
datas = []
for i in range(n):
    datas.append(input())

for data in datas:
    a, b = map(int, data.split())
    print(a+b)