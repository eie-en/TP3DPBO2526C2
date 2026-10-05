# ⡞⠳⣄⣀⣠⠞⢷ ֹ۪
<p align="center">
  <✦•┈๑⋅⋯ ⋯⋅๑┈•✦>
</p>
    
Saya Aghni Lutvia Sari dengan NIM 2508921 mengerjakan TP2
dalam mata kuliah DPBO untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

## .✦ ݁˖ Penjelasan Design 
<p align="center">
  <img width="319" height="250" alt="image" src="https://github.com/user-attachments/assets/447ca0a6-37d9-41cf-a7c2-f02dcb81af78" />

</p>

Aku bikin design dengan tema usaha snack lokal. Kayak jajanan basreng, lidi lidian, dan keripik kaca, dikarenakan aku suka micin udah gitu aja. 
Keterangan relasi : 
1. Panah biasa adalah inheritance
2. Panah dengan awal diamond adalah Komposisi :
   - Diamond berada di komposit
   - Panah menunjuk ke komponen.

Di sini ada dibuat 5 kelas. Dengan keterangan sebagai berikut :
1. **TenagaKerja** berperan sebagai parent class. Mempunyai atribut yang biasanya ada pada pegawai dalam suatu lingkungan kerja :
   - id_pegawai. Fungsinya sebagai primary key untuk bedain satu pegawai dengan pegawai lain.
   - nama_pegawai. Isinya string dengan nama lengkap pegawai
   - nomor telepon. String nomor kontak pegawai.
   - tanggal bergabung. Tanggal kapan orang tersebut jadi pegawai.
2. **UsahaSnackLokal** Kelas ini berfungsi sebagai komposit, dengan komposisinya berupa pegawai. Mempunyai atribut :
   - nama_toko. Nama usahanya.
   - nama pemilik. Nama pemilik usaha.
   - list pegawai. Pegawainya kita buat in general aja seperti produksi, distribusi, dan pemasaran. Informasi pegawai dalam perusahaan ditampung di list list ini
     
     𑣲⋆ ListProduksi untuk pegawai bidang produksi.
     
     𑣲⋆ ListDistribusi untuk pegawai bidang distribusi.
     
     𑣲⋆ ListPemasaran untuk pegawai bidang Pemasaran.
3. **Produksi** merupakan turunan dari TenagaKerja, dan komponen dari UsahaSnackLokal. Pegawai yang mempunyai peran dalam pembuatan snack (fokusnya dapur lah) mempunyai atribut :
   - Tugas, bakal diisi posisinya di dapur tu ngapain. Apakah dia kerjanya goreng goreng, kasih bumbu, packing, atau persiapan bahan (berisihin, motong, bikin adonan, dsb).
   - KecepatanProduksi, sebeenrnya aku kurang tau nama yang pas apa. Tapi intinya kayak dia sejam bisa ngehasilin berapa kilo produk gitu.
4. **Pemasaran** merupakan turunan dari TenagaKerja, dan komponen dari UsahaSnackLokal. Bertugas untuk melakukan promotional terhadap produk, mempunyai atribut :
   - PlatformPegangan. Ini platform yang dia tanggungjawabkan, seperti dia ni admin shopee kah, admin tiketok, instageram, dll.
   - JenisKonten. Karna fokusnya pemasaran, apakah dia admin yang bikin konten live stream, admin endorse, atau short video.
5. **Distribusi** sama kayak dua sebelumnya. Tapi yang ini tugasnya ya delivery, atributnya sebagai berikut :
   - JenisKendaraan. Apa dia bawa mobil box, motor supra, beat.
   - PlatKendaraan. Ya penting, karena yang bedain kendaraan satu dan lainnya dari nomor plat nya. Oya bisa jadi primary key juga kalo buat database kendaraan gitu gituan, tapi di sini gapake anuan dulu
   - AreaPengiriman. Biar keep in track aja, mengatasi biar pendistribusian tu merata, ga kebanyakan atau kedikitan dalam satu daerah.

## .✦ ݁˖ Pemrograman

