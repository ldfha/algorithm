import sys
input = sys.stdin.readline
n = int(input())
str = []
for _ in range(n):
    a, b = map(int, input().split())
    str.append(a+b)
print(*str, sep='\n')