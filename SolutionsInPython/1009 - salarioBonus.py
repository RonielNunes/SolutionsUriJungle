nome = input()
salarioFixo = float(input())
vendasEfetuadas = float(input())
total = salarioFixo + (vendasEfetuadas * 0.15)
print('TOTAL = R$ {:.2f}'.format(total))