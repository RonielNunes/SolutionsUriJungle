pontos = []
pontos = input().split()
a = float(pontos[0])
b = float(pontos[1])
c = float(pontos[2])

if ( a + b ) > c and (a + c) > b and (b + c) > a:
    print('Pimetro = {:.1f}'.format(a + b + c))
else:
    print('Area = {:.1f}'.format(((a + b)*c)/2))