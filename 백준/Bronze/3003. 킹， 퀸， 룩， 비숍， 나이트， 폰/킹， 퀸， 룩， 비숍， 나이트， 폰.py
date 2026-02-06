chess = [1, 1, 2, 2, 2, 8]
donghyuk = list(map(int, input().split()))
print(*([x - y for x, y in zip(chess, donghyuk)]))