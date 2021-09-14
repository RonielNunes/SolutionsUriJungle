lista = []
lista = input().split()
if (int(lista[1]) > int(lista[2])) and (int(lista[3]) > int(lista[0])) and (int(lista[2]) + int(lista[3]) > int(lista[0]) + int(lista[1])) and (int(lista[2]) > 0) and (int(lista[3]) > 0) and (int(lista[0]) % 2 == 0):
    print('Valores aceitos')
else:
    print('Valores nao aceitos')