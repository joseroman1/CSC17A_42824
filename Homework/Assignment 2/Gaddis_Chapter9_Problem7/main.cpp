/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 15, 2016, 9:45 PM
 * Purpose: Check 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void arrSort(int *[], int);
void showAry(const int [], int);
void aryPtr(int *[], int);
int *filAry(int);

//Execution Begins Here!
int main(){
    //Ask for an input
    int size=0;
    cout<<"How many donations?"<<endl;
    cin>>size;
    
    //Array with the donation amounts.
    int *donations=filAry(size); 
    // An array of pointers to int.
    int *arrPtr[size];
    
    for (int cnt = 0;cnt < size;cnt++)
       arrPtr[cnt] = &donations[cnt];
    // Sort the elements of the array of pointers.
    arrSort(arrPtr, size);
    
    //Input the donations in order
    cout << "The donations, sorted in descending order, are: \n";
    aryPtr(arrPtr, size);
    // Display the donations in their original order.
    cout << "The donations, in their original order, are: \n";
    showAry(donations, size);
    //de-allocate memory
    delete []donations;
    //exit stage right
    return 0;
 }
//selection sort
void arrSort(int *arr[], int size){
 int stScan, mnIndex;
 int *mnElem;

 for (stScan = 0; stScan < (size - 1); stScan++){
    mnIndex = stScan;
    mnElem = arr[stScan];
    for(int index = stScan + 1; index < size; index++){
        if (*(arr[index]) > *mnElem){
            mnElem = arr[index];
            mnIndex = index;
        }
    }
    arr[mnIndex] = arr[stScan];
    arr[stScan] = mnElem;
    }
 }
//show array
void showAry(const int arr[], int size){
 for (int cnt = 0;cnt < size;cnt++)
 cout << arr[cnt] << " ";
 cout << endl;
 }
//show array pointer
void aryPtr(int *arr[], int size){
 for (int cnt = 0;cnt < size;cnt++)
     cout << *(arr[cnt]) << " ";
 cout << endl;
}

//Put donations in the array
int *filAry(int n){
    int *a=new int[n];
    //fill the array
    for(int i=0;i<n;i++){
        cout<<"Donation #"<<(i+1)<<"?"<<endl;
        cin>>a[i];
    }
    return a;
}