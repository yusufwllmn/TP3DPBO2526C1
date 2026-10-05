#include "Menu.cpp"

int main() {
    Menu menu("Menu Cafe Senja");

    // ----- Data awal -----
    Makanan* m1 = new Makanan("MKN01", "Nasi Goreng Spesial", 25000,
                              "Main Course", "Nasi goreng dengan telur dan ayam");
    Makanan* m2 = new Makanan("MKN02", "Kentang Goreng", 15000,
                              "Camilan", "Kentang goreng renyah dengan saus");
    Minuman* n1 = new Minuman("MNM01", "Es Teh Manis", 8000, "M", "Dingin");

    menu.tambahMakanan(m1);
    menu.tambahMakanan(m2);
    menu.tambahMinuman(n1);

    cout << "########## SEBELUM PENAMBAHAN DATA ##########" << endl;
    menu.tampilkanMenu();

    // ----- Data baru -----
    Makanan* m3 = new Makanan("MKN03", "Brownies Coklat", 18000,
                              "Dessert", "Brownies lembut dengan topping coklat");
    Minuman* n2 = new Minuman("MNM02", "Cappuccino", 22000, "L", "Panas");

    // Paket menunjuk objek yang sudah dibuat di atas
    Paket* p1 = new Paket("PKT01", "Paket Hemat", 0.1, 20);
    p1->tambahHidangan(m1);
    p1->tambahHidangan(n1);

    Paket* p2 = new Paket("PKT02", "Paket Santai Sore", 0.15, 10);
    p2->tambahHidangan(m3);
    p2->tambahHidangan(n2);

    menu.tambahMakanan(m3);
    menu.tambahMinuman(n2);
    menu.tambahPaket(p1);
    menu.tambahPaket(p2);

    cout << "########## SESUDAH PENAMBAHAN DATA ##########" << endl;
    menu.tampilkanMenu();

    // Bukti isi paket menunjuk objek asli: harga paket ikut berubah
    m1->setHarga(27000);
    cout << "########## SETELAH HARGA NASI GORENG DIUBAH ##########" << endl;
    p1->tampilkan();

    return 0;
}
