N, M = map(int, input().split())
matrixA = []
matrixB = []
for _ in range(N):
    matrixA.append(list(map(int, input().split())))
for _ in range(N):
    matrixB.append(list(map(int, input().split())))

matrixS = [[0]*M for i in range(N)]
for i in range(N):
    for j in range(M):
        matrixS[i][j] = matrixA[i][j]+matrixB[i][j]
    print(*matrixS[i])