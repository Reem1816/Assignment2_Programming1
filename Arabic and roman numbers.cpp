#include <iostream>

using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Arabic and Roman numbers.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

int value(char r)
{
    if (r == 'I')
        return 1;
   else if (r == 'V')
        return 5;
   else if (r == 'X')
        return 10;
   else if (r == 'L')
        return 50;
   else if (r == 'C')
        return 100;
    else if (r == 'D')
        return 500;
   else if (r == 'M')
        return 1000;
   else
    return -1;
}

int main()
{
    string character ="";
    bool X = false;
    while (! X){
    cin>>character;
    int result = 0;
    if( character =="isdone" ){

        break;
    }


    for (int i=0; i<character.length(); i++)
    {

        int s1 = value(character[i]);

        if (i+1 < character.length())
        {
            int s2 = value(character[i+1]);

            if (s1 >= s2)
            {

                result = result + s1;
            }
            else
            {
                result = result + s2 - s1;
                i++;
            }
        }
        else
        {
            result = result + s1;
            i++;
        }
    }
    cout<<result<<endl;
    }
    return 0;
}
