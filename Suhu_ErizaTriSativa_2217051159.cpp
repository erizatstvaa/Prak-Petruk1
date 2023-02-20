#include <iostream>
using namespace std;
int main (){
	float celcius,reamur,kelvin,fahrenheit;
	
	cout<<"Masukan Suhu celcius :";
	cin>>celcius;
	
	reamur=celcius*4/5;
	kelvin=celcius+273.15;
	fahrenheit=celcius*9/5+32;
	
	cout<<"Reamur :"<<reamur<<endl;
	cout<<"Kelvin :"<<kelvin<<endl;
	cout<<"Fahrenheit :"<<fahrenheit<<endl;
	
	return 0;
}
