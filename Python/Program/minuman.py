# Class Minuman (Python) - turunan dari Hidangan
from hidangan import Hidangan


class Minuman(Hidangan):
    def __init__(self, kode, nama, harga, ukuran, suhu):
        super().__init__(kode, nama, harga)
        self.__ukuran = ukuran
        self.__suhu = suhu

    # Getter
    def get_ukuran(self):
        return self.__ukuran

    def get_suhu(self):
        return self.__suhu

    # Setter
    def set_ukuran(self, ukuran):
        self.__ukuran = ukuran

    def set_suhu(self, suhu):
        self.__suhu = suhu

    def tampilkan(self):
        print("[Minuman] ", end="")
        super().tampilkan()
        print(f"   Ukuran    : {self.__ukuran}")
        print(f"   Suhu      : {self.__suhu}")
