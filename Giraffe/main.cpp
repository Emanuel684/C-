#include <iostream>

using namespace std;

int main()
{
    string characterName = "Emanuel";
    int characterAge = 23;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    cout << "Ingresa un nombre: " << endl;
    string userName;
    cin >> userName;
    cout << "Gracias por ingresar a nuestra plataforma " << userName << "." << endl;

    cout << "Ingresa un numero de impresiones" << endl;
    int i;
    cin >> i;
    for(int i = 0; i <= 5; i = i + 1)
{
        int sum = sum + i;
        cout << "La suma es: " << sum << endl;
        return 0;
}
    cout << "Las tiradas son: " << i << endl;

    return 0;
}
