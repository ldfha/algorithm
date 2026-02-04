while True:
    try:
        a, b = map(int, input().split())
    except EOFError:
        break
    if a != 0 or b != 0:
        print(a+b)
    