#include <bits/stdc++.h>
using namespace std;
//Insertion sort using the code from Introduction to algorithms
//Hola
int main(){
    int array[6] = {5,2,4,6,1,3};
    int j, key = 0;

    for (int i = 0; i < 6; ++i) {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    for (int i = 1; i < sizeof(array)/sizeof(array[0]); ++i) {
        j = i-1;
        key = array[i];
        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = key;
    }

    for (int i = 0; i < 6; ++i) {
        cout<<array[i]<<" ";
    }


}