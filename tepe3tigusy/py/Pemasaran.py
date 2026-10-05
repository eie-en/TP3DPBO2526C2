from TenagaKerja import TenagaKerja

class Pemasaran(TenagaKerja):
    def __init__(self, id_pegawai: str, nama_pegawai: str, nomor_telepon: str, tanggal_bergabung: str, platform_pegangan: str, jenis_konten: str):
        super().__init__(id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung)
        self.__platform_pegangan = str(platform_pegangan)
        self.__jenis_konten = str(jenis_konten)

    # getter
    def getPlatform(self) -> str:
        return self.__platform_pegangan

    def getKonten(self) -> str:
        return self.__jenis_konten

    # setter
    def setPlatform(self, platform_pegangan: str) -> None:
        self.__platform_pegangan = str(platform_pegangan)

    def setKonten(self, jenis_konten: str) -> None:
        self.__jenis_konten = str(jenis_konten)

    def print_info(self):
        print(f"[Pemasaran] ID: {self.getId()} \n| Nama: {self.getNama()} \n| Telp: {self.getTelp()} \n| "f"Gabung: {self.getTgl()} \n| Platform: {self.getPlatform()} \n| Konten: {self.getKonten()}")