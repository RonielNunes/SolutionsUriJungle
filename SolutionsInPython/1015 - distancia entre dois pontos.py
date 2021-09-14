from math import sqrt
from math import pow

pontoA = []
pontoB = []
pontoA = input().split(' ')
pontoB = input().split(' ')
distancia = sqrt(pow(float(pontoA[0])- float(pontoB[0]),2) + pow(float(pontoA[1]) - float(pontoB[1]),2))
print('%.4f'%distancia)
print('{}'.format('%.4f'%distancia))
print('{:.4f}'.format(distancia))