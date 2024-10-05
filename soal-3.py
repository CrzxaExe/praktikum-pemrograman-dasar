def find_min_num():
    arr = []
    
    for i in range(0, 10):
        arr.insert(i, int(input(f"Masukan angka ke-{i+1} : ")))
        
    return min(arr)

print(f"\nAngka terkecil adalah : {find_min_num()}")