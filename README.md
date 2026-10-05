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

Aku bikin design dengan tema usaha snack lokal. Kayak jajanan basreng, lidi lidian, dan keripik kaca, dikarenakan aku suka micin udah gitu aja. Design ini merupakan jenis hierarchical inheritance, karena cuma ada 1 parent.

Keterangan relasi : 
- Panah biasa adalah inheritance
- Panah dengan awal diamond adalah Komposisi
  - Diamond berada di komposit.
  - Panah menunjuk ke komponen.

Di sini ada dibuat 5 kelas. Dengan keterangan sebagai berikut :
1. **TenagaKerja** berperan sebagai parent class. Mempunyai atribut yang biasanya ada pada pegawai dalam suatu lingkungan kerja :
   - nama
   - id pegawai (primary key)
   - nomor telepon
   - tanggal bergabung.
2. **UsahaSnackLokal** Kelas ini berfungsi sebagai komposit, dengan komposisinya berupa pegawai. Mempunyai atribut :
   - nama toko
   - nama pemilik
   - list pegawai. Pegawainya kita buat in general aja seperti produksi, distribusi, dan pemasaran.
3. **Produksi** merupakan turunan dari TenagaKerja, dan komponen dari UsahaSnackLokal. Pegawai yang mempunyai peran dalam pembuatan snack (fokusnya dapur lah) mempunyai atribut :
   - Tugas, bakal diisi posisinya di dapur tu ngapain. Apakah dia kerjanya goreng goreng, kasih bumbu, packing, atau persiapan bahan (berisihin, motong, bikin adonan, dsb).
   - KecepatanProduksi, sebeenrnya aku kurang tau nama yang pas apa. Tapi intinya kayak dia sejam bisa ngehasilin berapa kilo produk gitu.
4. **Pemasaran** merupakan turunan dari TenagaKerja, dan komponen dari UsahaSnackLokal. Bertugas untuk melakukan promotional terhadap produk, mempunyai atribut :
   - PlatformPegangan. Ini platform yang dia tanggungjawabkan, seperti dia ni admin shopee kah, admin tiketok, instageram, dll.
   - JenisKonten. Karna fokusnya pemasaran, apakah dia admin yang bikin konten live stream, admin endorse, atau short video.
5. Distribusi sama kayak dua sebelumnya. Tapi yang ini tugasnya ya delivery, atributnya sebagai berikut :
   - JenisKendaraan. Apa dia bawa mobil box, motor supra, beat.
   - PlatKendaraan. Ya penting, karena yang bedain kendaraan satu dan lainnya dari nomor plat nya. Oya bisa jadi primary key juga kalo buat database kendaraan gitu gituan, tapi di sini gapake anuan dulu
   - AreaPengiriman. Biar keep in track aja, mengatasi biar pendistribusian tu merata, ga kebanyakan atau kedikitan dalam satu daerah.
