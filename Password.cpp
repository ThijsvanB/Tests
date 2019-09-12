#include <iostream>
#include <cstring>
#include <windows.h>

bool running = true;

std::string c;

int main()
{
	while (running == true)
	{
		std::cout << "Input password" << std::endl;
		std::cin >> c;
		if (c != "password")
		{
			std::cout << "Wrong password, try again" << std::endl;
		} 
		else
		{
			running = false;
		}
	}
	return 0;
}
