n = int(input()) # 색종이 수
paper = [[0 for _ in range(100)] for _ in range(100)]
area = 0
for i in range(n):
    x, y = map(int, input().split())
    for j in range(10):
        for k in range(10):
            if paper[x + j][y + k] != 1:
                paper[x + j][y + k] = 1
                area += 1

print(area)