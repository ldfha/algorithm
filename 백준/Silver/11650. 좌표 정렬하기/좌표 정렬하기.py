N = int(input())
points = []
for i in range(N):
    points.append(list(map(int, input().split())))
# for i in range(N):  # 0 1 2 3 4
#     for j in range(i + 1, N):
#         if points[i][0] > points[j][0]:
#             points[i], points[j] = points[j], points[i]
#         elif points[i][0] == points[j][0]:
#             if points[i][1] > points[j][1]:
#                 points[i], points[j] = points[j], points[i]
points.sort()
for p in points:
    print(*p) 