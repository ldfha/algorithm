T = int(input())
for _ in range(T):
    R, S = input().split()
    R = int(R); S = list(S)
    str=''
    for s in S:
        str+=s*R 
    print(str)