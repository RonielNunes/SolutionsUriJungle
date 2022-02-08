caracter = input()
tam = 12
result = 0
count = 0
aux = 0

for i in range(tam):
    for j in range(tam):
        aux = float(input())
        if i > j:
            result += aux
            count+=1

if caracter == 'S':
    print(f'{result:.1f}')
else:
    result = result/count
    print(f'{result:.1f}')