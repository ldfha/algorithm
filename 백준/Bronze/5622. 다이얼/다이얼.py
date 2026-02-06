dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
str = list(input())
time = 0
for s in str:
    for idx, l in enumerate(dial):
        if l.count(s) > 0:
            time += idx+3
print(time)