#include <iostream>
#include <string>

using namespace std;

//Focando um pouco sobre strings aqui.

int main() {

cout << "Hi! Please, type your full name below: \n";

string fname;
getline (cin, fname);
//getline() l� uma linha toda
cout << "Ok, "<<fname<<". Now type the first and last name \n";


string name;
cin >> name;
string name2;
cin >> name2;


cout << "\nHello, " << fname << "! Your name have " << (name + name2).length() << " letters! And the first letter of your name is " <<name[0]<< ". Cool!";
//Usei (name + name2) porque fname conta " " como uma letra.
//size() tamb�m pode ser usado em vez de lentgth().

return 0;
}
