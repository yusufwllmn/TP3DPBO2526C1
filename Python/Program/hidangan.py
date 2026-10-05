# Class Hidangan (Python) - class induk untuk Makanan, Minuman, dan Paket

class Hidangan:
    def __init__(self, kode, nama, harga):
        self.__kode = kode      # __ artinya private
        self.__nama = nama
        self.__harga = harga

    # Getter
    def get_kode(self):
        return self.__kode

    def get_nama(self):
        return self.__nama

    def get_harga(self):
        return self.__harga

    # Setter
    def set_kode(self, kode):
        self.__kode = kode

    def set_nama(self, nama):
        self.__nama = nama

    def set_harga(self, harga):
        self.__harga = harga

    def tampilkan(self):
        print(f"{self.__kode} - {self.__nama}")
        print(f"   Harga     : Rp{self.__harga:.0f}")
