N = int(input())
count = 0
start = '665'
while N != count:
    start = str(int(start) + 1)
    for i in range(len(start) - 2):
        n = start[len(start)-3-i::]
        if n.startswith('666'):
            N -= 1
            break
print(start)