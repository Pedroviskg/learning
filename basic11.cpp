#include <iostream>
#include <string>
using namespace std;

string com = "Pizza";
string &janta = com;


main() {


struct {
  string console;
  string jogo;
  } op1, op2;

op1.console = "PS4";
op1.jogo = "GTA V";

op2.console = "XONE";
op2.jogo = "Fortnite";

cout << op1.console << "\n";
cout << op2.console << "\n";
cout << "Qual das duas opçoes voce prefere para jogar comendo uma " << janta << " ? XONE (Digite 1) ou PS4 (Digite 2)? ";

int jc;
cin >> jc;

if (jc = 0) {

cout << "Entao e Xbox One com " << op2.jogo << ".";

} else {
cout <<"Entao e um PS4 com " << op1.jogo << ".";
}


/*Usa-se structs para definir diversos valores a uma variável */


return 0;
}
