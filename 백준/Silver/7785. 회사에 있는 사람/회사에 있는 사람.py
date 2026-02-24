n = int(input())
jikwon = set()
for _ in range(n):
    name, status = input().split()
    if status == "enter":
        jikwon.add(name)
    else:
        jikwon.remove(name)
sorted_jikwon = sorted(jikwon, reverse=True)
for j in sorted_jikwon:
    print(j)