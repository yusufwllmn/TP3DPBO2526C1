# Program Cafe (Python)
from menu import Menu
from makanan import Makanan
from minuman import Minuman
from paket import Paket


menu = Menu("Menu Cafe Senja")

# ----- Data awal -----
m1 = Makanan("MKN01", "Nasi Goreng Spesial", 25000,
             "Main Course", "Nasi goreng dengan telur dan ayam")
m2 = Makanan("MKN02", "Kentang Goreng", 15000,
             "Camilan", "Kentang goreng renyah dengan saus")
n1 = Minuman("MNM01", "Es Teh Manis", 8000, "M", "Dingin")

menu.tambah_makanan(m1)
menu.tambah_makanan(m2)
menu.tambah_minuman(n1)

print("########## SEBELUM PENAMBAHAN DATA (Python) ##########")
menu.tampilkan_menu()

# ----- Data baru -----
m3 = Makanan("MKN03", "Brownies Coklat", 18000,
             "Dessert", "Brownies lembut dengan topping coklat")
n2 = Minuman("MNM02", "Cappuccino", 22000, "L", "Panas")

# Paket menunjuk objek yang sudah dibuat di atas
p1 = Paket("PKT01", "Paket Hemat", 0.1, 20)
p1.tambah_hidangan(m1)
p1.tambah_hidangan(n1)

p2 = Paket("PKT02", "Paket Santai Sore", 0.15, 10)
p2.tambah_hidangan(m3)
p2.tambah_hidangan(n2)

menu.tambah_makanan(m3)
menu.tambah_minuman(n2)
menu.tambah_paket(p1)
menu.tambah_paket(p2)

print("########## SESUDAH PENAMBAHAN DATA (Python) ##########")
menu.tampilkan_menu()

# Bukti isi paket menunjuk objek asli: harga paket ikut berubah
m1.set_harga(27000)
print("########## SETELAH HARGA NASI GORENG DIUBAH (Python) ##########")
p1.tampilkan()
