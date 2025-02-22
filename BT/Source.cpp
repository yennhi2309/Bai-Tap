#include <iostream>
using namespace std;

bool kiemTraSoNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void menu() {
	int luaChon;
	do {
		cout << "\n========== MENU ==========" << endl;
		cout << "1. Kiem tra so nguyen to" << endl;
		cout << "2. Kiem tra nam nhuan" << endl;
		cout << "3. Thoat" << endl;
		cout << "Ban chon (1/2/3): ";
		cin >> luaChon;

		if (luaChon == 1) {
			int soNguyen;
			cout << "Nhap 1 so nguyen duong: ";
			cin >> soNguyen;
			if (soNguyen <= 0) {
				cout << "Vui long nhap 1 so nguyen duong!" << endl;
			}
			else {
				if (kiemTraSoNguyenTo(soNguyen)) {
					cout << soNguyen << " la so nguyen to." << endl;
				}
				else {
					cout << soNguyen << " khong phai so nguyen to." << endl;
				}
			}
		}
		
		else if (luaChon == 3) {
			cout << "Thoat chuong trinh." << endl;
		}
		else {
			cout << "Lua chon khong hop le, vui long chon lai!" << endl;
		}
	} while (luaChon != 3);
}

int main() {
	menu();

	return 0;
}
