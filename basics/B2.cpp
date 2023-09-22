#include <iostream>
#include <string>

using namespace std;

int main() {


cout << "Olá! Vou adivinhar seu nome. Coloque seu primeiro nome aqui \n";
string pNome;
cin >> pNome;

string uNome;
cout << "Ótimo! Agora coloque seu último nome \n";
cin >> uNome;

string ntotal = pNome + " " + uNome;

cout << "Já sei! Seu nome é " << ntotal << ". Agora vamos fazer algebra. Coloque o numero que voce deseja fazer as operacoes \n";

double x1;
cin >> x1;

double x2;
cin >> x2;

cout << "A multiplicacao é " <<x1*x2<< "\na soma eé " << x1+x2 << "\na subtracao é " <<x1-x2<< "\na divisao é "<< x1/x2;

return 0;
}
