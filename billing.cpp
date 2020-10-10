/* Billing Warnet */
/* Menghitung lama pemakaian dan biaya */

#include<iostream>
#include<conio.h>

using namespace std;
main()
{
	int j1jam, j1menit, j1detik, j2jam, j2menit, j2detik, jumlahdetik, jumlahbayar, selisihjam, selisihmenit, selisihdetik;
    const int tarif = 5000;
	cout <<"Billing warnet \n";


    cout << "Mulai : " << endl;
    cout << "Masukkan jam mulai : ";
	cin >> j1jam;
    cout << "Masukkan menit mulai : ";
	cin >> j1menit;
    cout << "Masukkan detik mulai : ";
	cin >> j1detik;
    cout << endl;


    cout << "Akhir : " << endl;
    cout << "Masukkan jam Mengakhiri : ";
	cin >> j2jam;
    cout << "Masukkan menit Mengakhiri : ";
	cin >> j2menit;
    cout << "Masukkan detik Mengakhiri : ";
	cin >> j2detik;

    selisihjam = j2jam - j1jam;
    selisihmenit = j2menit - j1menit;
    selisihdetik = j2detik - j1detik;

    jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
    jumlahbayar = jumlahdetik * tarif/3600;


    cout << endl;
    cout << "Hasilnya : " << endl;
    cout << "lama pemakaian anda adalah " << selisihjam << " Jam, " << selisihmenit << " Menit, " << selisihdetik << " Detik" << endl;
    cout << "Jumlah Pembayaran billingnya sebanyak Rp. " << jumlahbayar << " ,-" << endl;
	return 0;
}
