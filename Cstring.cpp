#include <iostream>
#include <cstring>
using namespace std;

int main(){
//	char nama[15]="Eriza";
//	char prodi[]="Ilkom";
//	
//	cout<<nama<<endl;
//	cout<<sizeof(nama)<<endl;
//	
//	cout<<prodi<<endl;
//	cout<<sizeof(prodi)<<endl;
//	
//for (int i=0; i<sizeof(prodi);i++)
//	cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"nul":"not null")<<endl;
	
	
//1.cin.get()&cin.ignore()
//	char nama[15];
//	char npm[10];
//	
//	cin.get(nama, 15);
//	cin.ignore();
//	cin.get(npm, 10);
//	
//	cout<<"nama: "<<nama<<endl;
//	cout<<"npm: "<<npm<<endl;



//2.cin.putback()
//	char karakter;
//	while(cin.get(karakter)){
//		if(karakter=='a')
//			cin.putback('x');
//		else
//			cout<<karakter;
//	}



		//Fungsi manipulasi cstring
//1.strlen()
//	char str[]={'I','L','K','O','M','P','\0'};
//	
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
	
	
	
//2.strcat()
//	char firstname[50]="eriza tri ";
//	char lastname[50]="sativa";
//	char *fullname=strcat(firstname, lastname);
//	cout<<fullname;	



		//Fungsi strol() and strtoul(), strtod()
//1.strol()
//	char* endptr;
//	char str1[]="00011010John";
//	long value1=strtol(str1, &endptr, 2);
//	cout<<"the converted value is "<<value1<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//	
//	char str2[]="1czidan";
//	long value2=strtol(str2, &endptr, 16);
//	cout<<"the converted value is "<<value2<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//	
//	char str3[]="40raziq";
//	long value3=strtol(str3, &endptr, 10);
//	cout<<"the converted value is "<<value3<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;



//buat kodingan
	char data[5][100]={"2217051159Eriza Tri Sativa", "2257051014Meita Ayu Sabna D", "2257051019Rini Puspita W", "2257051029Devrinatasyah", "2217051119Lugita Sandika P"};
	char* endPtr;
	for(int i=0; i<5; i++){
		long value=strtod(data[i], &endPtr);
		cout<<"nama: "<<endPtr<<endl;
		cout<<"npm: "<<value<<endl;
		cout<<endl;
	}	
}
