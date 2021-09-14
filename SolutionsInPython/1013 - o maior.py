lista =input().split(" ")
a =int(lista[0])
b =int(lista[1])
s =int(lista[2])
Mab = (a + b+abs(a - b))/2
Ms = (Mab+s+abs(Mab-s))/2
print("{} eh o maior".format('%.0f'%Ms))