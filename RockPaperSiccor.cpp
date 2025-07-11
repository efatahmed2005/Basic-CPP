#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
char chooseWinner(char userc, char computerc, int &uscore, int &cscore, int &tie);
int main()
{
    int n = 0, uscore = 0, cscore = 0, tie = 0;
    srand(time(NULL));
    std::cout << "How many round you want to play : ";
    std::cin >> n;
    char userc, computerc;
    for (int i = 0; i < n; i++)
    {
        userc = userChoice();
        computerc = computerChoice();
        chooseWinner(userc, computerc, uscore, cscore, tie);
    }
    std::cout << "\n\nFinal Score : \n\nYour Score : " << uscore << std::endl
              << "Computer's Score : " << cscore << std::endl
              << "Tie : " << tie << std::endl;
    return 0;
}
char userChoice()
{
    char userc;
    do
    {
        std::cout << "\n\n\nEnter Your choice : \n\n## r for Rock \n## p for Paper\n## s for Siccor\n\nYour Choice : ";
        std::cin >> userc;
    } while (userc != 'r' && userc != 'p' && userc != 's');

    std::cout << "\nYour choice |-> " << userc << std::endl;
    return userc;
}
char computerChoice()
{

    int computerc = (rand() % 3) + 1;
    char computerchoice;
    switch (computerc)
    {
    case 1:
        computerchoice = 'r';
        break;
    case 2:
        computerchoice = 'p';
        break;
    case 3:
        computerchoice = 's';
        break;
    default:
        std::cout << "Something went wrong .";
        break;
    }
    std::cout << "Computer choice |-> " << computerchoice << "\n\n";
    return computerchoice;
}
char chooseWinner(char userc, char computerc, int &uscore, int &cscore, int &tie)
{
    switch (userc)
    {
    case 'r':
        if (computerc == 'p')
        {
            std::cout << "You loose !\n";
            cscore += 1;
        }
        else if (computerc == 'r')
        {
            std::cout << "It's a tie !\n";
            tie += 1;
        }
        else
        {
            std::cout << "Great ! You won !\n";
            uscore += 1;
        }
        break;

    case 'p':
        if (computerc == 'r')
        {
            std::cout << "Great ! You won !\n";
            uscore += 1;
        }
        else if (computerc == 'p')
        {
            std::cout << "It's a tie !\n";
            tie += 1;
        }
        else
        {
            std::cout << "You loose !\n";
            cscore += 1;
        }
        break;
    case 's':
        if (computerc == 'r')
        {
            std::cout << "You loose !\n";
            cscore += 1;
        }
        else if (computerc == 'p')
        {
            std::cout << "Great ! You won !\n";
            uscore += 1;
        }
        else
        {
            std::cout << "It's a tie !\n";
            tie += 1;
        }

        break;

    default:
        break;
    }
    return 1;
}