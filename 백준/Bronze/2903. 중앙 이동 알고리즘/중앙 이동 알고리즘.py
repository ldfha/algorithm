# 점 갯수 : P_n = 2 * P_(n-1) - 1
N = int(input())
P = 2   # 초기 한 변에 점 갯수 2개
for i in range(1, N + 1):
    P = 2 * P - 1
print(P**2)    