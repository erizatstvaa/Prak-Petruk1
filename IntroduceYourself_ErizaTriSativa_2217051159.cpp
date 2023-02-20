#include <iostream>
using namespace std;
int main (){
 	string a;
	 cout<<"nama lengkap: ";
	 getline (cin,a);
 
 	string b;
 	cout<<"kelas: ";
 	getline(cin,b);
 
 	string c;
 	cout<<"input nilai DDP: ";
 	getline (cin,c);  
 
 		cout<<"--------------------------------"<<endl;
   		cout<<a<<endl<<b<<endl<<c;
   		cout<<"Izin memperkenalkan diri nama saya [eriza tri sativa] dengan jumlah huruf [14]. Saya mahasiswa S1 Ilmu komputer dari kelas [A]. Nilai DDP saya adalah [80.23].";
 return 0;
}
