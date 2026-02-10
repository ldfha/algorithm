N , M = map(int, input().split())
chess_board = [list(input()) for _ in range(N)]
answer = 64     # 최대 칠해야 하는 수

chess = [[0 for _ in range(M)] for _ in range(N)]

# count_b는 0을 B, 1을 W로 간주한다.
# count_w는 0을 W, 1을 B로 간주한다.
for l in range(N - 7):
    for k in range(M - 7):
        count_b = 0
        count_w = 0
        for h in range(8):
            for g in range(8):
                color = 0 if chess_board[l + h][k + g] == 'B' else 1
                if ((l + h)+(k + g)) % 2 == color:
                    count_w += 1
                if ((l + h)+(k + g)) % 2 != color:
                    count_b += 1
        answer = min(answer, min(count_b, count_w))
print(answer)