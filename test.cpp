#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int count=10;
	int *ptr=&count;
	cout << "count值=" << count << endl; 
	cout << "count位址" << &count << endl;
	cout << "*ptr=" << *ptr << endl;		//間接運算子 
	cout << "ptr=" << ptr << endl; 			//指標內容
	cout << "ptr位址=" << &ptr << endl;		//指標位址 
	cout << "=================================================" << endl;
	*ptr=100;
	cout << "count值=" << count << endl;
	cout << "*ptr=" << *ptr << endl;		//間接運算子 
	cout << "ptr=" << ptr << endl; 			//指標內容
	cout << "ptr位址=" << &ptr << endl;
	system("pause");
	return 0;
} 
