#include<iostream>
using namespace std;

void fun(int *ptr)
{
	ptr=new int();
	*ptr=10;
}


main()
{
	int *ptr=0;
	fun(ptr);
	if(!ptr)
		cout<<"inside if"<<endl;
	else
		cout<<"inside else"<<endl;
	/*if(!ptr)
		cout<<"inside if ptr="<<*ptr<<endl;
	else
		cout<<"inside else ptr="<<*ptr<<endl;
*/
}
