N = int(input())
n = 2
hap = 1
prev = (n ** 2 - n) / 2
this = (n ** 2 + n) / 2
l = []
while True:
    if N == 1:
        print('1/1')
        break
    if prev < N <= this:
        hap = n + 1
        for i in range(1, hap):
            l += [i]
        if n % 2 != 0:
            l = l[::-1]
        idx = int(N - prev - 1)
        print(f'{l[idx]}/{hap-l[idx]}')
        break
    else :
        n += 1
        prev = (n ** 2 - n) / 2
        this = (n ** 2 + n) / 2