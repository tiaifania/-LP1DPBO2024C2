from Dpr import Dpr


#array
list = []

#iterasi simple
n = int(input())
for i in range (n):
    id = str(input())
    name = str(input())
    bidang = str(input())
    partai = str(input())
    #gender = input()[0]
    
    list.append(Dpr(id, name, bidang, partai))

#foreach
header = "| ID        | Nama              | bidang           | Partai        |"
print("-" * len(header))
print(header)
print("-" * len(header))
i = 0
for anggota in list:
    print("| {:<10} | {:<17} | {:<15} | {:<12} |".format(anggota.get_id(), anggota.get_name(), anggota.get_bidang(), anggota.get_partai()))
    print("-" * len(header))
    #i += 1

perintah = 0
while perintah != 4:
    print("Pilihan proses :\n 1. Tambah\n 2. Hapus\n 3. Sunting\n 4. Selesai\n")
    perintah = int(input())
    if perintah == 1:           #TAMBAH
        
        id = input()
        name = input()
        bidang = input()
        partai = input()
        list.append(Dpr(id, name, bidang, partai))
        
        header = "| ID        | Nama              | bidang           | Partai        |"
        print("-" * len(header))
        print(header)
        print("-" * len(header))
        i = 0
        for anggota in list:
            print("| {:<10} | {:<17} | {:<15} | {:<12} |".format(anggota.get_id(), anggota.get_name(), anggota.get_bidang(), anggota.get_partai()))
            print("-" * len(header))
    
    elif perintah == 2:     #HAPUS
        id = input()
        list = [anggota for anggota in list if anggota.get_id() != id]
        header = "| ID        | Nama              | bidang           | Partai        |"
        print("-" * len(header))
        print(header)
        print("-" * len(header))
        i = 0
        for anggota in list:
            print("| {:<10} | {:<17} | {:<15} | {:<12} |".format(anggota.get_id(), anggota.get_name(), anggota.get_bidang(), anggota.get_partai()))
            print("-" * len(header))
            
    elif perintah == 3:     #EDIT
        id = input()
        name = input()
        bidang = input()
        partai = input()
        
        for i, anggota in enumerate(list):
            if anggota.get_id() == id:
                list[i].set_name(name)
                list[i].set_bidang(bidang)
                list[i].set_partai(partai)
                break
            
        header = "| ID        | Nama              | bidang           | Partai        |"
        print("-" * len(header))
        print(header)
        print("-" * len(header))
        i = 0
        for anggota in list:
            print("| {:<10} | {:<17} | {:<15} | {:<12} |".format(anggota.get_id(), anggota.get_name(), anggota.get_bidang(), anggota.get_partai()))
            print("-" * len(header))
    