a = 0
b = 1
c = 1
sum1 = 0
while c < 4000000:
    c = a + b
    if c % 2 == 0:
        sum1 += c
    a = b
    b = c
print(sum1)