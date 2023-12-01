#include <iostream>
#include<vector>
using namespace std;

/*We are given a sorted array in which all elements are in increasing order and we have to make an array containing the squares of all the elements of the given array, then we have to sort the new array as well */

void sortedSquaredArray(vector <int> &vec){
    int pointerOne, pointerTwo, totalEle;      
    pointerOne = 0;
    totalEle = vec.size();
    pointerTwo = totalEle-1;

    //declaring a new vector to save the answer

    vector <int> sortedVec;

//-12, -9, -4, 0, 2, 5, 7, 8, 10, 11


    while(vec[pointerOne]<vec[pointerTwo]){

        // abs is a function that gives the absolute value of the passed value

        if(abs(vec[pointerOne]) > abs(vec[pointerTwo])){
            sortedVec.push_back(vec[pointerOne]*vec[pointerOne]);
            pointerOne++;
        } else {
            sortedVec.push_back(vec[pointerTwo]*vec[pointerTwo]);
            pointerTwo--;
        }
    }

    //int sizeofnew = sortedVec.size();
    for(int i = 0; i < totalEle; i++){
        cout<<sortedVec[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector <int> vec = {-12, -9, -4, 0, 2, 5, 7, 8, 10, 11, 25};

    sortedSquaredArray(vec);

    return 0;
}

