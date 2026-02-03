dice1, dice2, dice3 = map(int, input().split())

# if dice1 == dice2 :
#     if dice1 == dice3:  # 3개 같음
#         price = 10000 + dice1 * 1000
#     else:               # 2개 같음(1,2)
#         price = 1000 + dice1 * 100
# else:
#     if dice1 == dice3:  #(1,2 다름/1, 3같음)
#         price = 1000 + dice1 * 100
        
#     elif dice2 == dice3:    #(1,2 다름/2,3같음)
#         price = 1000 + dice2 * 100
        
#     else:       # 셋 다 다름
#         price = 100 * max(dice1, dice2, dice3)

if dice1 == dice2 == dice3:
    price = 10000 + dice1 * 1000
elif dice1 == dice2 or dice2 == dice3:
    price = 1000 + dice2 * 100
elif dice1 == dice3:
    price = 1000 + dice1 * 100
else:
    price = 100 * max(dice1, dice2, dice3)


print(price)
