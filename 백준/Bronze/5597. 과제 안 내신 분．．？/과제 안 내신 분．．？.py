students = [False for _ in range(30)]
for i in range(28):
    n = int(input())
    students[n-1] = True
for number, homework in enumerate(students):
    if not homework:
        print(number+1)