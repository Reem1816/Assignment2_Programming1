#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Exponential.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

int main ()
{
double input;                           //value input by the user
int i=1,counter=0;                     //counter from 1-100 is counter, i will be used to display text in lines
double factorial=1;                   //factorial
double expo=0;                        //this stores the answer for ex

cout << "Welcome to the program" <<endl;
cout << "Please enter any real number :)" << endl;
cin >> input;                          //takes the input from the user
cout << "Here are all values from 1 to 100: " << endl;

while(counter<=100)
{
expo+= pow(input,counter)/factorial;  //calculation for exp
counter++;                          //increment counter
factorial*=counter;                //calculation for factorial (counter!)
cout<<expo << "\t";                // to make equal spaces

if(i%10==0)
cout<<endl;

i++;
}

cout << endl << "The calculated value for counter = 100 is " <<expo << endl;
cout << "The predefined value is " << exp(input) << endl;
system ("pause");
return 0;
}
