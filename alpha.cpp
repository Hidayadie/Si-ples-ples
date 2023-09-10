#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <unistd.h>
#include <limits>
#include <string>

using namespace std;
void menuPermainan ();
void tebakAngka();
void batuguntingkertas();
void tigaJadi();

void menuUtility();
void konversi ();
void kalkulatorbmi ();

int main() {
    bool menuAwal = true;
    while (menuAwal) {
        cout << "\t                +==============================+" << endl;
        cout << "\t                I        \033[1;21mSelamat Datang\033[0m        I" << endl;
        cout << "\t                I   Ada yang bisa saya bantu?  I" << endl;
        cout << "\t+===============+==============================+===============+" << endl;
        cout << "\t|                                                              |" << endl;
        cout << "\t| Untuk saat ini masih dalam pengembangan, maklum baru latihan |" << endl;
        cout << "\t|   Ada beberapa fitur dalam alpha ini, berikut diantaranya;   |" << endl;
        cout << "\t|                                                              |" << endl;
        cout << "\t|          Games                           Utilitas            |" << endl;
        cout << "\t|    - Tebak Angka                     - Konversi Unit         |" << endl;
        cout << "\t|    - Batu Gunting Kertas             - Kalkulator BMI        |" << endl;
        cout << "\t|    - Tic Tac Toe                     - Simulasi Bulan        |" << endl;
        cout << "\t|    - ...                             - ...                   |" << endl;
        cout << "\t|                                                              |" << endl;
        cout << "\t|                                                              |" << endl;
        cout << "\tI==============================================================I" << endl;
        cout << "\t|     'X' Keluar       '1' Games           3. Lain lain        |" << endl;
        cout << "\t|     'G' Kembali      '2' Utilitas        4. Tentang          |" << endl;
        cout << "\t+==============================================================+" << endl;

        char masukan;
        cout << "\tSilahkan masukkan input huruf/angka yang tertera di atas," << endl;
        cout << "\t> ";
        cin >> masukan;
        masukan = tolower(masukan);
        //bool menuPermainan;// = false;
        //bool menuUtilitas;// = false;
        switch (masukan) {
        //keluar
        case 'x':
            menuAwal = false;
            system("clear");
            cout << "Terima kasih telah berkunjung, sampai jumpa lagi..." << endl;

        break;

        // kembali
        case 'g':
            system("clear");
            break;

        //games
        case '1':
            menuPermainan();
            menuAwal = false;
        break;

        // menu utilitas
        case '2':
            menuUtility();
            menuAwal = false;
        break;


        //default
        default:
            system("clear");
            cout << "Pilihan tidak valid" << endl;
            break;
        }
    }

    return 0;
}

// MENU PERMAINAN
void menuPermainan() {
    bool menuPermainan = true;
        while (menuPermainan) {
        system("clear");
        cout << "\t+===================================================+" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t|         Selamat datang di menu permainan!         |" << endl;
        cout << "\t|   Pilih permainan yang ingin Anda mainkan:        |" << endl;
        cout << "\t|   1. Tebak Angka                                  |" << endl;
        cout << "\t|   2. Batu Gunting Kertas                          |" << endl;
        cout << "\t|   3. Tic Tac Toe                                  |" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t+===================================================+" << endl;
        cout << "\t|       'X' Keluar              'G' Kembali         |" << endl;
        cout << "\t+===================================================+" << endl;
        char pilihanPermainan;
        cout << "\tSilahkan masukkan angka permainan yang ingin Anda mainkan," << endl;
        cout << "\t> ";
        cin >> pilihanPermainan;
        pilihanPermainan = tolower(pilihanPermainan);

        switch (pilihanPermainan) {
            case '1':
                system("clear");
                tebakAngka();
                menuPermainan = false;
            break;

            case '2':
                system("clear");
                batuguntingkertas();
                menuPermainan = false;
            break;

            case '3':
                system("clear");
                cout << endl;
                cout << "\t\t mls njr mbuatnya, kpn kpn lah.." <<endl;
                sleep(2);
                system("clear");
                continue;
            break;

            case 'g':
                menuPermainan = false;
                system("clear");
                main();
            break;

            case 'x':
                menuPermainan = false;
                system("clear");
                cout << "Terima kasih telah berkunjung, sampai jumpa lagi..." << endl;
            break;

            default:
                cout << "Pilihan tidak valid" << endl;
            break;
                    }
                }
            }

