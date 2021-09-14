horas = []
horas = input().split(' ')
inicio = int(horas[0])
final = int(horas[1])

duracao = ((24 - inicio) + final) if inicio >= final else (final - inicio)

print('O JOGO DUROU {2} HORA(S)'.format(duracao))