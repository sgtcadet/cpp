#include <iostream>

using namespace std;

int main()
{
    cout << "   Hello world! \n Sniper Simulator " << endl;
    cout << endl;
    double targetSize ;
    cout << "Enter Size of target in yards: ";
        cin >> targetSize;
    cout <<endl;
    double targetInMil;
    cout << "Enter target size in Mil: ";
        cin >> targetInMil;
    cout <<endl;
    int p = 1000;
    cout <<endl;
    // i was wondering if i should also
    //set the range variable
    //type to double
    int range = targetSize * p / targetInMil ;
    cout << "The Distance to the target in yards is: " << range ;
    // i'll just let it be until a further date.
    cout << endl;
    cout << endl;
    cout << "         One Shot One Kill  "<< endl;
    //system "PAUSE";
	return 0;
}

