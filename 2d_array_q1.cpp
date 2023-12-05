#include<iostream>
using namespace std;
int main(){
    int col=5;
    int row=5;
    int arr[5][5];
    //store 10 in every index
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=10;
        }
    }
    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}