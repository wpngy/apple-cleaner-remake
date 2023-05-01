#include <iostream>
#include <windows.h>
#include "driver.h"
#include <string>

int main()
{
menu:
    SetConsoleTitle(L"Apple Cleaner");
    system("cls");
    std::cout << "\033[1;36m \n";
    std::cout << " Apple Cleaner (4/15/2023) \n";
    std::cout << "\033[1;36m";
    std::cout << " Discord: \033[33;2mhttps://discord.gg/FHzaBYhR9C \n\n";


    std::cout << "\033[1;36m";
    std::cout << " [1] Clean Fortmeme \n";
    std::cout << " [2] Clean MW/WZ \n\n";

    std::cout << " Option: ";
    std::string option;
    std::cin >> option;

    if (option == "1")
    {
        std::cout << "\n";
        clean::fortnite();
        system("cls");
        system("echo \033[0;32m \n");
        std::cout << " Your PC is clean! \n";
        system("echo \033[1;36m");
        std::cout << " Press any key to continue . . .\n";
        system("pause >nul");
        adapters::adapters();
        system("start https://discord.gg/FHzaBYhR9C ");
        goto menu;
    }

    if (option == "2")
    {
        std::cout << "\n";
        clean::cod();
        system("cls");
        system("echo \033[0;32m \n");
        std::cout << " Your PC is clean! \n";
        system("echo \033[1;36m");
        std::cout << " Press any key to continue . . .\n";
        system("pause >nul");
        adapters::adapters();
        system("start https://discord.gg/FHzaBYhR9C ");
        goto menu;
    }
}
