#include <iostream>
#include <array>
#include <vector>
// [8,3,5,2] e [5,4,10,3,1]  ---> 3,5



void numero_interseccao(std::array<int,4> a, std::array<int,5> b)
{
    std::vector<int> members;
    int counter = 0;

    int maior = a.size();
    int menor = b.size();
    if (a.size() < b.size())
    {
        maior = b.size();
        menor = a.size();
    }


    for(int i = 0; i <= maior; i++)
    {   
        bool ver = false;
        if(i!=0)
        {
            int pos = i - 1;
            for(int k = pos; k >= 0; k = k - 1)
            {
                if(b[i] == b[k])
                {
                    ver = true;
                    break;
                }
            }
        
        }
        
        for(int j = 0; j <= menor; j++)
        {    
            if(b[i] == a[j] and ver == false)
            {    
                counter = counter + 1;
                members.push_back(b[i]);
                break;
            }
        }         
   }
    int sizevec = members.size();
    std::cout << "A interseccao eh de " << counter << " e o/os numero/numeros eh/sao: ";
    for(int l = 0; l < sizevec; l++)
    {
        std::cout << members[l] << " ";
    }
}


int main()
{
    std::array<int,4> arr1 = {8,3,1,5};
    std::array<int,5> arr2 = {5,3,5,1,8};

    numero_interseccao(arr1, arr2);
    return 0;
}
