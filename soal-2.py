max = int(input("input : "))

def sn (n):
    total = 0
    for i in range(0, n + 1):
        total += i
    return total

print(f"total : {sn(max)}")