maxi = 0
for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        product = i * j
        if product > maxi:
            s = str(i*j)
            if s == s[::-1]:
                maxi = product

print(maxi)