def luas_segitiga(a, t):
    return a * t / 2

def display_luas(alas, tinggi):
    hasil = luas_segitiga(alas, tinggi)
    print(f"Luas segitiga dengan panjang alas {alas} tinggi {tinggi} adalah {hasil}")
    
display_luas(
    int(input("Masukan alas: ")),
    int(input("Masukan tinggi: "))
)