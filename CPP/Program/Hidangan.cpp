#pragma once
#include <iostream>
#include <string>
using namespace std;

class Hidangan {
private:
    string kode;
    string nama;
    double harga;

public:
    Hidangan(string kode, string nama, double harga) {
        this->kode = kode;
        this->nama = nama;
        this->harga = harga;
    }

    // Getter
    string getKode() { return kode; }
    string getNama() { return nama; }
    double getHarga() { return harga; }

    // Setter
    void setKode(string kode) { this->kode = kode; }
    void setNama(string nama) { this->nama = nama; }
    void setHarga(double harga) { this->harga = harga; }

    void tampilkan() {
        cout << kode << " - " << nama << endl;
        cout << "   Harga     : Rp" << harga << endl;
    }
};
