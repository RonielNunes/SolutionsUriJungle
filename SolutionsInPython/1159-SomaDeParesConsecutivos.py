while True:
    result = 0
    x = int(input())
    if x == 0:
        break
    else:
        count = 0
        while count != 5:
            if x % 2==0:
                result += x
                count +=1
            x +=1
    print(result)
