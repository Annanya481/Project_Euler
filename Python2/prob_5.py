def divides_all(num):
    for i in range(2, 21):
        if num % i != 0:
            return False
    return True

num = 20
while True:
    if divides_all(num):
        break
    else:
        num += 1
print ( num )

