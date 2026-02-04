import sys
input = sys.stdin.readline
n = int(input())
str = []
for _ in range(n):
    a, b = map(int, input().split())
    str.append(a+b)

for idx, content in enumerate(str):
    print(f'Case #{idx+1}: {content}')