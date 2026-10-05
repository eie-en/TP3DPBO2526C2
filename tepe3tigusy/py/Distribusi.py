from TenagaKerja import TenagaKerja

class Distribusi(TenagaKerja):
    def __init__(self, id_pegawai: str, nama_pegawai: str, nomor_telepon: str, tanggal_bergabung: str, jenis_kendaraan: str, plat_kendaraan: str, area_pengiriman: str):
        super().__init__(id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung)
        self.__jenis_kendaraan = str(jenis_kendaraan)
        self.__plat_kendaraan = str(plat_kendaraan)
        self.__area_pengiriman = str(area_pengiriman)

    # getter
    def getKendaraan(self) -> str:
        return self.__jenis_kendaraan

    def getPlat(self) -> str:
        return self.__plat_kendaraan

    def getArea(self) -> str:
        return self.__area_pengiriman

    # setter
    def setKendaraan(self, jenis_kendaraan: str) -> None:
        self.__jenis_kendaraan = str(jenis_kendaraan)

    def setPlat(self, plat_kendaraan: str) -> None:
        self.__plat_kendaraan = str(plat_kendaraan)

    def setArea(self, area_pengiriman: str) -> None:
        self.__area_pengiriman = str(area_pengiriman)

    def print_info(self):
        print(f"[Distribusi] ID: {self.getId()} \n| Nama: {self.getNama()} \n| Telp: {self.getTelp()} \n| "f"Gabung: {self.getTgl()} \n| Kendaraan: {self.getKendaraan()} ({self.getPlat()}) \n| Area: {self.getArea()}")