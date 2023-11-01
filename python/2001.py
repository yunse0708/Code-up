pasta = [int(input()) for _ in range(3)]
juice = [int(input()) for _ in range(2)]
amount = (min(pasta)+min(juice))
print(amount+0.1*amount)

