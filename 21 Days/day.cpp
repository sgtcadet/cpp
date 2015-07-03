#include <iostream>

using namespace std;
    int subtract(int first, int second){
        std::cout << "In F-subtract(), received " << first << " and "
        << second <<"\n";
        return (first-second);

    }
int main ()
{
    std::cout << "I'm in main()";
    int a,b,c;
    std::cout << std::endl;
    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "\n calling subtract() \n";
    c=subtract(a,b);
    std::cout << "\n Back in main.\n";
    std::cout << "c was set to " <<c;
    std::cout << "\n Exiting...\n\n";
    //std::cout << "HELLO WORLD!\n";

    /*int x =  5;
    int y = 7;
    cout << endl;
    cout << x + y << " " << x + y;
    cout << endl;
    */


    return 0;
}
