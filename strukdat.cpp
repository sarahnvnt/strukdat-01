/* 
Nama : Sarah Navianti
NPM  : 140810180021
Kelas : A
Tanggal Buat : 26 februari 2019
Deskripsi 	:
*/

#include<iostream>
using namespace std;

void fizzbuzz(){
	for (int i=1;i<=100;i++){
		if (i%15==0){
			cout<<"fizzbuzz"<<endl;
		}
		else if (i%5==0){
			cout<<"buzz"<<endl;
		}
		else if(i%3==0){
			cout<<"fizz"<<endl;
		}
		else cout<<i<<endl;
	}
}
main(){
	fizzbuzz();
}
