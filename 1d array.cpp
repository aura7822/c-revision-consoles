#include<iostream>
#include<iomanip>>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<"Elements of array : \n"<<endl;
    for(int i=0; i<7; ++i){
        cout<<setw(10);
        cout<<"Index "<<i <<":"<<arr[i]<<" "<<endl;
    }
    return 0;
}
