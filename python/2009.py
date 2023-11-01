k,n = map(int, input().split()) # k 는 내가 가지고 있는거 / n 은 아메리카노 1잔 당 필요한 쿠폰 수
coffee=0
while(k/n>=1): # 내가 가진 쿠폰 / 가게에서 필요한 쿠폰 의 결과가 커피 한 잔 이상일 때
    coffee = coffee + 1 # 커피 한 잔 구매
    k = k - n + 1 # 쿠폰 쓴 만큼 빼고 쿠폰 한 장 더 받으니까 +1
print(coffee)
