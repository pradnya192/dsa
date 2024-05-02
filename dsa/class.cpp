#include<iostream>
using namespace std;
class Phone
{
	private:
		string p_name;
		string p_size;
		public:
			Phone(string name,string size)
			{
			p_name=name;
			p_size=size;
		    }
			
			void makecall()
			{
				cout<<"makeing a call using"<<p_name<<endl;
			}
			void recievecall()
			{
				cout<<"recieving a call using"<<p_name<<endl;
			}
};
int main()
{
	Phone iphone("Iphone x","1000*500");
	iphone.makecall();
	iphone.recievecall();
	return 0;
}

