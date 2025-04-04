#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int mat[2][3][4]={
        {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        },
        {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120}
        }
    };

    cout<<"Elements of 3D array : "<<endl;
    for(int i=0; i<2; i++){
            cout<<setw(10)<<endl;
        for(int j=0; j<3; j++){
            cout<<setw(10)<<endl;
            for(int k=0; k<4; k++){
                cout<<mat[i][j][k]<<" ";
            }
            cout<<"\n"<<endl;
        }
        cout<<"\n \n"<<endl;
    }
    return 0;
}
