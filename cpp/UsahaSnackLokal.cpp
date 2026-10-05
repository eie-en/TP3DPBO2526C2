#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produksi.cpp"
#include "Pemasaran.cpp"
#include "Distribusi.cpp"

using namespace std;

class UsahaSnackLokal {
private:
    string nama_toko;
    string nama_pemilik;
    vector<Produksi> list_produksi;
    vector<Pemasaran> list_pemasaran;
    vector<Distribusi> list_distribusi;

public:
    UsahaSnackLokal() : nama_toko(""), nama_pemilik("") {}

    UsahaSnackLokal(string toko, string pemilik) {
        this->nama_toko = toko;
        this->nama_pemilik = pemilik;
    }

    ~UsahaSnackLokal() {}

    // getter
    string getNamaToko() const { return nama_toko; }
    string getNamaPemilik() const { return nama_pemilik; }

    // method penambahan data
    void addProduksi(Produksi p) { list_produksi.push_back(p); }
    void addPemasaran(Pemasaran m) { list_pemasaran.push_back(m); }
    void addDistribusi(Distribusi d) { list_distribusi.push_back(d); }

    void printInfoToko() const {
        cout << "=== USAHA SNACK LOKAL: " << getNamaToko() << " ===\n";
        cout << "Pemilik: " << getNamaPemilik() << "\n\n";

        cout << "--- Tim Produksi ---\n";
        if (list_produksi.empty()) {
            cout << "  gaada mas, belum ada pegawai produksi\n";
        } else {
            for (int i = 0; i < list_produksi.size(); i++) {
                list_produksi[i].print_info();
            }
        }

        cout << "--- Tim Pemasaran ---\n";
        if (list_pemasaran.empty()) {
            cout << "  gaada mas, belum ada pegawai pemasaran\n";
        } else {
            for (int i = 0; i < list_pemasaran.size(); i++) {
                list_pemasaran[i].print_info();
            }
        }

        cout << "--- Tim Distribusi ---\n";
        if (list_distribusi.empty()) {
            cout << "  gaada mas, belum ada pegawai distribusi\n";
        } else {
            for (int i = 0; i < list_distribusi.size(); i++) {
                list_distribusi[i].print_info();
            }
        }
        cout << "---------------------------------------------------\n\n";
    }
};