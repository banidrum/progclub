import sys
t = int(input('Digite um inteiro: \n'))


while t:
    t-=1
    x, y = map(int, input().split())
    print(x + y)
