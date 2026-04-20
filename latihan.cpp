#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanspesifikasi() {
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Hp";
    elektronik.jumlah = 20;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "10-04-2025";

    nonElektronik.nama = "meja";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "15-03-2020";

    elektronik.tampilkanspesifikasi();
    nonElektronik.tampilkanspesifikasi();
}