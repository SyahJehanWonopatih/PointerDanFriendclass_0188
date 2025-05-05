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

  
}