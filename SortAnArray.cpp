#include <iostream>

int sort(int array[], int n);
void print(int array[], int n);
int main()
{
    int n;
    std::cout << "How many numbers you want to sort ?" << std::endl
              << "--> ";
    std::cin >> n;
    int array[n];
    sort(array, n);
    print(array, n);
    return 0;
}
int sort(int array[], int n)
{
    int choice, temp;
    std::cout << "Enter the elements : " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    std::cout << "Sorting direction ?" << std::endl
              << "1 . Greater to Smaller" << std::endl
              << "2 . Smaller to Greater" << std::endl;
    std::cin >> choice;
    if (choice == 1)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (array[j] < array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
    else if (choice == 2)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
    else
    {
        std::cout << "\033[1;31mWrong choice . \033[0m" << std::endl;
        return 0;
    }
    return 1;
}
void print(int array[], int n)
{
    std::cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << "\t";
    }
}