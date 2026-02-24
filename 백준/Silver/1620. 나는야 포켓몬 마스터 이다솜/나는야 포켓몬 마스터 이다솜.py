def reverse_dict(dictionary):
    return dict(map(reversed, dictionary.items()))
import sys
input = sys.stdin.readline
n, m = map(int, input().split())
pocketmon={i+1:input().strip() for i in range(n)}
question=[input().strip() for i in range(m)]
rpkm = reverse_dict(pocketmon)
for q in question:
    if q.isnumeric():
        print(pocketmon[int(q)])
    else:
        print(rpkm[q])