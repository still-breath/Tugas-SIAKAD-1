#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
	int dd, mm, yy, tahunmasuk, id=0, semesterke, skslulus;
	string nama, nrp, npp, departemen, pendidikan, unit;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  0. Tutup Program SIAKAD" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				cout << "Nama Mahasiswa: ";
				getline(cin >> ws, nama);
				
				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "Departemen: ";
				getline(cin >> ws, departemen);

				cout << "NRP Mahasiswa: ";
				cin >> nrp;

				cout << "Tahun Masuk: ";
				cin >> tahunmasuk;

				cout << "Semester ke: ";
				cin >> semesterke;

				cout << "SKS Lulus (keseluruhan): ";
				cin >> skslulus;

				id = 1 + recMhs.size();
				mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(mhs);
			}
				break;
			case 2:
			{
				cout << "Nama Dosen: ";
				getline(cin >> ws, nama);

				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "Departemen: ";
				getline(cin >> ws, departemen);

				cout << "NPP Dosen: ";
				cin >> npp;

				cout << "Pendidikan Terakhir: ";
				getline(cin >> ws, pendidikan);

				id = 1 + recDosen.size();
				dosen dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(dosen);
			}
				break;
			case 3:
			{
				cout << "Nama Tendik: ";
				getline(cin >> ws, nama);

				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "NPP Tendik: ";
				cin >> npp;

				cout << "Unit: ";
				getline(cin >> ws, unit);

				id = 1 + recTendik.size();
				tendik tendik(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(tendik);
			}
				break;
			case 4:
			{
				for(unsigned long i=0; i<recMhs.size(); i++)
				{
					cout << endl;
					cout << "ID Mahasiswa: " << recMhs[i].getId() << endl;
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recMhs[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
					cout << "NRP: " << recMhs[i].getNRP() << endl;
					cout << "Departemen: " << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk: " << recMhs[i].getTahunMasuk() << endl;
					cout << "Semester ke: " << recMhs[i].getSemester() << endl;
					cout << "SKS Lulus: " << recMhs[i].getSKSLulus() << endl;
					cout << endl;
				}
			}
				break;
			case 5:
				for(unsigned long i=0; i<recDosen.size(); i++)
				{
					cout << endl;
					cout << "ID Dosen: " << recDosen[i].getId() << endl;
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recDosen[i].getTglLahir() << "/" << recDosen[i].getBulanLahir() << "/" << recDosen[i].getTahunLahir() << endl;
					cout << "NPP: " << recDosen[i].getNPP() << endl;
					cout << "Departemen: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan Terakhir: " << recDosen[i].getPendidikan() << endl;
					cout << endl;
				}
				break;
			case 6:
				for(unsigned long i=0; i<recTendik.size(); i++)
				{
					cout << endl;
					cout << "ID Tenaga Kependidikan: " << recTendik[i].getId() << endl;
					cout << "Nama Tenaga Kependidikan: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recTendik[i].getTglLahir() << "/" << recTendik[i].getBulanLahir() << "/" << recTendik[i].getTahunLahir() << endl;
					cout << "NPP: " << recTendik[i].getNPP() << endl;
					cout << "Unit: " << recTendik[i].getUnit() << endl;
					cout << endl;
				}
				break;
			case 0:
				return 0;
				break;
		}
	}

	return 0;
}
