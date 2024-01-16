#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define LOGICAL_TYPES
//#define CHARACTER_TYPES
//#define NUMERIC_TYPES
//#define VARIABLES
//#define CONSTANTS;

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
#endif

#if defined NUMERIC_TYPES
	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX;
	cout << "\n----------------------------------------------\n";
	
	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << "signed long long:\n";
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "unsigned long long:\n";
	cout << ULLONG_MAX << endl;
	cout << "\n----------------------------------------------\n";

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << "float:\n";
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "\n----------------------------------------------\n";
	
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << "float:\n";
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	cout << "\n----------------------------------------------\n";
#endif
#if defined VARIABLES
	double price_of_coffee = 0;
	int number_of_cups = 0;
	
	cout << "¬ведите стоимость кофе";
	cin >> price_of_coffee;
	cout << "¬ведите количество чашек";
	cin >> number_of_cups;
	cout << "Cтоимость:";
	cout << price_of_coffee * number_of_cups << endl;
#endif

#if define CONSTANTS;
	int speed = 0;
	const int MAX_SPEED = 250;
	cout << typeid(5).name() << endl;
	cout << typeid(55.).name() << endl;
#endif CONSTANTS;

}