#include <iostream>

using namespace std;

int main()
{
    double meters, feets;
    cout << "Hello world! please introduce a measurement in meters:" << endl;
    cin >> meters;
    cout << "The measurement in meters is: " << meters << endl;
    cout << "Processanding..." << endl;
    feets = meters * 3.28084;
    cout << "The measurement in feets is: " << feets << endl;
    return 0;
}
