x = float(input("Digite um numero:"))

#gdc / algoritmo euclides

def maiorDivisor(x, y):
    b, a = sorted([x, y])
    
    r = a % b
    if r == 0:
        return b
    else:
        return maiorDivisor(r, b)




    