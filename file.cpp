#include <iostream>
using namespace std;

class Mahasiswa{
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022; 
    mhs.nama = "abra";
    mhs.nilai = 90,5; 

    mhs.printData();
}
