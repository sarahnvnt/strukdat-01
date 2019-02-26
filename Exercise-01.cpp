/* 
Nama Program : Strukdat 
Nama : Sarah Navianti
NPM  : 140810180021
Kelas : A
Tanggal Buat : 26 februari 2019
Deskripsi 	: menghitung suhu 
*/
#include<iostream>
using namespace std;

float konversiFahrenheit (int temp){
	return temp*9/5+32;
}


main(){
	int celcius;
	cout<<"Konversi Celcius ke Fahrenheit"<<endl;
	cout<<"celcius =";
	cin>>celcius;
	cout<<"Fahrenheit ="<<konversiFahrenheit(celcius);
	return 0;
}
