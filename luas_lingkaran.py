n = int(input("Masukan panjang jari-jari (cm): "))

def luas_lingkaran(r):
    hasil = (r ** 2) * 3.14
    return hasil
    
print(f"Luas Lingkaran: {luas_lingkaran(n)} cm")