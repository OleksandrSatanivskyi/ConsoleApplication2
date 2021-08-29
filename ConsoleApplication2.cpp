
#include "Header.h"
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	int sam = 0;
	int shchot = 0;
	const int size1 = 5;
	const int size2 = 5;
	int n = 0;
	int m = 0;
	cout << "n=";
	cin >> n;
	cout << endl;
	cout << "m=";
	cin >> m;
	cout << endl;
   int array1[size1][size2];
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			array1[i][j] = rand() % 99 + 1;
			cout << setw(3) << array1[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			sum += array1[i][j];
			cout <<setw(4)<< sum;
		}
		cout << endl;
		if (sam < sum) {
			sam = sum;
			
			shchot = i+1;
		}
		sum = 0;
	}
	cout << shchot << " - номер рядка" << endl;
	cout << sam << " - сума" << endl;
	
}
