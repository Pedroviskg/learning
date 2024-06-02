#include <iostream> 
#include <vector>

template <typename T>
void countMax_And_Min(std::vector<T>& vec)

{
	int size_of_vector = vec.size() - 1;
	double maior = vec[0];
	double menor = vec[0];
	int min_vec  = 0;
	int max_vec  = 0;

	for(int i = 1; i <= size_of_vector; i++)
	{
		if (vec[i] > maior)
		{
			maior = vec[i];
			max_vec = i;
		}
		if (vec[i] < menor)
		{
			menor = vec[i];
			min_vec = i;
		}
	}
	std::cout << "With array:(";
	for(int i = 0; i <= size_of_vector; i++)
	{
		if (i < size_of_vector)
		{
			std::cout << vec[i] << ", ";
		}
		if (i == size_of_vector)
		{
			std::cout << vec[i] << " )";
		}

	}
	std::cout << std::endl;
	auto p1 = std::make_pair(maior, max_vec);
	auto p2 = std::make_pair(menor, min_vec); 
	std::cout << "The min element has index " << p2.second << " and value " << p2.first << std::endl;
	std::cout << "The max element has index " << p1.second << " and value " << p1.first << std::endl;
	
}

std::vector<int> returnvectors()
{
	std::vector<int> arr(0);
	while(true)
	{
		double input {};
		std::cin >> input;

		if (input == -1)
		{
			break;
		}
		arr.push_back(input);
		
	}
	return arr;
}



int main()
{
	std::vector<int> vec = returnvectors();
	countMax_And_Min(vec);
	
	return 0;
}
