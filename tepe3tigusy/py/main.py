from Produksi import Produksi
from Pemasaran import Pemasaran
from Distribusi import Distribusi
from UsahaSnackLokal import UsahaSnackLokal

def main():
    # Inisialisasi Toko Utama
    toko = UsahaSnackLokal("Generasi Micin", "SiapaAja")

    print("\nData Sebelum Ditambahkan:")
    toko.printInfoToko()
    
    # Tambah data statis baru untuk semua divisi  
    print("\nZib Zib Zib sebentar ya lagi nambah data...")              
    p1 = Produksi("P001", "Big Nyahu", "08111222333", "2024-05-20", "Bumbui Lidi-Lidian", "20 kg/jam")
    m1 = Pemasaran("M001", "PasmingPuh", "08778899001", "2024-06-11", "Shopee & IG", "Short Video")
    d1 = Distribusi("D001", "Rocky Batu Gak Gerung", "08223344556", "2024-07-01", "Mobil Box", "B 9876 XYZ", "Jabodetabek")

    toko.addProduksi(p1)
    toko.addPemasaran(m1)
    toko.addDistribusi(d1)

    print("\n!! Homre. Data baru berhasil ditambahkan yah !!\n")
    print("\nData Sesudah After Ditambahkan:")
    toko.printInfoToko()

if __name__ == "__main__":
    main()