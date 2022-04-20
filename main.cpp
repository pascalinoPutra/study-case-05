#include <iostream>
using namespace std;
class Mahasiswa
{
private:
    string matkul, nama;
    int hargaSks = 120000;
    int n, sks, hargaJumlahSks, totalPembayaran;
    int totalDiskon1, totalDiskon2, ttlHrg1, ttlHrg2;
    float diskon1 = 10;
    float diskon2 = 5;

public:
    void input();
    void proses();
    void output();
    int rekursifMatkul(int x)
    {
        if (0 == x)
        {
            return 0;
        }
        cout << "Mata kuliah\t-> ";
        cin >> matkul;
        rekursifMatkul(x - 1);
    }
    int rekursifOutput(int x)
    {
        if (0 == x)
        {
            return 0;
        }
        cout << "\t ->";
        cin >> matkul;
        rekursifOutput(x - 1);
    }
} m;

void Mahasiswa::input()
{
    cout << "+===========================================================+\n";
    cout << "|                   Program study case  05                  |\n";
    cout << "+===========================================================+\n";
    cout << "masukan jumlah mata kuliah : ";
    cin >> n;
    cout << "-------------------------------------------------------------\n";
    rekursifMatkul(n);
    cout << "-------------------------------------------------------------\n";
    cout << "masukan jumlah sks : ";
    cin >> sks;
    cout << "-------------------------------------------------------------\n";
}
void Mahasiswa::proses()
{
    hargaJumlahSks = hargaSks * sks;
    totalDiskon1 = (diskon1 / 100) * hargaJumlahSks;
    ttlHrg1 = hargaJumlahSks - totalDiskon1;
    totalDiskon2 = (diskon2 / 100) * ttlHrg1;
    ttlHrg2 = ttlHrg1 - totalDiskon2;

    totalPembayaran = ttlHrg2;

    cout << "Jumlah harga SKS\t = " << hargaJumlahSks;
    cout << "\ntotal Diskon 1\t\t = " << ttlHrg1;
    cout << "\ntotal Diskon 2\t\t = " << ttlHrg2;
    cout << "\ntotal pembayaran\t = " << totalPembayaran << endl;
}
void Mahasiswa::output()
{
    cout << "+-----------------------------------------------------------+\n";
    cout << "|                   O U T P U T   P R O G R A M             |\n";
    cout << "+-----------------------------------------------------------+\n";
    nama = "PASCALINO V BELING BAHY PUTRA";
    char nim[] = "2100018495";
    cout << "NAMA\t\t\t | " << nama << endl;
    cout << "NIM\t\t\t | " << nim << endl;
    cout << "-------------------------------------------------------------\n";
    cout << "MASUKAN KEMBALI MATA KULIAH YANG DIPILIH TADI \t  " << endl;
    rekursifOutput(n);
    cout << "\nTOTAL SKS\t\t | " << sks << endl;
    cout << "TOTAL YANG HARUS DIBAYAR | " << totalPembayaran;
    cout << "-------------------------------------------------------------\n";
}
int main()
{
    m.input();
    m.proses();
    m.output();
}
