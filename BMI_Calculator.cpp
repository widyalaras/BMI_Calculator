#include <iostream>
#include <cmath>  // Library cmath untuk operasi matematika

using namespace std;
int main() {
    float berat, tinggi, bmi;

    // Input dari pengguna
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    // Proses menghitung BMI
    bmi = berat / pow(tinggi, 2);  // pow() dari library cmath

    // Output hasil BMI
    cout << "BMI Anda adalah: " << bmi << endl;

    // Conditional statement untuk kategori BMI
    if (bmi < 18.5) {
        cout << "Kategori: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Kategori: Normal" << endl;
    }
    else {
        cout << "Kategori: Overweight" << endl;
    }

    return 0;
}
