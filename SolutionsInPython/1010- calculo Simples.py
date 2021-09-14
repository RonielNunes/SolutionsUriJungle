vector1 = []
vector2 = []
vector1 = input().split(" ")
vector2 = input().split(" ")
print("VALOR A PAGAR: R$ {:.2f}".format((float(vector1[1])*float(vector1[2])) + (float(vector2[1])*float(vector2[2]))))
