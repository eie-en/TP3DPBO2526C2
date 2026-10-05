#pragma once
#include <iostream>
#include <string>
#include "TenagaKerja.cpp"

using namespace std;

class Produksi : public TenagaKerja {
private:
    string tugas;
    string kecepatan_produksi;

public:
    Produksi() : TenagaKerja(), tugas(""), kecepatan_produksi("") {}

    Produksi(string id, string nama, string telp, string tgl, string tugas, string kecepatan)
        : TenagaKerja(id, nama, telp, tgl) {
        this->tugas = tugas;
        this->kecepatan_produksi = kecepatan;
    }

    ~Produksi() {}

    // getter
    string getTugas() const { return tugas; }
    string getKecepatan() const { return kecepatan_produksi; }

    // setter
    void setTugas(string tugas) { this->tugas = tugas; }
    void setKecepatan(string kecepatan) { this->kecepatan_produksi = kecepatan; }

    void print_info() const {
        cout << "[Produksi] ID: " << getId() << " \n| Nama: " << getNama() << " \n| Telp: " << getTelp() << " \n| Gabung: " << getTgl()<< " \n| Tugas: " << getTugas() << " \n| Kecepatan: " << getKecepatan() << "\n\n";
    }
};