#include <iostream>
#include "UsahaSnackLokal.cpp"

using namespace std;

int main() {
    // Inisialisasi Toko Utama
    UsahaSnackLokal toko("Generasi Micin", "SiapaAja");

    cout << "\nData Sebelum Ditambahkan:\n";
    toko.printInfoToko();

    // Tambah data statis baru untuk semua divisi
    cout << "\nZib Zib Zib sebentar ya lagi nambah data...\n";
    Produksi p1("P001", "Big Nyahu", "08111222333", "2024-05-20", "Bumbui Lidi-Lidian", "20 kg/jam");
    Pemasaran m1("M001", "PasmingPuh", "08778899001", "2024-06-11", "Shopee & IG", "Short Video");
    Distribusi d1("D001", "Rocky Batu Gak Gerung", "08223344556", "2024-07-01", "Mobil Box", "B 9876 XYZ", "Jabodetabek");

    toko.addProduksi(p1);
    toko.addPemasaran(m1);
    toko.addDistribusi(d1);

    cout << "\n!! Homre. Data baru berhasil ditambahkan yah !!\n\n";
    cout << "\nData Sesudah After Ditambahkan:\n";
    toko.printInfoToko();

    return 0;
}