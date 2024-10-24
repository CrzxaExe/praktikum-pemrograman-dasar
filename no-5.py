def handleInput():
    hasil = 0
    i = 0
    
    print("Kosongkan input jika ingin berhenti")
    
    while True:
        try:
            hasil += int(input(f"Masukan angka ke {i+1}: "))
            i += 1
        except ValueError:
            print(f"Hasil dari rata-rata {i} bilangan tersebut adalah {hasil/i}")
            break
    
handleInput()
