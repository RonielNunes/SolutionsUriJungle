def solver() -> None:
    interation = int(input())   
    for i in range(interation):
        name = str(input())

        nameLower = name.lower()
        
        stringResult = 'eh facil'
        count = 0
        for j in range(len(nameLower)):
            if(nameLower[j] != 'a' and nameLower[j] != 'e' and nameLower[j] != 'i' and nameLower[j] != 'o' and nameLower[j] != 'u'):
                count += 1
                if(count == 3):
                    stringResult = 'nao eh facil'
                    break
            else:
                count = 0
        print(f'{name} {stringResult}')

def main():
    solver()

if __name__ == "__main__":
    main()
