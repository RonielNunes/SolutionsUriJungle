tempo = []
tempo = input().split()
horaInicial = int(tempo[0])
minutoInicial = int(tempo[1])
horaFinal = int(tempo[2])
minutoFinal = int(tempo[3])

horas = (24 - horaInicial) + horaFinal if horaFinal <= horaInicial else horaFinal - horaInicial
minutos = (60 - minutoInicial) + minutoFinal if minutoFinal < minutoInicial else minutoFinal - minutoInicial

print('O JOGO DUROU {} HORA(S) E {} MINUTOS'.format(horas,minutos))