matrix = []
current_max = 0
max_row = 0
max_col = 0
for i in range(9):
    matrix.append(list(map(int, input().split())))
    for j in range(9):
        if matrix[i][j] > current_max:
            current_max = matrix[i][j]
            max_row = i
            max_col = j
print(current_max)
print(max_row+1, max_col+1)