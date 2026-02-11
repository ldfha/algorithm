N = int(input())
start = '665'
while N != 0:
    start = str(int(start) + 1)
    if "666" in start:
        N-=1
print(start)