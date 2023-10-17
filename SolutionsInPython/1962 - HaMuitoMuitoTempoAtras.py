n = int(input())

for i in range(n):
    year = int(input())
    initial_year = 2015

    diff = initial_year - year
    msg = "D.C" if diff >= 0 else "A.C"
    diff = abs(diff)  # Use a função abs para obter o valor absoluto da diferença
    
    print(f"{diff} {msg}")
