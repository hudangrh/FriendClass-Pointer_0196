#include <iostream>
using namespace std;
class mahasiswa
{
    public:
    int Nim;
    void showNim()
    {
        cout << "No Induk = " << Nim << endl;
    }
};

int main ()
{
    mahasiswa Mhs{1}; // object mhs;
    Mhs.showNim(); //Member Acces operator
    
    mahasiswa &refMhs = Mhs; // pointer reference reffmhs
    refMhs.Nim = 2; // member acces operator
    Mhs.showNim();

    mahasiswa *pMhs = &Mhs; // pointer deference pMhs
    pMhs->Nim = 3; // arrow operator
    pMhs->showNim();
    return 0;
}