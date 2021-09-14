vector = []
vector = input().split(' ')
print('TRIANGULO: {:.3f}'.format(( float(vector[0]) * float(vector[2])/2 )))
print('CIRCULO: {:.3f}'.format(( float(vector[2]) *  3.14159)))
print('TRAPEZIO: {:.3f}'.format(( (float(vector[0]) + float(vector[1] ) * float(vector[2])))))
print('QUADRADO: {:.3f}'.format(( float(vector[1]) * float(vector[1]) )))
print('RETANGULO: {:.3f}'.format(( float(vector[0]) * float(vector[1]) )))