lista = []
lista = input().split()

listaOrdenada = []

listaOrdenada = lista.copy()
listaOrdenada.sort()

print()
for value in lista:
    print(value)

print()
for i in listaOrdenada:
    print(i)
