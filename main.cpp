#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int bilgisayarSecimi = rand() % 3 + 1; // 1: Taş, 2: Kağıt, 3: Makas
    int secim;

    cout << "========================================\n";
    cout << "       TAS - KAGIT - MAKAS OYUNU        \n";
    cout << "========================================\n";
    cout << "Secimini yap:\n";
    cout << "1 - Tas\n2 - Kagit\n3 - Makas\n";
    cout << "Senin tercihin: ";
    cin >> secim;

    if (secim < 1 || secim > 3) {
        cout << "Gecersiz secim yaptin! 1, 2 veya 3 secmen gerekiyordu." << endl;
        return 0;
    }

    string hamleler[] = {"", "Tas", "Kagit", "Makas"};
    
    cout << "\n----------------------------------------\n";
    cout << "Senin secimin : " << hamleler[secim] << endl;
    cout << "Bilgisayar    : " << hamleler[bilgisayarSecimi] << endl;
    cout << "----------------------------------------\n";

    if (secim == bilgisayarSecimi) {
        cout << "Sonuc: Berabere! 🤝\n";
    } else if ((secim == 1 && bilgisayarSecimi == 3) ||
               (secim == 2 && bilgisayarSecimi == 1) ||
               (secim == 3 && bilgisayarSecimi == 2)) {
        cout << "Sonuc: Helal olsun, bilgisayari yendin! 🎉\n";
    } else {
        cout << "Sonuc: Maalesef bilgisayar aldi, bir dahaki sefere! 🤖\n";
    }
    cout << "========================================\n";

    return 0;
}