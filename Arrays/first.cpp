#include <iostream>
#include<vector>
using namespace std;

/*We have to take an array as an input from the user and then we will chech if there is a point in the array at which the prefix sum and the suffix sum is equal or we can say prefix sum is equal to the half of total sum of all the elements in the array. If we find such a point then we can say that the array can be divided into two sub arrays from that point and the resulting two sub arrays will have equal values of sum of all elements inside them*/


int main(){
    int size;
    cout<<"enter the size of array ";
    cin>>size;

    vector <int> vec(size);
    size = vec.size();
    int preFixSum = 0, TotalSum = 0;

    //taking inputs
    for(int k = 0; k < size; k++){
        cin>>vec[k];
    }


    //finding total sum
    for(int i = 0; i < size; i++){
        TotalSum = TotalSum + vec[i];
    }

    cout<<"The total sum is "<<TotalSum<<endl;

    //finding the point at which prefix sum = half of total sum

    for(int s = 0; s < size; s++){
        preFixSum = preFixSum + vec[s];
        if(preFixSum == TotalSum/2){
            cout<<"The array can be divided into two parts having equal sum of prefix and suffix "<<endl;
            cout<<"The first part will be till "<<s<<" index and second part will be from "<<s+1<<" index to the last index that is "<<size-1<<endl;
            break;
        }

        if(s == size-1 && preFixSum != TotalSum/2){
            cout<<"this array can not be divided in two eqqal parts"<<endl;
        }
    }
    

    return 0;
}


//Input {6, 2, 4, 3, 1}
/*output is 

    The array can be divided into two parts having equal sum of prefix and suffix 
    The first part will be till 1 index and second part will be from 2 index to the last index that is 4

*/