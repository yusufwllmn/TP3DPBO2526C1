# Class Makanan (Python) - turunan dari Hidangan
from hidangan import Hidangan


class Makanan(Hidangan):
    def __init__(self, kode, nama, harga, kategori, deskripsi):
        super().__init__(kode, nama, harga)   # panggil constructor parent
        self.__kategori = kategori
        self.__deskripsi = deskripsi

    # Getter
    def get_kategori(self):
        return self.__kategori

    def get_deskripsi(self):
        return self.__deskripsi

    # Setter
    def set_kategori(self, kategori):
        self.__kategori = kategori

    def set_deskripsi(self, deskripsi):
        self.__deskripsi = deskripsi

    def tampilkan(self):
        print("[Makanan] ", end="")
        super().tampilkan()                   # pakai tampilkan() milik Hidangan
        print(f"   Kategori  : {self.__kategori}")
        print(f"   Deskripsi : {self.__deskripsi}")
