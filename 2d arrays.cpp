#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int mat[2][3]{
        {1,2,3},
        {4,5,6}
    };
    cout<<"Elements of 2D array : \n"<<endl;
    for(int i=0; i<2; ++i){
            cout<<setw(10);
        for(int j=0; j<3; ++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
