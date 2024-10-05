def ladder(n):
    lad = ""
    for i in range(n):
        for j in range(i):
            lad += "*"
        lad +="\n"
    return lad
        
print(ladder(10))