// TEBAK ANGKA
void tebakAngka() {
    bool menuTebak =  true;
    while (menuTebak) {
    srand(static_cast<unsigned>(time(0)));
    char level;
    int maks;
    cout << " +=========================================================+" <<endl;
    cout << " |         Selamat datang di permainan tebak angka!        |" << endl;
    cout << " | disini anda akan menebak angka rahasia yang tersembunyi |" << endl;
    cout << " +=========================================================+" <<endl;
    cout << " |  Silahkan pilih level sesuai dengan kemampuan anda;     |" <<endl;
    cout << " |  1. Level 1 [1 - 10]                                    |"<<endl;
    cout << " |  2. Level 2 [1 - 50]                                    |" <<endl;
    cout << " |  3. Level 3 [1 - 100]                                   |" << endl;
    cout << " |                                                         |" << endl;
    cout << " +=========================================================+" << endl;
    cout << " |        'X' Menu Awal            'G' Kembali             |" << endl;
    cout << " +=========================================================+" << endl;
    cout << "\n Pilihan anda : ";
    cin >> level;
    bool menang;
    switch (level) {
    case '1':
    maks = 10;
    menang = false;
    break;
    case '2':
    maks = 50;
    menang = false;
    break;
    case '3':
    maks = 100;
    menang = false;
    break;
    case 'g':
    menuPermainan();
    menang = true;
    menuTebak = false;
    break;
    case 'x':
    system("clear");
    menuTebak = false;
    menang = true;
    main();
    break;
    default:
    system("clear");
    cout << "pilihan tidak valid, tolong pilih pilihan yang ada..." << endl;
    sleep(2);
    system("clear");
    continue;
    break;
    }

    int tebakan;
    int angkaRahasia = rand() % maks + 1;
    int percobaan = 0;
    //bool menang = false;

    while (!menang) {
    cout << "saya telah memilih angka 1 - " << maks << " cobalah untuk menebaknya!" << endl;
    cin >> tebakan;
    percobaan++;

    if (tebakan < 1 || tebakan > maks) {
    cout << "tebak yang bner bilek" << endl;
    }
    else if (tebakan == angkaRahasia){
    system("clear");
    cout << "selamat!! tebakan anda benar" << endl;
    menang = true;
    sleep(2);
    }
    else if (tebakan > angkaRahasia) {
    cout << "tebakan anda lebih besar dari angka saya" << endl;}
    else if (tebakan < angkaRahasia) {
    cout << "tebakan anda lebih kecil dari angka saya" << endl;}

    }
    }
}

