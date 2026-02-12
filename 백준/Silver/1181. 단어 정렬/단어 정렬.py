import sys
input = sys.stdin.readline

N = int(input())
words = [[] for _ in range(51)]

for _ in range(N):
    word = input().strip()
    if word not in words[len(word)]:
        words[len(word)].append(word)

for w in words:
    if w:
        if len(w) == 1:
            print(*w)
        else:
            w.sort()
            for i in w:
                print(i)