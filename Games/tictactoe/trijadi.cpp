#include <iostream>

using namespace std;

const int ukuran = 3;
char papan[ukuran][ukuran];
char player = 'X';

void isipapan() {
    papan[ukuran][ukuran];
    for (int a = 0; a < ukuran; a++) {
        for (int b = 0; b < ukuran; b++) {
            papan[a][b] = ' ';
        }
    }

}
void buatpapan() {
    for (int x = 0; x <= ukuran*4; x++) {
        if (x % 4 == 0) {
            cout << "+";
        }
        else {
            cout << "-";
        }
    }
    cout << endl;
    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            cout <<"|"<<" "<< papan[i][j] << " ";
        }

        cout <<"|"<< endl;
        for (int y = 0; y <= ukuran*4; y++) {
            if (y % 4 == 0) {
                cout << "+";
            }
            else {
                cout << "-";
            }
        }
        cout << endl;
    }
}

bool afkhmenang() {
    for (int i = 0; i < ukuran; i++) {
        if (papan[i][0] == player && papan[i][1] == player && papan[i][2] == player) {
            return true;
        }
        if (papan[0][i] == player && papan[1][i] == player && papan[2][i] == player) {
            return true;
        }
    }
    if (papan[0][0] == player && papan[1][1] == player && papan[2][2] == player) {
        return true;
    }
    if (papan[0][2] == player && papan[1][1] == player && papan[2][0] == player) {
        return true;
    }
    return false;
}

bool afkhpenuh(){
    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            if (papan[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool isi(int baris,int kolom) {
    if (baris < ukuran && baris >= 0 && kolom < ukuran && kolom >= 0 && papan[baris][kolom] == ' ') {
        papan[baris][kolom] = player;
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int kolom, baris;
    isipapan();
    bool bermain = true;

    while (bermain) {
        system("clear");
        char mainlagi;
        buatpapan();
        cout << "masuin\tbaris: "; cin >> baris; cout << "\tkolom: "; cin>> kolom;
        if (isi(baris-1,kolom-1)) {
            if (afkhmenang()) {
                system("clear");
                buatpapan();
                cout << "\nanjay menang gg icixiwir ah yameted";
                bermain = false;
            }
            else if (afkhpenuh()) {
                system("clear");
                buatpapan();
                bermain = false;
                cout <<"\npenuh tod :nosad:\nMau coba lagi? [y/n]: "; cin >> mainlagi;
                if (mainlagi == 'y' || mainlagi == 'Y') {
                    system("clear");
                    main();
                }
            }
            else {
                player = (player == 'X') ? 'O' : 'X';
            }
        }
    }
    return 0;
}



