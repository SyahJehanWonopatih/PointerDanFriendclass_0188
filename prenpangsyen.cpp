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

    


}