notas = []
notas = input().split()
n1 = float(notas[0])
n2 = float(notas[1])
n3 = float(notas[2])
n4 = float(notas[3])

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10
notaExame = 0
if media >= 7.0:
    print('Media: {:.1f}\nAluno Aprovado.'.format(media))
elif media <=4.9:
        print('Media: {:.1f}\nAluno Reprovado.'.format(media))
elif media>=5.0  and media <= 6.9:
    notaExame = float(input())
    print("Aluno em exame.")
    print('Nota do exame ',notaExame)
    novaMedia = (media + notaExame)/2

    if novaMedia >= 5:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print('Media final: ',novaMedia)