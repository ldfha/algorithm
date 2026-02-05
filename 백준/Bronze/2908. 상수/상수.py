str = input().split(' ')
print(max(int(str[0][::-1]), int(str[1][::-1])))