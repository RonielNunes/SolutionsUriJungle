cedulas = int(input())
print(cedulas)
cem = cedulas // 100 #divisão inteira
cedulas %= 100 # pega o resto da divisãoS
cinquenta = cedulas // 50
cedulas %= 50
vinte = cedulas // 20
cedulas %= 20
dez = cedulas // 10
cedulas %= 10
cinco = cedulas //5
cedulas %= 5
dois = cedulas // 2
cedulas %= 2
um = cedulas // 1
print(cem,"nota(s) de R$ 100,00")
print(cinquenta,"nota(s) de R$ 50,00")
print(vinte,"nota(s) de R$ 20,00")
print(dez,"nota(s) de R$ 10,00")
print(cinco,"nota(s) de R$ 5,00")
print(dois,"nota(s) de R$ 2,00")
print(um,"nota(s) de R$ 1,00")