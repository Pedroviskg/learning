#include <iostream>
//iostream � a bibiloteca que estou utilizando.

using namespace std;
/*usar o std antes do programa � melhor que usar
std::*/

int main(){ //� a fun��o principal. Usar "{}" para finalizar

const float myNum = 69.21;
//const fixa a constante

 cout<< "Ola, mundo!\n\n";
 cout<< "Meu numero favorito e o\ " << myNum << ". E o seu? \n";

 int x;
 cin >> x;
/*cin >> � usado para digitar. Perceber que
>> � para input*/

 int y;
 cout<< "Entao o seu e o numero " << x << ". Digita outro numero para a gente somar \n\n";
 cin >> y;
 cout << "Entao a soma dos seus numeros e do meu e " << x + y + myNum;

 //cout � a fun��o (print)
 return 0;
 }
