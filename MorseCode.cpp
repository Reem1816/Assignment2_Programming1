#include <iostream>
using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: MorseCode.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader



string getMorse(int index){                                //encoding
string morse [36] = {".-","-...","-.-.","-..",".","..-.",
"--.","....","..",".---","-.-",".-..",
"--","-.","---",".--.","--.-",".-.",
"...","-","..-","...-",".--","-..-",
"-.--","--..","-----",".----","..---","...--",
"....-",".....","-....","--...","---..","----."
};
  for(int i=0;i<36;i++){
            if(i==index){
                return morse[i];
            }
     }
return "error";
/*

A .-	B -...	C -.-.	D -..	E .	F ..-.
G --.	H ....	I ..	J .---	K -.-	L .-..
M --	N -.	O ---	P .--.	Q --.-	R .-.
S ...	T -	U ..-	V ...-	W .--	X -..-
Y -.--	Z --..	0 -----	1 .----	2 ..---	3 ...--
4 ....-	5 .....	6 -....	7 --...	8 ---..	9 ----.*/
}

int getCharIndex(char letter){
    string alphabet ="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     for(int i=0;i<alphabet.length();i++){
            if(letter==alphabet[i]){
                return i;
            }
     }
    return -1;
}


int getMorseIndex(string morseInput){                          //decoding
string Morse [36] = {".-","-...","-.-.","-..",".","..-.",
"--.","....","..",".---","-.-",".-..",
"--","-.","---",".--.","--.-",".-.",
"...","-","..-","...-",".--","-..-",
"-.--","--..","-----",".----","..---","...--",
"....-",".....","-....","--...","---..","----."
};
  for(int i=0;i<36;i++){
            if(Morse[i]==morseInput){

                return i;
            }
     }

return -1;
}

char getChar(int index){
    string alphabet ="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     for(int i=0;i<alphabet.length();i++){
            if(i==index){
                return alphabet[i];
            }
     }
    return 'e';
}
int main()
{
    while(true){
    string message;
    int choice;
    cout <<" Welcome to the program :) " <<endl;
    cout <<" Enter 1 to convert from text to morse " << endl << " Enter 2 to convert from morse to text "<< endl;
    cout <<" Enter 3 to end the program" <<endl;
    cin>> choice;
    cin.ignore();
    if (choice==3){
        return 0;
    }
    cout <<"Enter The Message"<< endl;
    getline(cin,message);
    for(int i=0;i<message.length();i++)
	{
	    message[i] = toupper(message[i]);
	}
    if(choice==1){
       for(int i=0;i<message.length();i++){
            if(message[i]!= ' '){
                cout <<getMorse(getCharIndex(message[i]))<<" ";
            }
            else{
                cout <<"   ";
            }
       }
    }
    else if(choice==2){
        string morseLetter="";
        string normalText="";
        for(int i=0;i<message.length();i++){
            if(message[i]!= ' '){
                morseLetter+=message[i];
            }
            else if(message[i]== ' ' && message[i+1]== ' '&& message[i+2]== ' '){
                normalText+=getChar(getMorseIndex(morseLetter));
                morseLetter="";
                normalText+=' ';
                i+=2;
            }
            else if(message[i]== ' '){
                normalText+=getChar(getMorseIndex(morseLetter));
                morseLetter="";
            }
            if(i==message.length()-1){                     //the last letter
                normalText+=getChar(getMorseIndex(morseLetter));
                morseLetter="";
            }
       }
       cout << normalText <<endl;
    }

cout << endl;

}
}


