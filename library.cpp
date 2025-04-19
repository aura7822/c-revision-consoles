#include<iostream>
using namespace std;

int duedate, returndate, overdue, rate;
string id;

int main(){
    cout<<"Book ID : ";
    cin>> id;
    cout<<"dueDate : ";
    cin >>duedate;
    cout<<"returnDate : ";
    cin >>returndate;
cout<<"\n";
    if((duedate<=0 || duedate>=32)||(returndate<=0 || returndate>=32)){
        cout<<"Invalid date! Please enter a valid date"<<endl;
        return 1;
    }
    overdue = returndate-duedate;

    if(overdue<=0){
        cout<<"You have no charges\n";
    }else if(overdue <=7){
        rate = 0.2 * overdue;
        cout<<"Days overdue : "<<overdue<<" Days"<<endl;
        cout<<"Your rate is : "<<rate<<"%"<<endl;
        cout<<"Your Fine amount is Ksh. 20"<<endl;
    }else if(overdue>=8 && overdue <=14){
         rate = 0.5 * overdue;
         cout<<"Days overdue : "<<overdue<<" Days"<<endl;
         cout<<"Your rate is : "<<rate<<" %"<<endl;
        cout<<"Your Fine amount is Ksh. 50"<<endl;
    }else if(overdue>=15){
         rate = 1 * overdue;
         cout<<"Days overdue : "<<overdue<<" Days"<<endl;
         cout<<"Your rate is : "<<rate<<"%"<<endl;
        cout<<"Your Fine amount is Ksh. 100"<<endl;
    }
    return 0;
}
