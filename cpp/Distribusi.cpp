#pragma once
#include <iostream>
#include <string>
#include "TenagaKerja.cpp"

using namespace std;

class Distribusi : public TenagaKerja {
private:
    string jenis_kendaraan;
    string plat_kendaraan;
    string area_pengiriman;

public:
    Distribusi() : TenagaKerja(), jenis_kendaraan(""), plat_kendaraan(""), area_pengiriman("") {}

    Distribusi(string id, string nama, string telp, string tgl, string kendaraan, string plat, string area)
        : TenagaKerja(id, nama, telp, tgl) {
        this->jenis_kendaraan = kendaraan;
        this->plat_kendaraan = plat;
        this->area_pengiriman = area;
    }

    ~Distribusi() {}

    // getter
    string getKendaraan() const { return jenis_kendaraan; }
    string getPlat() const { return plat_kendaraan; }
    string getArea() const { return area_pengiriman; }

    // setter
    void setKendaraan(string kendaraan) { this->jenis_kendaraan = kendaraan; }
    void setPlat(string plat) { this->plat_kendaraan = plat; }
    void setArea(string area) { this->area_pengiriman = area; }

    void print_info() const {
        cout << "[Distribusi] ID: " << getId() << " \n| Nama: " << getNama()<< " \n| Telp: " << getTelp() << " \n| Gabung: " << getTgl()<< " \n| Kendaraan: " << getKendaraan() << " (" << getPlat() << ") \n| Area: " << getArea() << "\n\n";
    }
};