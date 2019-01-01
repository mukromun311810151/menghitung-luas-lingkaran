#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int jari_jari, luas;
	float phi = 3.14;
	
	cout << "masukkan jari_jari lingkaran : ";
	cin >> jari_jari;
	
	luas = phi * jari_jari * jari_jari;
	cout << "luas lingkaran : " <<luas;
	
	return 0;
	
}
