#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3]={{4,5,8},{0,0,8},{1,2,0}};
    //add two matrix and store one matrix which is given
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                arr[i][j]+=brr[i][j];
        }
    }
    //print final array after addition
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}