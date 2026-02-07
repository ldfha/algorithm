words = []
max_len = 0
for i in range(5):
    words.append(list(input()))
    if max_len < len(words[i]):
        max_len = len(words[i])

for j in range(max_len):
    for i in range(5):
        if len(words[i]) > j:
            print(words[i][j], end='')