class TenagaKerja:
    def __init__(self, id_pegawai: str, nama_pegawai: str, nomor_telepon: str, tanggal_bergabung: str):
        self.__id_pegawai = str(id_pegawai)
        self.__nama_pegawai = str(nama_pegawai)
        self.__nomor_telepon = str(nomor_telepon)
        self.__tanggal_bergabung = str(tanggal_bergabung)

    # getter
    def getId(self) -> str:
        return self.__id_pegawai

    def getNama(self) -> str:
        return self.__nama_pegawai

    def getTelp(self) -> str:
        return self.__nomor_telepon

    def getTgl(self) -> str:
        return self.__tanggal_bergabung

    # setter
    def setId(self, id_pegawai: str) -> None:
        self.__id_pegawai = str(id_pegawai)

    def setNama(self, nama_pegawai: str) -> None:
        self.__nama_pegawai = str(nama_pegawai)

    def setTelp(self, nomor_telepon: str) -> None:
        self.__nomor_telepon = str(nomor_telepon)

    def setTgl(self, tanggal_bergabung: str) -> None:
        self.__tanggal_bergabung = str(tanggal_bergabung)