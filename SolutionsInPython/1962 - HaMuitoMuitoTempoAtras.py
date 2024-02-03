n = int(input())

for i in range(n):
    year = int(input())
    initial_year = 2014

    diff = initial_year - year
    msg = "D.C." if diff >= 0 else "A.C."
    diff = abs(diff)  
    diff = diff + 1 if msg == 'D.C' else diff
    print(f"{diff} {msg}")
