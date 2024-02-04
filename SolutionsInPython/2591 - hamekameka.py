n = int(input())

for i in range(n):
    s = str(input())

    h, k = s.split('k')
    hlen = len(h)
    klen = len(k)

    h = h.replace('a','')
    k = k.replace('a','')

    q1 = hlen - len(h)
    q2 = klen - len(k)

    print('k' + 'a'*(q1*q2))
