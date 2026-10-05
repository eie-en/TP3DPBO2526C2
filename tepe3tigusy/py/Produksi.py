from TenagaKerja import TenagaKerja

class Produksi(TenagaKerja):
    def __init__(self, id_pegawai: str, nama_pegawai: str, nomor_telepon: str, tanggal_bergabung: str, tugas: str, kecepatan_produksi: str):
        super().__init__(id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung)
        self.__tugas = str(tugas)
        self.__kecepatan_produksi = str(kecepatan_produksi)

    # getter
    def getTugas(self) -> str:
        return self.__tugas

    def getKecepatan(self) -> str:
        return self.__kecepatan_produksi

    # setter
    def setTugas(self, tugas: str) -> None:
        self.__tugas = str(tugas)

    def setKecepatan(self, kecepatan_produksi: str) -> None:
        self.__kecepatan_produksi = str(kecepatan_produksi)

    def print_info(self):
        print(f"[Produksi] ID: {self.getId()} \n| Nama: {self.getNama()} \n| Telp: {self.getTelp()} \n| "f"Gabung: {self.getTgl()} \n| Tugas: {self.getTugas()} \n| Kecepatan: {self.getKecepatan()}")