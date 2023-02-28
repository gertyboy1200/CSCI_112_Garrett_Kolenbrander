V = input()
for i in range(V):
    temp = V
    if temp % i == 0:
        length = i
        temp = temp / i
        for j in range(temp):
            width = j
            
