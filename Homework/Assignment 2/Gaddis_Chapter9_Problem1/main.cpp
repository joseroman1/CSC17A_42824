/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 13, 2016, 10:52 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int *gNumber();//Get Number

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int *numbers = NULL;
   
    numbers=gNumber();//Function Call
    
    //Free the memory
    delete [] numbers;
    numbers=0;
    //Exit Stage Right
    return 0;
}

int *gNumber(){
   
    int *array = NULL; //Array to hold the numbers
    int size;
    
    cout<<"Input the size of the array: ";
    cin>>size;
    cout<<endl;
    cout<<"Your array will be filled with ";
    cout<<size;
    cout<<" Integers.";
    cout<<endl<<endl;
    
    if(size<=0){
        return NULL;
    }
    
    array=new int[size]; 
    
    //Fill Array with integers entered by user
    for(int count=0; count<size; count++){
        cout<<"Input an integer number: ";
        cin>>array[count];
    }
     
        cout<<endl;
        cout<<"Your array is filled with the following integers: ";
        cout<<endl;
        for(int count=0; count<size; count++){
            cout<<array[count];
            cout<<endl;
        }
        
    return array;
    
}