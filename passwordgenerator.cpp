#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char arr[]="0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int len=sizeof(arr)-1;
char getrandom(){
	return arr[rand()%len];
}
int main(){
string str,pass;
int n;
cout<<"Enter the length of password";
cin>>n;

srand(time(0));
cout<<"Generated password: ";
for(int i=0;i<n;i++){

cout<<getrandom();
}
int num;
cout<<"\nAre you ok with the new password or it should be channged? ";
cout<<"\n1. OK"<<endl<<"2. Change"<<endl;
cin>>num;



switch(num){
	case 1:
		cout<<"Password updated!";
		break;
	case 2:
		srand(time(0));
		cout<<"New Generated password:";
		for(int i=0;i<n;i++){

		cout<<getrandom();
		}
		break;
}

}
