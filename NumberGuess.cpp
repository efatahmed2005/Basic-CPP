#include <iostream>
#include <ctime>

int main()
{
srand(time(NULL));
int number = ((rand() % 100) + 1), tries = 0, guess;
do
{
    std::cout << "Enter a Number between 1 to 100 : ";
    std::cin >> guess;
    tries++;
    if (guess > number)
        std::cout << "Too High .\n";
    else if (guess < number)
        std::cout << "Too Low .\n";
    else
    {
        std::cout << "Your guess " << guess << " is correct . " << std::endl
                  << "Number of tries : " << tries << " .\n";
    }
} while (guess != number);
return 0;
}