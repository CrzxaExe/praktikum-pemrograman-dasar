def factorial(num):
    if num < 1: return 1
    return num * factorial(num -1)

n = int(input("Masukan angka: "))

print(f"{n}! adalah {factorial(n)}")