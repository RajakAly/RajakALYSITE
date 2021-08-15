#include <iostream>
using namespace std;
void toh(int n,char s,char h,char d){
	if(n==0){
		return ;
	}
	toh(n-1,s,d,h);
	cout<<"Move"<<n<<"from"<<s<<"to"<<d;
	toh(n-1,h,s,d);

}


	int main() 
	{
		int n;
		cin>>n;
		cout<<toh(n,'A','B','C')<<endl;
		return 0;
	}
