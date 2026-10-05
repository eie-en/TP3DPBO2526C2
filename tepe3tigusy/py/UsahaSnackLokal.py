class UsahaSnackLokal:
    def __init__(self, nama_toko: str, nama_pemilik: str):
        self.__nama_toko = str(nama_toko)
        self.__nama_pemilik = str(nama_pemilik)

    # buat penampung komposit
    list_produksi = []
    list_pemasaran = []
    list_distribusi = []

    # getter & setter sederhana
    def getNamaToko(self) -> str:
        return self.__nama_toko

    def getNamaPemilik(self) -> str:
        return self.__nama_pemilik

    # method buat nambah ke list komposisi
    @classmethod
    def addProduksi(cls, p):
        cls.list_produksi.append(p)

    @classmethod
    def addPemasaran(cls, m):
        cls.list_pemasaran.append(m)

    @classmethod
    def addDistribusi(cls, d):
        cls.list_distribusi.append(d)

    # display data serba lengkap
    def printInfoToko(self):
        print(f"=== USAHA SNACK LOKAL: {self.getNamaToko()} ===")
        print(f"Pemilik: {self.getNamaPemilik()}\n")

        print("--- Tim Produksi ---")
        if not self.list_produksi:
            print("  gaada mas, belum ada pegawai produksi")
        for item in self.list_produksi:
            item.print_info()

        print("\n--- Tim Pemasaran ---")
        if not self.list_pemasaran:
            print("  gaada mas, belum ada pegawai pemasaran")
        for item in self.list_pemasaran:
            item.print_info()

        print("\n--- Tim Distribusi ---")
        if not self.list_distribusi:
            print("  gaada mas, belum ada pegawai distribusi")
        for item in self.list_distribusi:
            item.print_info()
        print("---------------------------------------------------\n")