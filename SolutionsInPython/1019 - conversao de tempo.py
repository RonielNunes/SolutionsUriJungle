segundos = int(input())
minutos = segundos // 60 #recebe os minutos
segundos = segundos - minutos * 60 #recebe ois segundos restantes
horas = minutos // 60 #recebe as horas
minutos = minutos - horas * 60 # recebe ps restantes dos minutos
print('{}:{}:{}'.format(horas,minutos,segundos))
