def solver():
    L = int(input())
    C = int(input())
    typeOne = (L * C) + ((L - 1) * (C - 1))
    typeTwo = (2 * (L - 1)) +  (2 * (C - 1))
    print(f'{typeOne}\n{typeTwo}')


if __name__=='__main__':
    solver()