def largest_prime(num, div=2):
    while div<num:
        if num%div == 0 and num/div>1:
            num/=div
            div = 2
        else:
            div+=1
    return num

print(largest_prime(600851475143))