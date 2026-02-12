import sys
input = sys.stdin.readline

N = int(input())

members=[]

for _ in range(N):
    age, name = input().split()
    age = int(age)
    members.append([age, name])
members = sorted(members, key=lambda member: member[0])
for member in members:
    print(*member)
