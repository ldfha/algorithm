x = int(input())
y = int(input())

q = 1

if x > 0 and y > 0:
    q = 1
elif x < 0 and y > 0:
    q = 2
elif x < 0 and y < 0:
    q = 3
else:
    q = 4
print(q)