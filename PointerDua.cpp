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

int main()
{
    mahasiswa *mhs = new mahasiswa[1]; // pointer object mhs
    mhs->Nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}