N , M = map(int, input().split())
chess_board = [list(input()) for _ in range(N)]
mini = []

chess = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    if i >= 1 and chess[i - 1][0] == 0:
        chess[i][0] = 1
    for j in range(1, M):
        if chess[i][j - 1] == 0:
            chess[i][j] = 1

# count_b는 0을 B, 1을 W로 간주한다.
# count_w는 0을 W, 1을 B로 간주한다.
for l in range(N - 7):
    for k in range(M - 7):
        count_b = 0
        count_w = 0
        for h in range(8):
            for g in range(8):
                if chess[l + h][k + g] == 0 and chess_board[l + h][k + g] == 'W':
                    count_b += 1
                elif chess[l + h][k + g] == 0 and chess_board[l + h][k + g] == 'B':
                    count_w += 1
                elif chess[l + h][k + g] == 1 and chess_board[l + h][k + g] == 'W':
                    count_w += 1
                elif chess[l + h][k + g] == 1 and chess_board[l + h][k + g] == 'B':
                    count_b += 1
        mini.append(min(count_b, count_w)) 
print(min(mini))