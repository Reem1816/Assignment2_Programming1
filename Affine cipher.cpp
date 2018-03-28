#include <iostream>

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: AffineCipher.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

using namespace std;

int main()

{

    int choice;
    cout <<"if you want to encreption press 1 "<<endl;
    cout <<"if you want to decreption press 2 "<<endl;
    cout <<"ener your choice"<<endl;
    cin >>choice;
    int a;
    int b;
    int c;
    string character = "";
    string ccc;
    cout<<"enter string you need "<<endl;
    cin>> character ;
    cout<<"enter a :"<<endl;
    cin>>a;
    cout<<"enter b :"<<endl;
    cin>>b;
    cout<<" plaintext : "<<endl;
    cout <<character<<endl;

    for(int i = 0 ; i < character.length(); i++)
    {

    if (choice ==1){
    int enc = (int)character[i]-65;
    cout<<"NUMBER X is :"<<enc<<endl;
    int encrypted ;
    encrypted =(a*enc+b)%26;
    cout<<"the encreption is :"<<encrypted<<endl;
    int change_encToChar = encrypted+65;
    cout <<" the ciphertext is :"<< (char)change_encToChar << endl;

    } else {
    int enc = (int)character[i]-65;
    int encrypted ;
    encrypted =(a*enc+b)%26;
    int change_encToChar = encrypted+65;
    cout <<" the ciphertext is :"<< (char)change_encToChar << endl;
    int y ;
    y=(int) change_encToChar - 65;
    cout<<"NUMBER Y is :"<<y<<endl;
    cout<<"enter c :"<<endl;
    cin>>c;
    int  decryption = c*(y-b)%26;
    cout<<"the the decryption is : is :"<<decryption<<endl;
    int change_decToChar = decryption+97;
    cout <<" the ciphertext is :"<< ( char )change_decToChar << endl;
    }

    }


    return 0;
}
