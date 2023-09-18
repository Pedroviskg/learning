#include <iostream>
using namespace std;

main(){

bool navios[3][3] = {

{1,0,1},
{1,0,0},
{0,1,0}

};

int acertos = 0;
int i, j;
int jogadas = 0;

cout << "Batalha naval simples. Há 4 navios. Escolha com sabedoria" << "\n";

while (acertos < 4) {

cout << "Escolha uma coluna e uma linha do navio.";

cout << "Escolha a linha (Insira um valor de 0 a 2): ";
cin >> i;

cout << "Escolha a coluna (Insira um valor de 0 a 2: ";
cin >> j;


if (navios[i][j]) {

    navios[i][j] = 1;


cout << "Tem algo aqui" << "\n\n";
acertos++;


} else {

cout << "Nao ha nada. Tente de novo." << "\n\n";
}
jogadas++;
}

if (jogadas < 5) {

cout << "Você venceu em " << jogadas << "jogadas. Parabens!";

} else {

cout << "Você venceu em " << jogadas << "jogadas. Podia ser melhor, soldado";
}

return 0;
}
