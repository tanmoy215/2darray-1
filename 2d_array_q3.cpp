#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-4,-7,0}};
    int sum=0;
    for(int i=1;i<4;i++){
        for(int j=2;j<4;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of the rectangle is : "<<sum;
}