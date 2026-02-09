# 소인수분해
N = int(input())
d = N
i = 2
while d != 1:
    if d % i == 0:
        print(i)
        d //= i
    else : i += 1