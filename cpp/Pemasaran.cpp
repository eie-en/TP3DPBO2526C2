#pragma once
#include <iostream>
#include <string>
#include "TenagaKerja.cpp"

using namespace std;

class Pemasaran : public TenagaKerja {
private:
    string platform_pegangan;
    string jenis_konten;

public:
    Pemasaran() : TenagaKerja(), platform_pegangan(""), jenis_konten("") {}

    Pemasaran(string id, string nama, string telp, string tgl, string platform, string konten)
        : TenagaKerja(id, nama, telp, tgl) {
        this->platform_pegangan = platform;
        this->jenis_konten = konten;
    }

    ~Pemasaran() {}

    // getter
    string getPlatform() const { return platform_pegangan; }
    string getKonten() const { return jenis_konten; }

    // setter
    void setPlatform(string platform) { this->platform_pegangan = platform; }
    void setKonten(string konten) { this->jenis_konten = konten; }

    void print_info() const {
        cout << "[Pemasaran] ID: " << getId() << " \n| Nama: " << getNama()<< " \n| Telp: " << getTelp() << " \n| Gabung: " << getTgl()<< " \n| Platform: " << getPlatform() << " \n| Konten: " << getKonten() << "\n\n";
    }
};