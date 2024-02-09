#include<vector>
#include<iostream>

bool returnSumm(int first, int second, int result)
{
	if (first + second == result)
		return true;
	else
		return false;
}

int main()
{
	int lenth, k;
	std::cout << "Enter k:";
	std::cin >> k; 
	std::cout << "Enter lenth:";
	std::cin >> lenth; 
	std::vector<int>bufferCont(lenth);
	for (auto i = 0; i < lenth; i++) 
	{
		std::cout << "Enter " << i + 1 << " value: ";
		std::cin >> bufferCont[i];
	}
	for (auto index = 0; index < lenth; index++) 
	{
		if (index != lenth - 1) 
		{
			for (auto lenthOther = index + 1; lenthOther < lenth; lenthOther++) 
			{
				if (returnSumm(bufferCont[index], bufferCont[lenthOther], k))
				{
					std::cout << "First number: " << bufferCont[index] << " Second number: " << bufferCont[lenthOther] << std::endl;
				}
			}
		}
	}
	return 0;
}