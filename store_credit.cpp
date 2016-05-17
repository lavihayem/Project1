#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int *storeCredit(std::vector<int> prices, int items, int credit){
	int  temp[2];
	for (int i = 0; i < items - 1; i++)
	{
		for (int j = i + 1; j < items; j++)
		{
			if (!(prices[i] + prices[j] == credit))
				;
			else {
				temp[0] = i + 1, temp[1] = j + 1;
			}
		}
	}
	return temp;
}

int main() 
{
	std::ifstream infile("input.in");
	if (!infile) 
	{
		std::cout << "could not open input file" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream outfile("output.out");

	int num_cases, i = 0, items, credit;
	infile >> num_cases;

	for (int i = 0; i < num_cases; i++) 
	{
		infile >> credit;
		infile >> items;

		int price;
		std::vector<int> prices;

		for (int j = 0; j < items; j++) 
		{
			infile >> price;
			prices.push_back(price);
		}

		int *val = storeCredit(prices, items, credit);
		outfile << "Case #" << i + 1 << ": " << val[0] << " " << val[1] << std::endl;
		
	}
	std::cin.get();
}
