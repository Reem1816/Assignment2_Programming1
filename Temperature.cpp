#include <iostream>

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Temperature.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

using namespace std;

int main()
{
    double start, End;
    double velocity;
    cout<<"Enter Start Temperature "<<endl;
    cin>>start;
    cout<<"Enter End Temperature "<<endl;
    cin>>End;
    for(int i=start; i<=End;i++){


        velocity=331.3+0.61*i;
        cout<<"At "<<i<<" degree celsius the velocity of sound is "<<velocity<<"m/s"<<endl;
    }
    return 0;
}
