#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
using text_t = std::string;
using number_t = int;
typedef double dot_t;
text_t stcat(text_t str1, text_t str2);
int main()
{
    system("cls");
    /*
    text_t firstName = "Efat ", lastName, uniName;
    number_t age = 20;
    dot_t height = 68 / 39.37;
    std::cout << "Enter your last name : ";
    std::cin >> lastName;
    std::cin.ignore(); // or use std::ws inside the line 20;
    std::cout << "Enter the name of your University :";
    std::getline(std::cin, uniName); // std::getline(std::cin >> std::ws , name);
    std::cout << "Hello " << firstName << lastName << " ." << std::endl
              << "You are " << age << " years old ." << std::endl
              << "Your height is  " << std::setprecision(3) << height << " meter ." << std::endl
              << "You read at " << uniName << " ." << std::endl;

    number_t x = 3, y = 2, z;
    std::cout << "Division :" << x / (dot_t)y << std::endl;
    z = std::max(x, y);
    // z=std::min(x,y);
    // z=pow(x,y);
    // z=sqrt(9);
    // z=abs(-4);//gives 4
    dot_t w = 9.34;

    std::cout << "Z = " << z << std::endl
              << "W (round) = " << round(w) << std::endl
              << "W (ceil) = " << ceil(w) << std::endl
              << "W (floor) = " << floor(w) << std::endl;
    */
    /*
    dot_t height, ground, result;
    std::cout << "Enter the value of triangle Height : ";
    std::cin >> height;
    std::cout << "Enter the value of triangle Ground :";
    std::cin >> ground;
    result = sqrt(pow(height, 2) + pow(ground, 2));
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Result = " << result << std::endl;
    */
    /*
    dot_t farenheit, celcius, choice;
    std::cout << "1 . farenheit to Celcius .\n2 . Celcius to farenheit\nEnter choice -->> 1 or 2 : ";
    std::cin >> choice;
    std::cout << std::fixed;
    std::setprecision(3);
    if (choice == 1)
    {
        std::cout << "Enter the temperature in farenheit : ";
        std::cin >> farenheit;
        celcius = ((5 * farenheit) - 160) / 9;
        std::cout << "Converted temperature from farenheit to celcius : " << std::setprecision(2) << celcius << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Enter the temperature in celcius : ";
        std::cin >> celcius;
        farenheit = ((9 * celcius) + 160) / 5;
        std::cout << "Converted temperature from celcius to farenheit : " << std::setprecision(2) << farenheit << std::endl;
    }
    */
    /*
     text_t name;
     std::cout << "Enter your name : ";
     std::getline(std::cin, name);
     name.append("@gmail.com");
     std::cout << "append() : " << name << std::endl;
     std::cout << "Length : " << name.length() << std::endl;
     (name.empty()) ? std::cout << "the string is empty .\n" : std::cout << "OKay\n";
     std::cout << "at() = " << name.at(3) << std::endl;
     name.insert(0, "@");
     std::cout << "insert() = " << name << std::endl;
     std::cout << "find() = " << name.find(' ') << std::endl;
     name.erase(0, 6);
     std::cout << "erase() = " << name << std::endl;
     name.clear();
     std::cout << "clear() : " << name << std::endl;
     */
    /*
    text_t name;
    std::cout << "Enter your name : ";
    std::getline(std::cin, name);
    while (name.empty())
    {
        std::cout << "Enter your name : ";
        std::getline(std::cin, name);
    }
    std::cout <<"Hello "<<name<<"."<<std::endl;
    number_t number;
    do
    {
        std::cout <<"Enter a number : ";
        std::cin >>number;
    }while (number < 0 );
    */
    /*
     srand(time(NULL));
     int number = ((rand() % 100) + 1), tries = 0, guess;
     do
     {
         std::cout << "Enter a Number : ";
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
     */
/*
    text_t string1 = "Efat", string2 = "Ahmed";
    text_t result=stcat(string1,string2);
    std::cout <<result<<std::endl;
*/

    return 0;
}
text_t stcat(text_t str1, text_t str2)
{
    return str1 + " " + str2;
}