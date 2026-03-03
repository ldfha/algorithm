import sys
input = sys.stdin.readline

N = int(input())
numbers = dict()
cards = list(map(int, input().split()))
for n in cards:
    numbers[n] = numbers.get(n, 0) + 1
M = int(input())
for n in list(map(int, input().split())):
    print(numbers[n], end=' ') if n in numbers else print('0', end=' ');