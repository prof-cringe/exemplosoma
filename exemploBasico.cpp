#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b;
    string nome;
    
    cout << "Exemplo Básico de Aplicativo" << endl;
    cout << "Digite o seu nome: ";
    //cin >> nome;
    getline(cin, nome);
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;
    cout << "Fale " << nome << ", A soma dos numeros e: " << a + b << endl;
    system("pause");
    return 0;
}
