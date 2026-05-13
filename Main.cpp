
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long keyNumber=7965005422;
    int phoneNumbers[3];
    int i= 0;

    //filling number
    do{
        cout << "Enter number:";
        cin >>phoneNumbers[i];
       i++;
    } while(1 < 3);

    //linear search
    //linear number
    for(int i=0; i < 3;i++){
        if (phoneNumbers[i] == keyNumber){
                cout<<"Lino number's found"<<endl;
                break;
            } 

  
    }
