# Class Paket (Python) - turunan dari Hidangan
from hidangan import Hidangan


class Paket(Hidangan):
    def __init__(self, kode, nama, diskon, kuota):
        super().__init__(kode, nama, 0)
        self.__list_hidangan = []    # isi paket (menunjuk objek milik Menu)
        self.__diskon = diskon       # 0.1 artinya diskon 10%
        self.__kuota = kuota

    # Menambah isi paket
    def tambah_hidangan(self, hidangan):
        self.__list_hidangan.append(hidangan)

    # Getter
    def get_list_hidangan(self):
        return self.__list_hidangan

    def get_diskon(self):
        return self.__diskon

    def get_kuota(self):
        return self.__kuota

    # Setter
    def set_diskon(self, diskon):
        self.__diskon = diskon

    def set_kuota(self, kuota):
        self.__kuota = kuota

    # Harga paket = total harga isi - diskon
    def hitung_harga_paket(self):
        total = 0
        for h in self.__list_hidangan:
            total = total + h.get_harga()
        return total - (total * self.__diskon)

    def tampilkan(self):
        print(f"[Paket] {self.get_kode()} - {self.get_nama()}")
        print("   Isi paket :")
        for i, h in enumerate(self.__list_hidangan):
            print(f"     {i + 1}. {h.get_nama()} (Rp{h.get_harga():.0f})")
        print(f"   Diskon    : {self.__diskon * 100:.0f}%")
        print(f"   Kuota     : {self.__kuota}")
        print(f"   Harga     : Rp{self.hitung_harga_paket():.0f}")
