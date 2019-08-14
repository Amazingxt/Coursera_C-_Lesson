#include <iostream>
#include <iomanip>
using namespace std;

int n;


int main(){
	cin >> n;
	char junk[256];
	cin.getline(junk,256);
	char DNA1[n][256];
	for (int i = 0 ; i < n; i++) {
		cin.getline(DNA1[i], 256);
	}
	for (int i = 0; i < n; i++) {
		int j = 0;
		while(DNA1[i][j] != '\0') {
			if (DNA1[i][j] == 'A') {
				cout << 'T';
			}
			else if (DNA1[i][j] == 'T') {
				cout << 'A';
			}
			else if (DNA1[i][j] == 'C') {
				cout << 'G';
			}
			else if (DNA1[i][j] == 'G') {
				cout << 'C';
			}
			j++;
		}
		cout << endl;
	}
	return 1;
}