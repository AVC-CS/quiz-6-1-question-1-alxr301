#include <iomanip>
#include <iostream>
using namespace std; 

void getTwoValues(int &begin, int &end){
    do{
        cout << "Input Two Values: ";
        cin >> begin >> end;

    }while(begin >= end); 

}

int getNextPrime(int begin){
    int i, isprime; 
    for(i = begin; i++;){
        isprime = 1; 
        for(int j = 2; j <= (i/2); j++){
            if(i%j == 0){
                isprime = 0; 
                break;
            }
        }
        if(isprime == 1){
            break; 
            
        }
    }
    return i; 
}

int getPrevPrime(int end){
    int i, isprime;
    for(i = end; i--;){
        isprime = 1;
        for(int j = 2; j <= (i/2); j++){
            if(i%j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            break;
        }
    }
    return i; 
}