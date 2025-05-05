#include <iostream>
using namespace std;

class siswa;
class orang {
    private:
        string nama;
    public:
        void setnama(string pnama);
        friend class siswa;
};

class siswa {
    private:
        int id;
    public:
        void setid(int pid);
        void displayall(orang &a);
        
};
void orang::setnama(string pnama) {
    nama = pnama;
}
    
void siswa::setid(int pid) {
    id = pid;
}
void siswa::displayall(orang &a) {
    cout << id << endl << a.nama;
}

int main() {
    orang joko;
    joko.setnama("Joko susilo");
    siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayall(joko);
    return 0;

}