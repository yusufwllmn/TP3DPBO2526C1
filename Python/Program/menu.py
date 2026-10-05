# Class Menu (Python) - memiliki daftar makanan, minuman, dan paket (composition)


class Menu:
    def __init__(self, nama_menu):
        self.__nama_menu = nama_menu
        self.__list_makanan = []
        self.__list_minuman = []
        self.__list_paket = []

    # Menambah data
    def tambah_makanan(self, makanan):
        self.__list_makanan.append(makanan)

    def tambah_minuman(self, minuman):
        self.__list_minuman.append(minuman)

    def tambah_paket(self, paket):
        self.__list_paket.append(paket)

    # Getter
    def get_nama_menu(self):
        return self.__nama_menu

    def get_list_makanan(self):
        return self.__list_makanan

    def get_list_minuman(self):
        return self.__list_minuman

    def get_list_paket(self):
        return self.__list_paket

    # Setter
    def set_nama_menu(self, nama_menu):
        self.__nama_menu = nama_menu

    # Menampilkan semua data
    def tampilkan_menu(self):
        print(f"===== {self.__nama_menu} (Python) =====")
        print(f"Makanan: {len(self.__list_makanan)}, "
              f"Minuman: {len(self.__list_minuman)}, "
              f"Paket: {len(self.__list_paket)}")
        print()

        for m in self.__list_makanan:
            m.tampilkan()
            print()
        for n in self.__list_minuman:
            n.tampilkan()
            print()
        for p in self.__list_paket:
            p.tampilkan()
            print()
