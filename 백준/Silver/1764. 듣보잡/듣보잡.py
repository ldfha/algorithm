import sys
input = sys.stdin.readline

N, M = map(int, input().split())
hear = set()
see = set()
for _ in range(N):
    hear.add(input().rstrip('\n'))
for _ in range(M):
    see.add(input().rstrip('\n'))

items = sorted(hear&see)
print(len(items))
for i in items:
    print(i)