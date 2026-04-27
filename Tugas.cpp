#include <iostream>
using namespace std;

class BelahKetupat; // forward declaration

class LayangLayang {
private:
    double d1, d2; // diagonal
    double s1, s2; // sisi

public:
    void input() {
        cout << "Input diagonal 1 Layang-Layang: ";
        cin >> d1;
        cout << "Input diagonal 2 Layang-Layang: ";
        cin >> d2;
        cout << "Input sisi 1 Layang-Layang: ";
        cin >> s1;
        cout << "Input sisi 2 Layang-Layang: ";
        cin >> s2;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    friend double keliling(LayangLayang, BelahKetupat); // friend function

    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
    }
};

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void input() {
        cout << "Input diagonal 1 Belah Ketupat: ";
        cin >> d1;
        cout << "Input diagonal 2 Belah Ketupat: ";
        cin >> d2;
        cout << "Input sisi Belah Ketupat: ";
        cin >> sisi;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " << keliling() << endl;
    }

    // friend function agar bisa akses private LayangLayang
    friend double keliling(LayangLayang, BelahKetupat);
};

// definisi friend function
double keliling(LayangLayang l, BelahKetupat b) {
    // keliling layang-layang = 2 * (s1 + s2)
    double kelilingLayang = 2 * (l.s1 + l.s2);
    cout << "Keliling Layang-Layang: " << kelilingLayang << endl;
    return kelilingLayang;
}

int main() {
    LayangLayang l;
    BelahKetupat b;

    cout << "=== Layang-Layang ===" << endl;
    l.input();
    l.output();

    cout << "\n=== Belah Ketupat ===" << endl;
    b.input();
    b.output();

    cout << "\n=== Keliling Layang-Layang (Friend Function) ===" << endl;
    keliling(l, b);

    return 0;
}