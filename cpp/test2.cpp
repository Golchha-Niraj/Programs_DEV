#include<iostream>
using namespace std;

class test
{
	public:
		void fun()
		{
			cout<<"Inside fun"<<endl;
		}

};


main()
{
	class test *object=0;
	object->fun();
	cout<<"main End"<<endl;
}
