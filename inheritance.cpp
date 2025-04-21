#include<iostream>
using namespace std;

class User{
protected:
    string username, password;
public:
    void setUser(string u, string p){
        username = u;
        password = p;
    }

    virtual void access(){
        cout<<"Username : "<<username<<endl;
    }
};
class Admin : public User{
public:
    void access()override{
        cout<<"Admin access : Level 3 - Monitor, Modify Systems. User : "<< username<<endl;
    }
};
class Guest : public User{
public:
    void access()override{
        cout<<"Guest access : Level 1 - view only.User : "<<username<<endl;
    }
};
class SuperAdmin : public User{
public:
    void access()override{
        cout<<"SuperAdmin Access : Level 5 - Full Root Control Granted.User : "<<username<<endl;
    }
};

int main(){
    User* user1;

    Admin admin1;
    Guest guest1;
    SuperAdmin sadmin1;

    cout<<"\n";
    cout<<"       === Welcome to DarkNet OS===\n"<<endl;

    admin1.setUser("ADMIN X", "admin123");
    user1 = &admin1;
    user1->access();
    guest1.setUser("GUEST Y", "guest123");
    user1 = &guest1;
    user1->access();
    sadmin1.setUser("ROOT Z", "root123");
    user1 = &sadmin1;
    user1->access();

    return 0;
}
