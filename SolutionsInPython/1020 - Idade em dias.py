idadeEmDias = int(input())
anos = idadeEmDias //365 #descobre os dias em anos
meses = (idadeEmDias - anos * 365) // 30  #subtrai a contidade de anos nos dias e pega a quantidade de meses
dias  = idadeEmDias - meses * 30 - anos * 365  #retira a quantidade de anos e meses dos dias, restando assim somente os dias

print(f'{anos} ano(s)\n{meses} mes(es)\n{dias} dia(s)')