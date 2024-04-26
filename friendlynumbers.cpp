#include <iostream>

void numerosamigos(int num)
{
for (int i = 1; i <= (num-1); i++)
{
   if (num % i == 0)
   {
    std::cout << i << " ";
   } 
}
}

int somadosnumeros(int num)
{
int soma = 0;
for (int i = 1; i <= (num-1); i++)
{
    if (num % i == 0)
    {
        soma = soma + i;
    }
}
return soma;
}

void amigos(int num1, int num2, int sum1, int sum2)
{
    if ((sum1 == num2) and (sum2 == num1))
    {
        std::cout << "São números amigos!";
    } 
    else
    {
        std::cout << "Não são números amigos!";
    }
}

int main()
{
int num_a {};
int num_b {};
std::cin >> num_a;
std::cin >> num_b;

std::cout << "Os divisores próprios de " << num_a <<": ";
numerosamigos(num_a);
std::cout << "cuja soma é " << somadosnumeros(num_a);
std::cout << "\n";

std::cout << "Os divisores próprios de " << num_b <<": ";
numerosamigos(num_b);
std::cout << "cuja soma é " << somadosnumeros(num_b);
std::cout << "\n";

amigos(num_a, num_b, somadosnumeros(num_a), somadosnumeros(num_b));
std::cout << "\n";

return 0;
}
