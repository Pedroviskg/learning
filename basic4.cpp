#include <iostream>

#include <string>

#include <cmath>
//cmath � m�dulo de matem�tica. S�o diversas fun��es.

using namespace std;

int main () {

string value = "pedro";
double xis = sqrt(value.length()) ;


double txt;
cin >> txt;

 if (txt >= 10) {
   cout << "invalid number \n";

}  else {
     cout <<"good number \n";

}
/*Outro jeito de usar if e else:
 double txt;
 cin >> txt
 string ex = (txt >= 10) ? "invalid number" : "good number" ;

 cout << ex;

 menos linhas para a mesma fun��o. Perceba que agora usa-se
 uma string para definir o resultado de txt

 else if garante uma via do meio se if � falso */


cout << (xis) << "\n" << round(xis) << "\n" << floor(xis) << "\n";

return 0;
}
