#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int count=10;
	int *ptr=&count;
	cout << "count��=" << count << endl; 
	cout << "count��}" << &count << endl;
	cout << "*ptr=" << *ptr << endl;		//�����B��l 
	cout << "ptr=" << ptr << endl; 			//���Ф��e
	cout << "ptr��}=" << &ptr << endl;		//���Ц�} 
	cout << "=================================================" << endl;
	*ptr=100;
	cout << "count��=" << count << endl;
	cout << "*ptr=" << *ptr << endl;		//�����B��l 
	cout << "ptr=" << ptr << endl; 			//���Ф��e
	cout << "ptr��}=" << &ptr << endl;
	system("pause");
	return 0;
} 
