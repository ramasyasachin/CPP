#include <iostream>
using namespace std;

/*We are given an array containing some even and odd integers, here we have to sort the even integers and odd integers without considering the order of even/odd elements*/

int main(){
    int arr[] = {1,5,4,6,7,5,10,1,5,12,14};

    int pointerOne, pointerTwo, totalEle;      
    pointerOne = 0;
    
    totalEle = sizeof(arr)/sizeof(arr[0]);
    pointerTwo = totalEle - 1;

    while (pointerOne < pointerTwo)
    {
        if(arr[pointerOne]%2 !=0  && arr[pointerTwo]%2 == 0){
            int temp;
            temp = arr[pointerOne];
            arr[pointerOne] = arr[pointerTwo];
            arr[pointerTwo] = temp;
            pointerOne++;
            pointerTwo--;
        } 

        if(arr[pointerOne]%2 == 0){
            pointerOne++;
        }

        if (arr[pointerTwo]%2 != 0){
            pointerTwo--;
        }

            
    }


    for(int i = 0; i < totalEle; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

