#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit;
    cout << "Hello world! please introduce a measurement in celsius:" << endl;
    cin >> celsius;
    cout << "The measurement in celsius is: " << celsius << endl;
    cout << "Processanding..." << endl;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "The measurement in fahrenheit is: " << fahrenheit << endl;
    return 0;
}
