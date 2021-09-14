valor = float(input())
#notas
cem = 0;
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
doisReais = 0
#moedas
umReal = 0
cinquentaCentavos = 0
vinteECincoCentavos = 0
dezCentavos = 0
cincoCentavos = 0
umCentavo = 0

while True:
    if valor >= 100:
        valor -=100
        cem +=1
    elif valor >= 50:
        valor -=50
        cinquenta +=1
    elif valor >= 20:
        valor -=20
        vinte +=1
    elif valor >= 10:
        valor -=10
        dez +=1
    elif valor >= 5:
        valor -=5
        cinco +=1
    elif valor >=2:
        valor -=2
        doisReais +=1
    elif valor >= 1:
        valor-= 1
        umReal +=1
    elif valor >= 0.5:
        valor -=0.5
        cinquentaCentavos +=1
    elif valor >= 0.25:
        valor -=0.25    
        vinteECincoCentavos +=1
    elif valor >= 0.1:
        valor -=0.1
        dezCentavos +=1
    elif valor >= 0.05:
        valor-=0.05
        cincoCentavos +=1
    elif valor >= 0.01:
        valor -=0.01
        umCentavo +=1
    else:
        break

print('NOTAS')
print('{} nota(s) de R$ 100.00'.format(cem))
print('{} nota(s) de R$ 50.00'.format(cinquenta))
print('1 nota(s) de R$ 20.00'.format(vinte))
print('0 nota(s) de R$ 10.00'.format(dez))
print('1 nota(s) de R$ 5.00'.format(cinco))
print('0 nota(s) de R$ 2.00'.format(doisReais))
print('MOEDAS:')
print('1 moeda(s) de R$ 1.00'.format(umReal))
print('1 moeda(s) de R$ 0.50'.format(cincoCentavos))
print('0 moeda(s) de R$ 0.25'.format(vinteECincoCentavos))
print('2 moeda(s) de R$ 0.10'.format(dezCentavos))
print('0 moeda(s) de R$ 0.05'.format(cincoCentavos))
print('3 moeda(s) de R$ 0.01'.format(umCentavo))
