#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Artis {
    string nama;
};

vector<Artis> artis_lagu_arab = {
    {"sherine"},
    {"nancy ajram"},
    {"amr diab"},
    {"maher zain"},
    {"ricky rich"}
};

bool login() {
    string username = "tendry";
    string password = "2309106116";
    string user_input, pass_input;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Masukkan Nama: ";
        cin >> user_input;
        cout << "Masukkan NIM: ";
        cin >> pass_input;

        if (user_input == username && pass_input == password) {
            cout << "Login Berhasil!" << endl;
            return true;
        } else {
            attempts++;
            cout << "Login Gagal. Silakan coba lagi." << endl;
        }
    }

    cout << "Anda telah melebihi batas percobaan login. Program berhenti." << endl;
    return false;
}

char tampilkan_menu() {
    cout << "\nMenu:" << endl;
    cout << "1. Tambah data artis penyanyi" << endl;
    cout << "2. Tampilkan data artis penyanyi" << endl;
    cout << "3. Ubah data artis penyanyi" << endl;
    cout << "4. Hapus data artis penyanyi" << endl;
    cout << "5. Keluar" << endl;

    char pilihan;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;
    return pilihan;
}

void tambah_data() {
    Artis artis;
    cout << "Masukkan nama artis penyanyi baru: ";
    cin >> artis.nama;
    artis_lagu_arab.push_back(artis);
    cout << "Data artis penyanyi berhasil ditambahkan." << endl;
}

void tampilkan_data() {
    cout << "\nDaftar artis penyanyi lagu Arab:" << endl;
    for (int i = 0; i < artis_lagu_arab.size(); ++i) {
        cout << i + 1 << ". " << artis_lagu_arab[i].nama << endl;
    }
}

void ubah_data() {
    tampilkan_data();
    int index;
    cout << "Masukkan nomor artis penyanyi yang ingin diubah: ";
    cin >> index;
    index--; 
    if (index >= 0 && index < artis_lagu_arab.size()) {
        cout << "Masukkan nama artis penyanyi baru: ";
        cin >> artis_lagu_arab[index].nama;
        cout << "Data artis penyanyi berhasil diubah." << endl;
    } else {
        cout << "Nomor artis penyanyi tidak valid." << endl;
    }
}

void hapus_data() {
    tampilkan_data();
    int index;
    cout << "Masukkan nomor artis penyanyi yang ingin dihapus: ";
    cin >> index;
    index--; 
    if (index >= 0 && index < artis_lagu_arab.size()) {
        artis_lagu_arab.erase(artis_lagu_arab.begin() + index);
        cout << "Data artis penyanyi berhasil dihapus." << endl;
    } else {
        cout << "Nomor artis penyanyi tidak valid." << endl;
    }
}

bool validasi_pilihan(char pilihan) {
    return pilihan >= '1' && pilihan <= '5';
}

void tampilkan_menu_utama() {
    char pilihan;
    do {
        pilihan = tampilkan_menu();

        if (!validasi_pilihan(pilihan)) {
            cout << "Pilihan tidak valid. Silakan pilih menu yang sesuai." << endl;
            continue;
        }

        switch (pilihan) {
            case '1':
                tambah_data();
                break;
            case '2':
                tampilkan_data();
                break;
            case '3':
                ubah_data();
                break;
            case '4':
                hapus_data();
                break;
            case '5':
                cout << "Terima kasih! Program berhenti." << endl;
                break;
        }
    } while (pilihan != '5');
}

int main() {
    if (!login()) {
        return 0; 
    }

    tampilkan_menu_utama();

    return 0;
}
