#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int ori=n;
	while(n>0){
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	if(sum==ori){
		cout<<"amrstrong num"<<endl;
	}
	else{
		cout<<"not amrstrong num"<<endl;
	}
	return 0;
}
