#include<iostream>
using namespace std;
int main(){
    int arr[5][5]={
        {1,2,3,4,5},
        {3,4,5,6,7},
        {7,6,5,4,3},
        {8,7,6,5,4},
        {1,2,37,8,0}
    };
    int n=5/2+1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
                if(i==2 || j==2){
                    cout<<arr[i][j]<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
        }
        cout<<endl;
    }
}