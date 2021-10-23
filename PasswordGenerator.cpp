#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
std::string alphabets = "abcdefghijklmnopqrstuvwxyz";
std::string numbers = "12345678910";
std::string alphabets_uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::string special_characters = "!@#$%^&*";
void clear_screen()
{
#ifdef _WIN32
    {
        std::system("cls");
    }
#else
    {
        std::system("clear");
    }
#endif
}

int main()
{
    int choice, password_lenght;
    std::cout << "\n\n\tPress 1 to generate a password: ";
    std::cout << "\n\n\tPress 0 to exit: ";
    std::cin >> choice;

    do
    {
        switch (choice)
        {
            {
            case 1:

                std::cout << "\n\n\tEnter the length of the password you want to be. ";
                std::cout << "\n\n\tPress 0 to exit. ";
                std::cin >> password_lenght;

                if (password_lenght < 7)
                {
                    clear_screen();
                    std::cout << "\n\n\tThe password must be more than 7 characters! But i will add that functionality too :) ";
                }
                else if (password_lenght > 100)
                {
                    clear_screen();
                    std::cout << "\n\n\tWay to big password length! ";
                    break;
                }
                else
                {
                    clear_screen();

                    std::cout << "\n\n\tThanks for using the program!! ";
                    std::cout << "Here is your password! ";
                    for (int i = 0; i < password_lenght; i++)
                    {
                        char random_number_for_alphabets = rand() % 26;
                        char random_number_for_alphabets_uppercase = rand() % 26;
                        char random_number_for_numbers_kek = rand() % 10;
                        char random_number_for_special_characters = rand() % 8;
                        std::cout << numbers[random_number_for_numbers_kek] << alphabets_uppercase[random_number_for_alphabets_uppercase] << special_characters[random_number_for_special_characters] << alphabets[random_number_for_alphabets];
                    }
                }
                break;
            }
            {
            case 0:
                std::cout << "Thanks For Using The Program. <3 ";
                break;
            }
            
        }
    } while (password_lenght != 0);
    {
        std::cout << "\n\n\tInvalid Value. Thanks For Using The Program. ";
    }
    return 0;
}