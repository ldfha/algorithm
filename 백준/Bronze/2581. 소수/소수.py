M = int(input())
N = int(input())
total = 0
minimum = -1

for i in range(M, N+1):
    j = 2
    if i != 1:
        while j < i:
            if i % j == 0:
                break
            j += 1
        else:
            total += i
            minimum = i if minimum == -1 or i < minimum else minimum 

if total != 0 : print(total) 
print(minimum)