alpha = [-1 for _ in range(26)]
str = list(input())
for idx, s in enumerate(str):
    if alpha[ord(s)-97] == -1:
        alpha[ord(s)-97] = idx
print(*alpha)