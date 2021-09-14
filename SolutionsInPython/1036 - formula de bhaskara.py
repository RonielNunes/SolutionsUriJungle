import math
ent = input().split(" ")
a = float(ent[0])
b = float(ent[1])
c = float(ent[2])
f = ((b**2)-(4*(a*c)))
if (f < 0) or (a == 0.0):
    print("Impossivel calcular")
elif (a !=0):
    x1 = (-b+(math.sqrt(f)))/(2*a)
    x2 = (-b-(math.sqrt(f)))/(2*a)
    print("R1 = {}".format("%.5f"%x1))
    print("R2 = {}".format("%.5f"%x2))