𑣲⋆ Methods
1. TenagaKerja (Parent Class)
   -  __init__(self, id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung) Constructor untuk menginisialisasi atribut private dasar pegawai (__id_pegawai, __nama_pegawai, __nomor_telepon, __tanggal_bergabung).
   -  Getter Methods (getId(), getNama(), getTelp(), getTgl()) return nilai atribut private masing-masing agar bisa diakses dari luar kelas.
   -  Setter Methods (setId(), setNama(), setTelp(), setTgl()) Mengubah atau memperbarui nilai atribut private masing-masing dengan data baru.

2. Produksi (Child Class)
   - __init__(self, id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung, tugas, kecepatan_produksi) Constructor yang memanggil super().__init__() untuk mengisi data dasar pegawai di kelas parent, lalu menginisialisasi atribut private khusus produksi (__tugas dan __kecepatan_produksi).
   - Getter Methods (getTugas(), getKecepatan()) Mengembalikan nilai atribut __tugas dan __kecepatan_produksi.
   - Setter Methods (setTugas(), setKecepatan()) Mengubah nilai atribut __tugas dan __kecepatan_produksi.
   - print_info(self) ngeprint data pegawai lewat getter produksi

3. Pemasaran (Child Class)
   - __init__(self, id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung, platform_pegangan, jenis_konten) Constructor yang memanggil super().__init__() untuk mengisi data parent, lalu menginisialisasi atribut private khusus pemasaran (__platform_pegangan dan __jenis_konten).
   - Getter Methods (getPlatform(), getKonten()) Mengembalikan nilai atribut __platform_pegangan dan __jenis_konten.
   - Setter Methods (setPlatform(), setKonten()) Mengubah nilai atribut __platform_pegangan dan __jenis_konten.
   - print_info(self)  ngeprint data pegawai lewat getter produksi

4. Distribusi (Child Class)
   - __init__(self, id_pegawai, nama_pegawai, nomor_telepon, tanggal_bergabung, jenis_kendaraan, plat_kendaraan, area_pengiriman) Constructor yang memanggil super().__init__() untuk mengisi data parent, lalu menginisialisasi atribut private khusus distribusi (__jenis_kendaraan, __plat_kendaraan, dan __area_pengiriman).
   - Getter Methods (getKendaraan(), getPlat(), getArea()) Mengembalikan nilai atribut private divisi distribusi.
   - Setter Methods (setKendaraan(), setPlat(), setArea()) Mengubah nilai atribut private divisi distribusi.
   - print_info(self) ngeprint data pegawai lewat getter produksi

5. UsahaSnackLokal (Composite Class)
   - __init__(self, nama_toko, nama_pemilik) Constructor untuk menginisialisasi identitas toko (__nama_toko dan __nama_pemilik).
   - Getter Methods (getNamaToko(), getNamaPemilik()) Mengembalikan nama toko dan nama pemilik toko.
   - Class Methods (addProduksi(cls, p), addPemasaran(cls, m), addDistribusi(cls, d)) Method berdekorator @classmethod untuk menambahkan objek pegawai (Produksi, Pemasaran, Distribusi) ke dalam list/array komposit masing-masing (list_produksi, list_pemasaran, list_distribusi).
   - printInfoToko(self) Method untuk menampilkan seluruh data toko beserta daftar semua pegawai di tiap divisi secara rapi dan lengkap.

𑣲⋆ Design Program

1. Design ini merupakan jenis **hierarchical inheritance**, karena cuma ada 1 parent yaitu TenagaKerja dengan pewarisnya ada Produksi, Pemasaran, dan Distribusi.
Produksi, Pemasaran, dan Distribusi mewarisi seluruh atribut umum pegawai (__id_pegawai, __nama_pegawai, __nomor_telepon, __tanggal_bergabung) beserta method pendukung dari TenagaKerja. Jadi, manggil atribut anak udah bisa dapet atribut orang tua.

2. Composition di sini UsahaSnackLokal adalah kompositnya, yang mempunyai komponen : Produksi, Pemasaran, dan Distribusi. Karena menurut saya, usaha basreng ini memiliki atau hubungan "Has-A" dengan kelas kelas tersebut. Berjalannya usaha karena ada pegawai di dalamnya. Jadi kelas UsahaSnackLokal ini nampung list pegawai melalui atribut ListProduksi, ListPemasaran, dan ListDistribusi.

𑣲⋆ Alur Program
1. 
