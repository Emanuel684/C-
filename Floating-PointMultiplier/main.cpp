#include <iostream>

using namespace std;

int main()
{
    int work;
    cout << "1. multiplication of two floating points." << endl;
    cout << "2. multiplication of two floating points arrays." << endl;
    cout << "3. multiplication of two floating points in to array of two dimensions." << endl;
    cout << "Hello world! please introduce a number to know what to do: " << endl;
    cin >> work;
    if(work == 1){
    double float_1, float_2, result;
    cout << "Please insert the first floating-point: "<< endl;
    cin >> float_1;
    cout << "Please insert the second floating-point: "<< endl;
    cin >> float_2;
    cout << "Processanding..." << endl;
    result = float_1 * float_2;
    cout << "The result of the multiplication is: " << result << endl;
    }
    else if( work == 2 ){
    float arr1[5] = { }, arr2[5] = { };
    cout << "Floating array number 1" << endl;
    cout << "Size of array number 1: " << sizeof arr1 / sizeof arr1[0] << endl;
    for(int i = 1; i < (sizeof arr1 / sizeof arr1[0]); ++i){
        float inst1;
        cout << "Insert a float point number: " << endl;
        cin >> inst1;
        arr1[i - 1] = inst1;
    }
    cout << "Floating arrat number 2" << endl;
    cout << "Size of array number 2: " << sizeof arr2 / sizeof arr2[0] << endl;
    for(int y = 1; y < (sizeof arr2 / sizeof arr2[0]); ++y){
        float inst2;
        cout << "Insert a float point number: " << endl;
        cin >> inst2;
        arr2[y - 1] = inst2;
    }

    cout << "Result of the multiplication of the two arrays: " << endl;

    for(int z = 1; z < (sizeof arr1 / sizeof arr1[0]); ++z){
        float result;
        result = arr1[z - 1] * arr2[z -1];
        cout << "The result in :" << z - 1 << " is: " << result << endl;
    }

    }
    else if( work == 3 ){
       double float_1, float_2, result;
    cout << "Please insert the first floating-point: "<< endl;
    cin >> float_1;
    cout << "Please insert the second floating-point: "<< endl;
    cin >> float_2;
    cout << "Processanding..." << endl;
    result = float_1 * float_2;
    cout << "The result of the multiplication is:" << result << endl;
    }

    return 0;
}
