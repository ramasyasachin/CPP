#include <iostream>
#include<vector>
using namespace std;

/*Here we have been given an array or we can take an array as an input from the user and we have to perform prefix sum on the array without creating a new array*/


int main(){
    int size;
    cout<<"enter the size of array ";
    cin>>size;

    vector <int> vec(size);
    size = vec.size();

    //getting input from the user

    for(int i = 0; i < size; i++){
        cin>>vec[i];
    }
    cout<<endl;

    //Printing the array elements

    for(int k = 0; k < size; k++){
        cout<<vec[k]<<" ";
    }
    cout<<endl;

    //Performing prefix sum on the array

    for(int s = 1; s < size; s++){
        vec[s] = (vec[s] + vec[s-1]);
    }


    //printing the final output

    for(int k = 0; k < size; k++){
        cout<<vec[k]<<" ";
    }


    

    return 0;
}


//Input {4, 5, 6, 8, 5}
//Output {4, 9, 15, 23, 28}