#include <iostream>
using namespace std;


class dosen;
class staff;
class universitas;

class mahasiswa
{
private : 
    string nama;
    int nim; 
    float nilai;
public :
    friend class dosen;
};

class dosen
{
private :
    string nama;
    string nidn;
    string pangkat;
    float gaji;
public :
    void beriNilai(mahasiswa* m, float nilai);
    friend class staff;
    friend void lihatGajiDosen(dosen* d);
};

class staff
{
private :
    string nama;
    string IDstaff;
    float gaji;
public :
    void ubahPangkat(dosen* d, string pangkatBaru);
    friend void lihatGajiStaff(staff* s);
};

void dosen :: beriNilai(mahasiswa* m, float nilai)
{
    m->nilai = nilai; 
}

void lihatGajiDosen(dosen* d)
{
    cout << " Gaji Dosen " << d->nama << " : " << d->gaji << endl;
}

void lihatGajiStaff(staff* s)
{
    cout << " Gaji Staff " << s->nama << " : " << s->gaji << endl;
}

int main()
{
    dosen beriNilai;

    lihatGajiDosen;
    lihatGajiStaff;

    return 0;
}
