import sys
input = sys.stdin.readline
N = int(input())
points = []
for i in range(N):
    x, y = map(int, input().split())
    points.append([y, x])

points.sort()
for p in points:
    print(*p[::-1]) 