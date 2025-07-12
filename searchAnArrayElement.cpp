#include <iostream>
#include <cstring>

void search(int numbers[], int size1, std::string foods[], int size2, int &n1, int &n2);

int main()
{
    system ("cls");
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string foods[] = {"Pizza", "Burgers", "Sandwich", "Chips"};
    int index1, index2;
    int size1 = sizeof(numbers) / sizeof(numbers[0]), size2 = sizeof(foods) / sizeof(foods[0]);
    search(numbers, size1, foods, size2, index1, index2);
}
void search(int numbers[], int size1, std::string foods[], int size2, int &n1, int &n2)
{
    int s1;
    n1 = -1;
    n2 = -1;
    std::string s2;
    std::cout << "Enter an int number you want to find : ";
    std::cin >> s1;
    for (int i = 0; i < size1; i++)
    {
        if (s1 == numbers[i])
        {
            n1 = i;
            std::cout << "Your Number is at index " << n1 << std::endl;
            break;
        }
    }
    if (n1 == -1)
        std::cout << "Number not found .\n";
    std::cin.ignore();
    std::cout << "Enter a food name you want to find : ";
    std::getline(std::cin, s2);
    for (int i = 0; i < size2; i++)
    {
        if (s2 == foods[i])
        {
            n2 = i;
            std::cout << "Your Food is at index " << n2 << std::endl;
            break;
        }
    }

    if (n2 == -1)
        std::cout << "String not found .\n";
}