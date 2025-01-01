#include <iostream>
#include <limits>

using namespace std;

void batasNilai() {
    cout << "Batas nilai hanya sampai 100. Anda tidak memasuki Grade Nilai manapun.\n";
}
void gradeNilaiA() {
    cout << "Selamat Anda mendapat Grade nilai A.\n";
}
void gradeNilaiB() {
    cout << "Selamat Anda mendapat Grade nilai B.\n";
}
void gradeNilaiC() {
    cout << "Anda mendapatkan Grade nilai C, tingkatkan lagi belajarnya!\n";
}

int main() {
    double ujianTengahSemester;
    double ujianAkhirSemester;
    double rataRata;
    char backToProgram;

    do {
        cout << "#============================================#\n";
        cout << "            UNIVERSITAS NEGERI SURABAYA\n";
        cout << "#============================================#\n";

        // Input nilai UTS
        do {
            cout << "O> Masukkan nilai Ujian Tengah Semester (0-100): ";
            cin >> ujianTengahSemester;
            if (cin.fail() || ujianTengahSemester < 0 || ujianTengahSemester > 100) {
                cout << "O> Message : Harap masukkan angka antara 0 dan 100!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        } while (true);

        // Input nilai UAS
        do {
            cout << "O> Masukkan nilai Ujian Akhir Semester (0-100): ";
            cin >> ujianAkhirSemester;
            if (cin.fail() || ujianAkhirSemester < 0 || ujianAkhirSemester > 100) {
                cout << "O> Message : Harap masukkan angka antara 0 dan 100!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        } while (true);

        // Hitung rata-rata
        rataRata = (ujianTengahSemester + ujianAkhirSemester) / 2;
        cout << "O> Hasil rata-rata: " << rataRata << "\n";

        // Penentuan grade
        if (rataRata > 100) {
            batasNilai();
        } else if (rataRata >= 80) {
            gradeNilaiA();
        } else if (rataRata >= 70) {
            gradeNilaiB();
        } else {
            gradeNilaiC();
        }

        // Ulangi program
        cout << "\nIngin mengulangi program? (Y/N): ";
        cin >> backToProgram;
    } while (backToProgram == 'y' || backToProgram == 'Y');

    cout << "Terima kasih!\n";
    return 0;
}
