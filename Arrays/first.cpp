#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,1,1,1,0,0,1,0,1,0,1,1};

    int pointerOne, pointerTwo, totalEle;      
    pointerOne = 0;
    
    totalEle = sizeof(arr)/sizeof(arr[0]);
    pointerTwo = totalEle - 1;

    while (pointerOne < pointerTwo)
    {
        if(arr[pointerOne] == 1 && arr[pointerTwo] == 0){
            arr[pointerOne] = 0;
            arr[pointerTwo] = 1;
            pointerOne++;
            pointerTwo--;
        } 

        if(arr[pointerOne] == 0){
            pointerOne++;
        }

        if (arr[pointerTwo] == 1){
            pointerTwo--;
        }

            
    }


    for(int i = 0; i < totalEle; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

