#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,1,1,1,0,0,1,0,1,0,1,1};

    int countZero, countOne, totalEle;      
    countZero = 0;
    countOne = 0;
    totalEle = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < totalEle; i++){
        if(arr[i]==0){
            countZero++;
        } else {
            countOne++;
        }
    }

    cout<<"Total Ones are "<<countOne<<endl;
    cout<<"Total Zeros are "<<countZero<<endl;

    for(int k = 0; k < countZero; k++){
        arr[k] = 0;
    }
    for(int s = countZero; s < totalEle; s++){
        arr[s] = 1;
    }

    for(int x = 0; x < totalEle; x++){
        cout<<arr[x]<<" ";
    }

    return 0;
}

