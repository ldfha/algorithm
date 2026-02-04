a, b, c = input().split()
A = int(a) ; B = int(b); C = int(c)
asw1 = (A+B)%C
asw2 = ((A%C) + (B%C))%C
asw3 = (A*B)%C
asw4 = ((A%C) * (B%C))%C
print(f'{asw1}\n{asw2}\n{asw3}\n{asw4}')