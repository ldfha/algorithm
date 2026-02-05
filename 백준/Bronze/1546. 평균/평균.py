n = int(input())
grade = list(map(int, input().split()))
M = max(grade)
new_grade = [x / M * 100 for x in grade]
print(sum(new_grade)/n)