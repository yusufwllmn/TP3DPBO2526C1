#pragma once
#include "Hidangan.cpp"

class Makanan : public Hidangan {
private:
    string kategori;
    string deskripsi;

public:
    Makanan(string kode, string nama, double harga,
            string kategori, string deskripsi)
        : Hidangan(kode, nama, harga) {
        this->kategori = kategori;
        this->deskripsi = deskripsi;
    }

    // Getter
    string getKategori() { return kategori; }
    string getDeskripsi() { return deskripsi; }

    // Setter
    void setKategori(string kategori) { this->kategori = kategori; }
    void setDeskripsi(string deskripsi) { this->deskripsi = deskripsi; }

    void tampilkan() {
        cout << "[Makanan] ";
        Hidangan::tampilkan();   // pakai tampilkan() milik Hidangan
        cout << "   Kategori  : " << kategori << endl;
        cout << "   Deskripsi : " << deskripsi << endl;
    }
};
