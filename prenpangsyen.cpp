#include <iostream>
using namespace std;

class Dosen {
    public:
        string nama;
        void tampilnama() {
            cout << "Namanya adalah " << nama << endl;
        }
};

class staf {
    public:
        int nidn;
};

int main() {
    Dosen ds;
    ds.nama = "Terabyte anjayani";
    ds.tampilnama();

    Dosen &dsref = ds;
    dsref.nama = "talingkar pa ng";
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilnama();

    Dosen *Pds = &ds;
    Pds->nama = "reza ganteng";
    cout << "Alamat memori = " << Pds << endl;
    Pds->tampilnama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "Alamat memori a = " << &a << endl;
    cout << "Alamat memori c = " << &c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "Alamat memori c = " << &c << endl;
    cout << "cetak c = " << *c << endl;


}