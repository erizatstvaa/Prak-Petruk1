#include <iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	
	for(int i=1; i<=size; i++){
		if(i==5)
		continue;
		if(size<=29){
			cout<<i<<endl;
		}
		
		if(size>29){
			cout<<i<<endl;
			if(i>28){
				cout<<"NOT FOUND"<<endl;
				break;
			}
		}
	}
	
}
