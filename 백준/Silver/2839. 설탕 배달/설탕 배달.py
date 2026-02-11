N = int(input())
mini = N    
for i in range(N // 5 + 1):
    total = N - 5 * i 
    three = total // 3 
    if total - three * 3 == 0:     
        mini = i + three if i + three < mini else mini
if mini == N:
    print(-1)
else:
    print(mini)