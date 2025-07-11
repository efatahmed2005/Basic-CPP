#include <iostream>
int myNum=3;
void test()
{
    int myNum=2;
    std::cout<<::myNum;
}
int main()
{
    int myNum=1;
    test();
}
