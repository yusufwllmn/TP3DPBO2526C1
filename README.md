# Menu Cafe Senja

## Janji

Saya Yusuf Willman Hammam dengan NIM 2511185 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain

Program pengelolaan menu cafe versi console (C++ dan Python) yang menerapkan **inheritance** dan **composition**.

<img width="1414" height="2000" alt="diagram" src="https://github.com/user-attachments/assets/387eafa3-5e29-4a10-81c4-2c5898c51c3c" />
Dengan penjelasan hubungan antar Class sebagai berikut:
<img width="632" height="487" alt="Gambar1" src="https://github.com/user-attachments/assets/7feea24b-f1c9-4c27-a1d0-50840b5b22f6" />

## Atribut dan Method

Semua class memiliki constructor serta Getter dan Setter untuk setiap atributnya.

### Hidangan
* Atribut: `kode`, `nama`, `harga`
* Method: Getter, Setter, `tampilkan()` (menampilkan kode, nama, dan harga)

### Makanan (turunan Hidangan)
* Atribut: `kategori`, `deskripsi`
* Method: Getter, Setter, `tampilkan()` (memanggil `tampilkan()` Hidangan, lalu menampilkan kategori dan deskripsi)

### Minuman (turunan Hidangan)
* Atribut: `ukuran`, `suhu`
* Method: Getter, Setter, `tampilkan()` (memanggil `tampilkan()` Hidangan, lalu menampilkan ukuran dan suhu)

### Paket (turunan Hidangan)
* Atribut: `listHidangan` (isi paket), `diskon` (0.1 = 10%), `kuota`
* Method:
  * Getter dan Setter
  * `tambahHidangan()`: menambah isi paket
  * `hitungHargaPaket()`: total harga isi paket dikurangi diskon
  * `tampilkan()`: menampilkan isi paket, diskon, kuota, dan harga paket

### Menu
* Atribut: `namaMenu`, `listMakanan`, `listMinuman`, `listPaket`
* Method:
  * Getter dan Setter
  * `tambahMakanan()`, `tambahMinuman()`, `tambahPaket()`: menambah data ke list
  * `tampilkanMenu()`: menampilkan semua makanan, minuman, dan paket
  * Destructor: menghapus semua objek milik Menu

## Penjelasan Desain

**Inheritance**: `Makanan`, `Minuman`, dan `Paket` sama-sama mewarisi `Hidangan`, jadi `kode`, `nama`, `harga` dan method dasarnya cukup ditulis sekali. Setiap `tampilkan()` pada class turunan memanggil `tampilkan()` milik `Hidangan` dulu, baru menambahkan atributnya sendiri.

**Composition**: `Menu` memiliki semua objek `Makanan`, `Minuman`, dan `Paket`. Saat `Menu` dihapus, destructor-nya ikut menghapus semua objek tersebut.

**Aggregation**: `Paket` hanya menunjuk objek `Makanan`/`Minuman` yang sudah ada di `Menu`, tanpa menyalin dan tanpa menghapusnya. Karena itu `Paket` tidak punya destructor, dan harga paket otomatis ikut berubah kalau harga hidangan aslinya diubah.

## Alur Program


1. Buat `Menu` bernama "Menu Cafe Senja".
2. Isi data awal: 2 makanan dan 1 minuman, lalu tampilkan (**SEBELUM PENAMBAHAN DATA**).
3. Buat 1 makanan dan 1 minuman baru, lalu 2 paket yang isinya menunjuk ke hidangan yang sudah dibuat.
4. Tambahkan semuanya ke menu, lalu tampilkan lagi (**SESUDAH PENAMBAHAN DATA**).
5. Ubah harga Nasi Goreng dari 25000 menjadi 27000, lalu tampilkan `Paket Hemat`. Harga paket ikut berubah (29700 menjadi 31500).

## Dokumentasi

### C++
1. Sebelum Menambahkan Data
<img width="456" height="349" alt="Sebelum Tambah Data" src="https://github.com/user-attachments/assets/6ddbee0f-4cc9-4292-b76d-72c6f6598a01" />

2. Seteleh Menambahkan Data
<img width="510" height="846" alt="Setelah Tambah Data" src="https://github.com/user-attachments/assets/9d0f11f9-a105-4987-bd38-48a7b447b90c" />

3. Update Data Harga Makanan (membuktikan bahwa pada paket itu bukan salinan dari list hidangan, tapi pointer)
<img width="514" height="169" alt="Update Harga Makanan" src="https://github.com/user-attachments/assets/68c4840d-4ddf-487c-947a-f0761233fd0e" />

### Python
1. Sebelum Menambahkan Data
<img width="508" height="355" alt="Sebelum Tambah Data" src="https://github.com/user-attachments/assets/39e6037c-8616-4a62-ad67-f6a54bd42768" />

2. Seteleh Menambahkan Data
<img width="508" height="848" alt="Setelah Tambah Data" src="https://github.com/user-attachments/assets/ac40fe0a-18c1-462f-bea2-b205fde78ff5" />

3. Update Data Harga Makanan (membuktikan bahwa pada paket itu bukan salinan dari list hidangan, tapi pointer)
<img width="599" height="174" alt="Update Harga Minuman" src="https://github.com/user-attachments/assets/346117ea-e2f5-4973-be33-24ae3827f548" />
