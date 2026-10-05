#pragma once
#include <vector>
#include "Makanan.cpp"
#include "Minuman.cpp"
#include "Paket.cpp"

class Menu {
private:
    string namaMenu;
    vector<Makanan*> listMakanan;
    vector<Minuman*> listMinuman;
    vector<Paket*> listPaket;

public:
    Menu(string namaMenu) {
        this->namaMenu = namaMenu;
    }

    // Destructor: Menu menghapus semua objek miliknya (inti composition)
    ~Menu() {
        for (int i = 0; i < listMakanan.size(); i++) delete listMakanan[i];
        for (int i = 0; i < listMinuman.size(); i++) delete listMinuman[i];
        for (int i = 0; i < listPaket.size(); i++) delete listPaket[i];
    }

    // Menambah data
    void tambahMakanan(Makanan* m) { listMakanan.push_back(m); }
    void tambahMinuman(Minuman* m) { listMinuman.push_back(m); }
    void tambahPaket(Paket* p) { listPaket.push_back(p); }

    // Getter
    string getNamaMenu() { return namaMenu; }
    vector<Makanan*> getListMakanan() { return listMakanan; }
    vector<Minuman*> getListMinuman() { return listMinuman; }
    vector<Paket*> getListPaket() { return listPaket; }

    // Setter
    void setNamaMenu(string namaMenu) { this->namaMenu = namaMenu; }

    // Menampilkan semua data
    void tampilkanMenu() {
        cout << "===== " << namaMenu << " =====" << endl;
        cout << "Makanan: " << listMakanan.size()
             << ", Minuman: " << listMinuman.size()
             << ", Paket: " << listPaket.size() << endl << endl;

        for (int i = 0; i < listMakanan.size(); i++) {
            listMakanan[i]->tampilkan();
            cout << endl;
        }
        for (int i = 0; i < listMinuman.size(); i++) {
            listMinuman[i]->tampilkan();
            cout << endl;
        }
        for (int i = 0; i < listPaket.size(); i++) {
            listPaket[i]->tampilkan();
            cout << endl;
        }
    }
};
