#include <iostream>
#include <stdio.h>

using namespace std;

int rows1, columns1, rows2, columns2;

int main() {
	cout << "Input the number of rows for first matrix.";
	cin >> rows1;
	cout << "Input number of columns for first matrix.";
	cin >> columns1;

	int m[rows1][columns1];
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < columns1; j++) {
			cout << "input number";
			cin >> m[i][j];
		}
	}
	printf("\nHere is the first matrix.\n");
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < columns1; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	do {
		cout << "Input number of rows for second matrix. "
				"The number of rows should equal to"
				" the number of columns from the first matrix.";
		cin >> rows2;
	} while (rows2 != columns1);

	cout << "Input number of columns";
	cin >> columns2;

	int n[rows2][columns2];
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < columns2; j++) {
			cout << "input number";
			cin >> n[i][j];
		}
	}
	printf("\nHere is the second matrix.\n");
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < columns2; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}

	int o[rows1][columns2];
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < columns2; j++) {
			o[i][j] = 0;
		}
	}
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < columns2; j++) {
			for (int k = 0; k < columns1; k++) {
				o[i][j] += m[i][k] * n[k][j];
			}
		}
	}

	printf("\nHere is the result.\n");
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < columns2; j++) {
			printf("%d ", o[i][j]);
		}
		printf("\n");
	}

}
