entrada = []
entrada = input().split(' ')
a = int(entrada[0])
b = int(entrada[1])
result = 'Sao Multiplos' if b %a == 0 else 'Nao sao Multiplos'
print(result)