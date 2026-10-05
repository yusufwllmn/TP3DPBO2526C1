#pragma once
#include <vector>
#include "Hidangan.cpp"

class Paket : public Hidangan {
private:
    vector<Hidangan*> listHidangan;   // isi paket (hanya menunjuk, bukan pemilik)
    double diskon;                    // 0.1 artinya diskon 10%
    int kuota;

public:
    Paket(string kode, string nama, double diskon, int kuota)
        : Hidangan(kode, nama, 0) {
        this->diskon = diskon;
        this->kuota = kuota;
    }

    // Paket TIDAK punya destructor / delete,
    // karena isi paket dimiliki oleh Menu.

    // Menambah isi paket
    void tambahHidangan(Hidangan* h) {
        listHidangan.push_back(h);
    }

    // Getter
    vector<Hidangan*> getListHidangan() { return listHidangan; }
    double getDiskon() { return diskon; }
    int getKuota() { return kuota; }

    // Setter
    void setDiskon(double diskon) { this->diskon = diskon; }
    void setKuota(int kuota) { this->kuota = kuota; }

    // Harga paket = total harga isi - diskon
    double hitungHargaPaket() {
        double total = 0;
        for (int i = 0; i < listHidangan.size(); i++) {
            total = total + listHidangan[i]->getHarga();
        }
        return total - (total * diskon);
    }

    void tampilkan() {
        cout << "[Paket] " << getKode() << " - " << getNama() << endl;
        cout << "   Isi paket :" << endl;
        for (int i = 0; i < listHidangan.size(); i++) {
            cout << "     " << i + 1 << ". " << listHidangan[i]->getNama()
                 << " (Rp" << listHidangan[i]->getHarga() << ")" << endl;
        }
        cout << "   Diskon    : " << diskon * 100 << "%" << endl;
        cout << "   Kuota     : " << kuota << endl;
        cout << "   Harga     : Rp" << hitungHargaPaket() << endl;
    }
};
