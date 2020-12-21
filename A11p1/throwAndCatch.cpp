#include<iostream>
using namespace std;
int main(){
try{
	int a,b;
	cin>>a;
	cin >>b;
	if (b>a){throw 3;
	}
	} catch(...){
		cout<<"you are wrong"<<endl;
	}
	return 0;
}
