/*
C++ Keywords
List of keywords reserved in c++
https://en.cppreference.com/w/cpp/keyword
Lot of keywords in cpp are rarely used.



*   #include, main, number, std::cout, std::cin, std::endl are not keywords,
    they are identifiers

*   << is stream insertion operator
    >> is sream extraction operator
 
*   :: is scope resolution operator

*   ; " " {} cpp punctation

* When all used together we get the program syntax, used to compile program
    into machine code. 


*/

#include <iostream>

int main()
{
    int number;

    std::cout<<"Enter a number from 1 to 100";
    std::cin>>number;

    std::cout<<"Thats the number entered  "<<number<<std::endl;

    return 0;
}