// BATU GUNTING KERTAS
void batuguntingkertas() {
    srand(static_cast<unsigned>(time(0)));


    int pilihanPemain;
    bool bermainLagi = true;

    while (bermainLagi) {
        cout << " +========================================================+" <<endl;
        cout << " |  Selamat datang dalam permainan Batu, Gunting, Kertas! |" << endl;
        cout << " |             Silahkan pilih elemen anda..               |" << endl;
        cout << " +========================================================+" <<endl;
        cout << endl;
        cout << "    _______            _______                 _______" << endl;
        cout << "---'   ____)       ---'   ____)____        ---'   ____)____" << endl;
        cout << "     (_____)                 ______)                 ______)" << endl;
        cout << "     (_____)              __________)                _______)" << endl;
        cout << "     (____)              (____)                     _______)" << endl;
        cout << "---.__(___)        ---.__(___)             ---.__________)" << endl;
        cout << "     1                    2                        3" << endl;
        cout << "   Batu                Gunting                   Kertas" << endl;
        cout << "pilihan anda (1,2,3): ";
        cin >> pilihanPemain;

        //int pilihanPemain = ;
        if (pilihanPemain < 1 || pilihanPemain > 3 || cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("clear");
        cout << "Pilihan tidak valid. Harap masukkan 1, 2, atau 3." << endl;
        sleep(2);
        system("clear");
            continue;
        }


        int pilihanKomputer = rand() % 3 + 1;
        // pilihan komputerny
        string teksKomputer;
        switch (pilihanKomputer) {
        case 1:
        teksKomputer = "\033[1;21mBatu\033[0m";
        break;
        case 2:
        teksKomputer = "\033[1;21mGunting\033[0m";
        break;
        case 3:
        teksKomputer = "\033[1;21mKertas\033[0m";
        break;}
        //string garispilkomp = string(teksKomputer.length(), '_');

        string teksPemain;
        switch (pilihanPemain) {
        case 1:
        teksPemain = "\033[1;21mBatu\033[0m";
        break;
        case 2:
        teksPemain = "\033[1;21mGunting\033[0m";
        break;
        case 3:
        teksPemain = "\033[1;21mKertas\033[0m";
        break;}

        cout << "Komputer telah memilih " << teksKomputer << ", sedangkan anda memilih " << teksPemain <<endl;
        cout << endl;
        // sampe sini
        if (pilihanPemain == pilihanKomputer) {
            cout << "Hasil: Seri!" << endl;
        } else if ((pilihanPemain == 1 && pilihanKomputer == 2) ||
                   (pilihanPemain == 2 && pilihanKomputer == 3) ||
                   (pilihanPemain == 3 && pilihanKomputer == 1)) {
            cout << "Hasil: Anda menang!" << endl;
        } else {
            cout << "Hasil: Komputer menang!" << endl;
        }
        char pengenlagi;
        bool ditanya = true;
        while (ditanya) {
        cout << endl;
        cout << "Apakah Anda ingin bermain lagi? (Y/n): ";
        cin >> pengenlagi;
        if (pengenlagi == 'y' || pengenlagi == 'Y') {
        bermainLagi = true;
        ditanya = false;
        system("clear");}
        else if (pengenlagi == 'N' || pengenlagi == 'n'){
        bermainLagi = false;
        ditanya = false;
        menuPermainan();}
        else {
        system("clear");
        cout << "berikan nilai yang sesuai (y,Y,n,N)" << endl;
        sleep(2);
        }
        }
    }

}

// 3 JADI, BESOKKKKKKKK

// MENU UTILITAS
void menuUtility() {
    bool menuUtilitas = true;
    while (menuUtilitas) {
        system("clear");
        cout << "\t+===================================================+" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t|         Selamat datang di menu utilitas!          |" << endl;
        cout << "\t|   Pilih alat yang ingin Anda gunakan:             |" << endl;
        cout << "\t|   1. Konversi unit                                |" << endl;
        cout << "\t|   2. Kalkulator BMI                               |" << endl;
        cout << "\t|   3. Simulasi bulan                               |" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t|                                                   |" << endl;
        cout << "\t+===================================================+" << endl;
        cout << "\t|       'X' Keluar              'G' Kembali         |" << endl;
        cout << "\t+===================================================+" << endl;
        char pilihanUtilitas;
        cout << "\tSilahkan masukkan angka permainan yang ingin Anda mainkan," << endl;
        cout << "\t> ";
        cin >> pilihanUtilitas;
        pilihanUtilitas = tolower(pilihanUtilitas);

        switch (pilihanUtilitas) {
            case '1':
                system("clear");
                konversi();
                menuUtilitas = false;
                //konversi();
            break;

            case '2':
                system("clear");
                //menuUtilitas = false;
                cout << "blm ada ngab, sabar" << endl;
                sleep(3);
                continue;
            break;

            case '3':
                system("clear");
                cout << endl;
                cout << "\t\t mls njr mbuatnya, kpn kpn lah.." <<endl;
                sleep(2);
                system("clear");
                continue;
            break;

            case 'g':
                system("clear");
                menuUtilitas = false;
                main();
            break;

            case 'x':
                menuUtilitas = false;
                system("clear");
                cout << "Terima kasih telah berkunjung, sampai jumpa lagi..." << endl;
            break;

            default:
                cout << "Pilihan tidak valid" << endl;
            break;
                    }
                } }

