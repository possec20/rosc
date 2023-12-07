#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main(){
	int sum = 0;
	int summand1 = 0;
	int summand2 = 0;
	
	// assignment of init
	int value {-5};
	cout << value << endl;
	cout << "Numeric limit int: " << numeric_limits<int>::min() << endl;
	cout << "Numeric limit int: " << numeric_limits<int>::max() << endl;
	cout << "Numeric limit long: " << numeric_limits<long>::min() << endl;
	cout << "Numeric limit long: " << numeric_limits<long>::max() << endl;
	cout << "Numeric limit long long: " << numeric_limits<long long>::min() << endl;
	cout << "Numeric limit long long: " << numeric_limits<long long>::max() << endl;
	cout << "Numeric limit int: " << numeric_limits<unsigned int>::min() << endl;
	cout << "Numeric limit int: " << numeric_limits<unsigned int>::max() << endl;
	
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	
	cout << "value " << value << " " << fabs(value) << endl;
	
	const char STAR {'*'};
	cout << "a " << STAR << "Star is born " << endl;
	char a {'a'};
	char b = 'u';
	char x = STAR;
	x = 'H';
	cout << a << b << x << endl;
	
	// int someValue = (int)b;
	int someValue = static_cast<int>(b);
	cout << someValue << endl;
	
	// References
	int i {2};
	int j {8};
	int &r {i};
	cout << i << " " << j << " " << r << endl;
	r = 5;
	cout << i << " " << j << " " << r << endl;
	cout << &r << endl;
	cout << &j << endl;
	cout << &i << endl;
	cout << &sum << endl;
	
	
	
	cout << "Hello World" << endl;
	cout << "Please insert 2 numbers:" << endl;
	// cin >> summand1 >> summand2;
	sum = summand1 + summand2;
	cout << "Summe = " << sum << endl;
	return 0;

}
