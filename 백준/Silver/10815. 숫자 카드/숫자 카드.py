import sys
input = sys.stdin.readline

N = int(input())
cards_N = set(map(int ,input().split()))
M = int(input())
cards_M = list(map(int ,input().split()))

for m in cards_M:
    if m in cards_N:
        print(1, end=' ')
    else:
        print(0, end=' ')