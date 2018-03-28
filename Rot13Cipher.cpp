#include <iostream>

using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Rot13 Cipher.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

char encode(char alphapet){
string alph="abcdefghijklmnopqrstuvwxyz";
char decodeChar;
int counter=0;
for(int i=0;i<alph.length();i++){
    if(alph[i]==alphapet){
        for(int j=i+1;j<i+14;j++){
            counter++;
            if(j>alph.length()-1){
                j=0;
            }
            if(counter==13){
                decodeChar=alph[j];
                break;
                }
        }
        break;
    }
}
return decodeChar;
}

int Decode(char alphapet){
string alph="abcdefghijklmnopqrstuvwxyz";
for(int i=0;i<alph.length();i++){
    if(alph[i]==alphapet){
        return i;
    }
}
return -1;
}

int main()
{
    string alph="abcdefghijklmnopqrstuvwxyz";
    string decodeAlph="";
    for(int i=0;i<alph.length();i++){
       decodeAlph+=encode(alph[i]);
    }
    cout<<"Press 1 if you want to encode or 2 to decode"<<endl;
    int choice;
    cin>>choice;
    if(choice==1){
        cout<<"Enter sentence you want to encode"<<endl;
        string sentence,encode_sentence;
          cin.ignore();
        getline(cin,sentence);
       for(int i=0;i<sentence.length();i++){
            sentence[i] = tolower(sentence[i]);
        }
        for(int i=0;i<sentence.length();i++){
                if(isalpha(sentence[i]))
                    encode_sentence+=encode(sentence[i]);
                else
                    encode_sentence+=sentence[i];
        }
        cout<<"The encode Sentence Will be "<<endl;
        cout<<encode_sentence<<endl;
    }
    else if(choice==2){
        cout<<"Enter sentence you want to decode"<<endl;
        string sentence,decode_sentence;
        cin.ignore();
        getline(cin,sentence);
        for(int i=0;i<sentence.length();i++){
            sentence[i] = tolower(sentence[i]);
        }
        for(int i=0;i<sentence.length();i++){
          if(isalpha(sentence[i])){
           int letter_position= Decode(sentence[i]);
            if(letter_position<=13)
                decode_sentence+=decodeAlph[letter_position];
            else{
                decode_sentence+=decodeAlph[letter_position];
            }
        }
        else
            decode_sentence+=sentence[i];
        }
        cout<<decode_sentence<<endl;
    }
    return 0;
}
