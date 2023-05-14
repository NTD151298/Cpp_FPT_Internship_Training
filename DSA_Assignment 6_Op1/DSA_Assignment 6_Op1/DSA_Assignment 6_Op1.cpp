#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

void Bai1() {
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) {
			cout << " ";
		}
		for (j = i; j <= n; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void Bai2() {
	int mat1[10][10];
	int a = 0, b = 0, c = 0, d = 0, g = 0, p = 0, o = 0, arr[100], hang, cot, dai, rong;
	int i, j, n, k;
	cout << "Nhap ma tran  \n";
	cout << "So hang: "; cin >> hang;
	cout << "So cot: "; cin >> cot;
	cout << "Nhap tung phan tu: \n";
	for (i = 0; i < hang; i++) {
		for (j = 0; j < cot; j++) {
			cin >> mat1[i][j];
		}
	}
	cout << "\nMa tran dc nhap la: \n";
	for (i = 0; i < hang; i++) {
		for (j = 0; j < cot; j++) {
			cout << mat1[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Nhap chieu dai hinh chu nhat : "; cin >> dai;
	cout << "Nhap chieu rong hinh chu nhat : "; cin >> rong;
	if (dai == 0 && rong == 0) {
		cout << "So lon nhat cua hinh chu nhat trong ma tran la = 0";
		return;
	}
	a = 0;
	b = 0;
	if (dai <= cot && rong <= hang) {
		for (i = 0; i < hang; i++) {
			for (j = 0; j < cot; j++) {
				for (n = i; n < hang; n++) {
					for (k = j; k < cot; k++) {
						if (a < dai && b < rong) {
							d = mat1[n][k] + d;
						}
						a++;
					}
					a = 0;
					b++;
				}
				arr[g] = d;
				d = 0;
				b = 0;
				g++;
			}
		}
	}
	else {
		cout << "Chieu dai hinh chu nhat dai hon so cot cua ma tran.";
		return;
	}
	for (i = 1; i < 9; ++i) {
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << endl << "So lon nhat cua hinh chu nhat trong ma tran la = " << arr[0];
}

int main() {

	Bai1();

	Bai2();

	cout << "\n\n\n";
	return 0;
}