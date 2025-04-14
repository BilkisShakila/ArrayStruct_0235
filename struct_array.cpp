#include <iostream>
using namespace std;
#include <string>;

struct Buku {
    string judul;
    string jumlahHalaman;
    string pengarang;
};

int main(){
    Buku bk[2];
    for (int i = 0; i< 2; i++)
    {
     cout << "masukkan judul = ";
    cin >> bk[i].judul;
    cout << "masukkan jumlah Halaman = ";
    cin >> bk[i].jumlahHalaman;
    cout << "masukkan pengarang = ";
   getline  (cin, bk[i].pengarang); 
    }
 for (int i = 0; i < 2; i++)
 {
    cout << "masukkan judul = ";
    getline  (cin, bk[i].judul); 
    cout << "masukkan jumlah Halaman = ";
    cin >> bk[i].jumlahHalaman;
    cout << "masukkan pengarang = ";
    cin >> bk[i].pengarang;

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout <<endl;
 }
    for (int i = 0; i < 2; i++)
    {
        
    cout << "judul buku = " << bk[i].judul <<endl;
    cout << "jumlah Halaman buku = " << bk[i].jumlahHalaman <<endl;
    cout << "pengarang buku = " << bk[i].pengarang <<endl;
    }
    for (int i = 0; i < 2; i++)
    {
    cout << "judul buku = " << bk[i].judul <<endl;
    cout << "jumlah Halaman buku = " << bk[i].jumlahHalaman <<endl;
    cout << "pengarang buku = " << bk[i].pengarang <<endl;


}

