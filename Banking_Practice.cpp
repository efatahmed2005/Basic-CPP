#include <iostream>
#include <iomanip>

double fdeposit();
double fwithdraw();
double fbalance(double balance);
void process();

int main()
{
    system("cls");
    process();
    return 0;
}
void process()
{
    double balance = 0;
    int choice;

    do
    {
        while (true)
        {
            std::cout << "\nEnter  your  choice : \n1 . Show Balance \n2 . Deposit Money\n3 . Withdraw Money\n4 . Exit \nChoice : ";
            std::cin >> choice;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid Input . Enter a number between 1 to 4 .\n";
            }
            else
            {
                std::cin.ignore(1000, '\n');
                break;
            }
        }

        if (choice == 1)
            fbalance(balance);
        else if (choice == 2)
            balance += fdeposit();
        else if (choice == 3)
        {
            if (balance == 0 || balance < fwithdraw())
            {
                std::cout << "withdrawl not available due to your insufficient balance .\n";
                continue;
            }
            balance -= fwithdraw();
        }

        else if (choice == 4)
            return;
        else
        {
            std::cout << "Invalid choice .\n Enter a valid number of choice . ";
        }
    } while (choice != 4);
}

double fbalance(double balance)
{
    std::cout
        << "Your current balance is : " << std::setprecision(2) << std::fixed << balance << std::endl;
    return balance;
}
double fdeposit()
{
    double deposit;
    do
    {
        std::cout << "Enter the amount of money you want to deposit : ";
        std::cin >> deposit;
        if (std::cin.fail() || deposit < 0)
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid amount .\n";
        }
        else
        {
            std::cin.ignore(10000, '\n');
            break;
        }
    } while (true);
    std::cout
        << "Deposited amount added to your current balance , Thank you . \n";
    return deposit;
}
double fwithdraw()
{
    double withdraw;
    do
    {
        std::cout << "Enter the amount of money you want to withdraw: ";
        std::cin >> withdraw;
        if (std::cin.fail() || withdraw < 0)
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid amount. Please enter a positive number.\n";
        }
        else
        {
            std::cin.ignore(10000, '\n');
            break;
        }
    } while (true);

    return withdraw;
}
