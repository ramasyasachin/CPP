#include <iostream>
#include <vector>
using namespace std;



int factorial(int n){

    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact*i;
    }

    return fact;
}


vector <vector<int>> pascalTriangle(int n){
    vector <vector<int>> pasvec(n);


    for(int i = 0; i < n; i++){
        pasvec[i].resize(i+1);

        for(int k = 0; k < i+1; k++){
            if(k == 0 || k == i){
                pasvec[i][k] = 1;
            } else {
                pasvec[i][k] = (pasvec[i-1][k-1]) + (pasvec[i-1][k]);
            }      
        }
    }

    return pasvec;
}


int main() {
    int n, simsize;
    cin>>n;

    vector <vector<int>> vec;

    vec = pascalTriangle(n);

    for(int i = 0; i < n; i++){
        simsize = vec[i].size();
        for(int k = 0; k < simsize; k++){
            cout<<vec[i][k]<<" ";
        }
        cout<<endl;
    }
    
    cout<<factorial(6);
    return 0;
}
