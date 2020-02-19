import math
sum1 = 0
for i in range(1,101):
    sum1 += math.pow(i, 2)

temp = 0
sum2 = 0
for j in range(1, 101):
    temp += j

sum2 =  math.pow(temp, 2)

print(sum2 - sum1)