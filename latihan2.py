suhu = int(input("Masukan nilai temperature: "))

print("Cuaca Panas" if suhu > 30 else "Cuaca Hangat" if suhu <= 30 & suhu >= 20 else "Cuaca Dingin" )