void konversi() {
    bool menuKonversi = true;
    while (menuKonversi) {
    char pilihSatuan;
    char arahKonversi;
    cout << " +=========================================================+" <<endl;
    cout << " |  selamat datang di menu konversi, disini kita dapat meng|" << endl;
    cout << " |konversi satuan dalam metrik, imperial, dsb. Ada beberapa|" << endl;
    cout << " |satuan yang dapat di-konversi, silahkan pilih dari satuan|" <<endl;
    cout << " |yang ada di bawah ini, lalu pilih arah konversinya.      |" << endl;
    cout << " |                                                         |" <<endl;
    cout << " +=========================================================+" <<endl;
    cout << " | 1. Panjang                                              |" <<endl;
    cout << " | 2. Suhu                                                 |" <<endl;
    cout << " | 3.                                                      |" <<endl;
    cout << " |                                                         |" <<endl;
    cout << " +=========================================================+" <<endl;
    cout << " |        'X' Menu Awal               'G' Kembali          |" << endl;
    cout << " +=========================================================+" << endl;
    cout << "\n Pilihan anda : ";
    cin >> pilihSatuan;

    switch (pilihSatuan) {
    case '1':
    // PANJANG
        system("clear");
        menuKonversi = false;
        //bool menuPanjang = true;
        cout << "+============================+" << endl;
        cout << "|    Anda memilih panjang    |" << endl;
        cout << "|        Pilih tujuan        |" << endl;
        cout << "|                            |" << endl;
        cout << "|    metrik      imperial    |" << endl;
        cout << "|      M            I        |" << endl;
        cout << "|                            |" << endl;
        cout << "+============================+" << endl;
        cout << "|     G = Kembali            |" << endl;
        cout << "|     H = Tabel panjang      |" << endl;
        cout << "+============================+" << endl;
        cout << "\n Pilihan anda : ";
        cin >> arahKonversi;
        arahKonversi = tolower(arahKonversi);
        if (arahKonversi == 'm') {
        int pilihanImperial;
        int pilihanMetrik;
        string satuanImperial;
        string satuanMetrik;
        double nilaiImperial;
        double nilaiMetrik;
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Harap masukkan satuan yang |" << endl;
        cout << "\t| akan Anda gunakan          |" << endl;
        cout << "\t| \033[31mTunggu sebentar.\033[0m           |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Harap masukkan satuan yang |" << endl;
        cout << "\t| akan Anda gunakan          |" << endl;
        cout << "\t| \033[31mTunggu sebentar..\033[0m          |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Harap masukkan satuan yang |" << endl;
        cout << "\t| akan Anda gunakan          |" << endl;
        cout << "\t| \033[31mTunggu sebentar...\033[0m         |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Harap masukkan satuan yang |" << endl;
        cout << "\t| akan Anda gunakan          |" << endl;
        cout << "\t| \033[31mTunggu sebentar.\033[0m           |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        bool pilihNilai = true;
        while (pilihNilai) {
        cout << "+================================+" << endl;
        cout << "|      Silahkan pilih satuan     |" << endl;
        cout << "|            yang ada            |" <<endl;
        cout << "+================================+" << endl;
        cout << "| 1.  Inci      [in]   (inch)    |"  << endl;
        cout << "| 2.  Kaki      [ft]   (feet)    |" << endl;
        cout << "| 3.  Yard      [yd]   (yard)    |" <<endl;
        cout << "| 4.  Mil       [mi]   (mile)    |" <<endl;
        cout << "| 5.  Mil laut  [nmi]  (Nmile)   |" <<endl;
        cout << "| 6.  Liga      [lea]  (league)  |" <<endl;
        cout << "| 7.  Furlong   [fur]  (furlong) |" <<endl;
        cout << "| 8.  Tangan    [hh]   (hand)    |" <<endl;
        cout << "| 9.  Link      [ch]   (chain)   |" <<endl;
        cout << "| 10. Rod       [rd]   (rod)     |" <<endl;
        cout << "+================================+" << endl;
        cout << "> ";
        cin >> pilihanImperial;
        switch (pilihanImperial) {
        case 1: satuanImperial = "Inci"; break;
        case 2: satuanImperial = "kaki"; break;
        case 3: satuanImperial = "Yard"; break;
        case 4: satuanImperial = "Mil"; break;
        case 5: satuanImperial = "Mil Laut"; break;
        case 6: satuanImperial = "Liga"; break;
        case 7: satuanImperial = "Furlong"; break;
        case 8: satuanImperial = "Tangan"; break;
        case 9: satuanImperial = "Link"; break;
        case 10: satuanImperial = "Rod"; break;
        default: cout << "pilihan tidak valid, harap pilih ulang: "; cin >> pilihanImperial; break;
        }
        cout << "sekarang berikan nilai yang ingin anda konversikan: ";
        cin >> nilaiImperial;
        while (nilaiImperial == 0) {
            cout << "tolong berikan nilai yang benar, nilai: "; cin >>    nilaiImperial;}
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Memuat tabel daftar Metrik |" << endl;
        cout << "\t| yang tersedia              |" << endl;
        cout << "\t| \033[31mTunggu sebentar.\033[0m           |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        cout.flush();
        cout << "\t+============================+" << endl;
        cout << "\t|    Anda memilih panjang    |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t|       Mengkonversi         |" << endl;
        cout << "\t|    Imperial -> Metrik      |" << endl;
        cout << "\t|                            |" << endl;
        cout << "\t| Memuat tabel daftar Metrik |" << endl;
        cout << "\t| yang tersedia              |" << endl;
        cout << "\t| \033[31mTunggu sebentar..\033[0m          |" << endl;
        cout << "\t+============================+" << endl;
        sleep(1);
        system("clear");
        cout << "+================================+" << endl;
        cout << "|      Silahkan pilih satuan     |" << endl;
        cout << "|        yang ada (Meter)        |" <<endl;
        cout << "+================================+" << endl;
        cout << "| 1.  Nano      [nm]             |" <<endl;
        cout << "| 2.  Mikro     [µm]             |" << endl;
        cout << "| 3.  Mili      [mm]             |" << endl;
        cout << "| 4.  Centi     [cm]             |" << endl;
        cout << "| 5.  Desi      [dm]             |" <<endl;
        cout << "| 6.  Meter     [m]              |" <<endl;
        cout << "| 7.  Deka      [dam]            |" <<endl;
        cout << "| 8.  Hekto     [hm]             |" <<endl;
        cout << "| 9.  Kilo      [km]             |" <<endl;
        cout << "| 10.  Mega     [Mm]             |" <<endl;
        cout << "+================================+" << endl;
        cout << "(anda sebelumnya memasukkan nilai sebesar " << nilaiImperial << " " << satuanImperial << ")" << endl;
        cout << "> ";
        cin >> pilihanMetrik;
        switch (pilihanMetrik) {
        case 1: satuanMetrik = "Nanometer"; break;
        case 2: satuanMetrik = "Mikrometer"; break;
        case 3: satuanMetrik = "Milimeter"; break;
        case 4: satuanMetrik = "Centimeter"; break;
        case 5: satuanMetrik = "Desieter"; break;
        case 6: satuanMetrik = "Meter"; break;
        case 7: satuanMetrik = "Dekameter"; break;
        case 8: satuanMetrik = "Hektometer"; break;
        case 9: satuanMetrik = "Kilometer"; break;
        case 10: satuanMetrik = "Megameter"; break;
        default: cout << "pilihan tidak valid, tolong masukkan nilai lagi: "; cin >> pilihanMetrik; break;}
        cout << "\nAnda telah memilih untuk mengkonversikan, sebesar" << endl;
        cout << nilaiImperial << " " << satuanImperial << " menjadi satuan dalam " << satuanMetrik << endl;
        char yakin;
        cout << "Apakah anda yakin dengan pilihan anda atau ingin kembali memilih dari awal?\nY untuk yakin, N untuk kembali (Y/n) ";
        cin >> yakin;
        system("clear");
        if (yakin == 'y' || yakin == 'Y') {
            pilihNilai = false;}
        else if (yakin == 'n' || yakin == 'N') {
            cout << "tunggu sebentar..." << endl;}
        else {
            cout << "pilihan tidak valid, harap pilih ulang (Y,y,N,n): "; cin >> yakin;}
        }
        cout << " +=========================================================+" <<endl;
        cout << " Hasil konversi dari
        }
        else (
        cout << "pilihan tidak valid");
    // END PANJANG
    break;

    case '2':
    break;
    case '3':
    break;
    case 'x':
    //case 'X':
    menuKonversi = false;
    system("clear");
    main();
    break;
    case 'g':
    case 'G':
    menuKonversi = false;
    menuUtility();
    break;
    }
    }
}
