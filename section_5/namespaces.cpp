/*
Namespaces

what if company x and y write same function

my version of cout would vaibhav::cout so the compiler gets a idea which
cout to use

namespaces are used to reduce naming conflict 

Scope resolution operator ::

not a good practice to use using namespace in large code bases


Best practice
using std::cout;
using std::cin;
using std::endl;

*/

#include <iostream>

using namespace std;  //use entire std namespace

int main()
{
    int number;

    cout<<"Enter a number from 1 to 100";
    cin>>number;

    cout<<"Thats the number entered  "<<number<<endl;

    return 0;
}