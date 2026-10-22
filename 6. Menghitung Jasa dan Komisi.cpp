#include <iostream>
using namespace std;

int main() {
    float pendptan, jasa, komisi, total;

    cout << "Pendapatan Hari ini Rp. ";
    cin >> pendptan;

    if (pendptan >= 0 && pendptan <= 20000) {
        jasa = 10000;
        komisi = 0.1 * pendptan;
    }
    else if (pendptan <= 50000) {
        jasa = 20000;
        komisi = 0.15 * pendptan;
    }
    else {
        jasa = 30000;
        komisi = 0.2 * pendptan;
    }

    total = komisi + jasa;

    cout << "Uang Jasa Rp. " << jasa << endl;
    cout << "Uang Komisi Rp. " << komisi << endl;

    cout << "==========================" << endl;
    cout << "Hasil Total Rp. " << total << endl;

    return 0;
}
