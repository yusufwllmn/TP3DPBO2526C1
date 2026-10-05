#pragma once
#include "Hidangan.cpp"

class Minuman : public Hidangan {
private:
    string ukuran;
    string suhu;

public:
    Minuman(string kode, string nama, double harga,
            string ukuran, string suhu)
        : Hidangan(kode, nama, harga) {
        this->ukuran = ukuran;
        this->suhu = suhu;
    }

    // Getter
    string getUkuran() { return ukuran; }
    string getSuhu() { return suhu; }

    // Setter
    void setUkuran(string ukuran) { this->ukuran = ukuran; }
    void setSuhu(string suhu) { this->suhu = suhu; }

    void tampilkan() {
        cout << "[Minuman] ";
        Hidangan::tampilkan();
        cout << "   Ukuran    : " << ukuran << endl;
        cout << "   Suhu      : " << suhu << endl;
    }
};
