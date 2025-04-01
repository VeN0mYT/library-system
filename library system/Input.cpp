#include "Input.hpp"

unsigned int InputH(std::string message, unsigned int min, unsigned int max)
{
	unsigned int var = 0;
	std::cout << message;
	while (1)
	{
		if (!(std::cin >> var))
		{
			std::cout << "Invalid input. Try again: "<<"\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if(var < min || var > max)
		{
			std::cout << "Out of range. Try again: "<<"\n";
		}
		else
		{
			break;
		}
		std::cout<<message;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return var;
}

std::string InputPhone(std::string message)
{
	
	std::string var;
	while (1)
	{
		std::cout << message;
		std::cin>>var;
		if (var.size() != 11)
		{
			std::cout << "Invalid input. Try again: "<<"\n";
		}
		else
		{
			if(var.substr(0,3) != "012"&&var.substr(0,3)!="015")
				std::cout << "Invalid input. Try again: "<<"\n";
			else
			{
				bool flag = true;
				for (auto& i : var)
				{
					if (!isdigit(i)) {flag = false; break; }
				}

				if(flag)
					break;
				else
					std::cout << "Invalid input. Try again: "<<"\n";
				
			}
		}

	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return var;
}
