#include <iostream>
#include <string>

using namespace std;

int main() {


cout << "Ol�! Vou adivinhar seu nome. Coloque seu primeiro nome aqui \n";
string pNome;
cin >> pNome;

string uNome;
cout << "�timo! Agora coloque seu �ltimo nome \n";
cin >> uNome;

string ntotal = pNome + " " + uNome;

cout << "J� sei! Seu nome � " << ntotal << ". Agora vamos fazer algebra. Coloque o numero que voce deseja fazer as operacoes \n";

double x1;
cin >> x1;

double x2;
cin >> x2;

cout << "A multiplicacao � " <<x1*x2<< "\na soma e� " << x1+x2 << "\na subtracao � " <<x1-x2<< "\na divisao � "<< x1/x2;

return 0;
}
