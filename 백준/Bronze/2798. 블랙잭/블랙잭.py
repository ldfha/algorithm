N, M = map(int, input().split())
cards = list(map(int, input().split()))
current_max = 0
for i in range(len(cards)):
    for j in range(i + 1, len(cards)):
        for k in range(j + 1, len(cards)):
            total = cards[i] + cards[j] + cards[k]
            if current_max < total and total <= M:
                current_max = total
print(current_max)