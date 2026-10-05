#pragma once
#include <iostream>
#include <string>

using namespace std;

class TenagaKerja {
private:
    string id_pegawai;
    string nama_pegawai;
    string nomor_telepon;
    string tanggal_bergabung;

public:
    TenagaKerja() : id_pegawai(""), nama_pegawai(""), nomor_telepon(""), tanggal_bergabung("") {}

    TenagaKerja(string id, string nama, string telp, string tgl) {
        this->id_pegawai = id;
        this->nama_pegawai = nama;
        this->nomor_telepon = telp;
        this->tanggal_bergabung = tgl;
    }

    ~TenagaKerja() {}

    // getter
    string getId() const { return id_pegawai; }
    string getNama() const { return nama_pegawai; }
    string getTelp() const { return nomor_telepon; }
    string getTgl() const { return tanggal_bergabung; }

    // setter
    void setId(string id) { this->id_pegawai = id; }
    void setNama(string nama) { this->nama_pegawai = nama; }
    void setTelp(string telp) { this->nomor_telepon = telp; }
    void setTgl(string tgl) { this->tanggal_bergabung = tgl; }
};