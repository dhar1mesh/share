#include<bits/stdc++.h>
using namespace std;
int _user(){
    cout<<"Enter the mob_no of user\n";
    int user;
    cin>>user;
    if(cout<<"user exist in database"){
        return user;
    }
    return -1;
}
void common_group(){
    cout<<"write sql query to show all group in which user and particular person exist\n";
}
void add_money(){
    cout<<"enter the amount you want to add in particular group\n";

}
void show_money(){
    cout<<"write sql query to show remain amount in particular group\n";

}
void active_group(){
    cout<<"write sql query to show all group in which user is exist active and group is active\n";
    add_money();
    show_money();
}
void deactive_group(){
    cout<<"write sql query to show all group in which user is exist deactive and group is active\n";
}
void show_contact(){
    cout<<"write sql query to show all contact of user who are using this application\n";
    common_group();
}
void show_group(){
    cout<<"write sql query to show all group in which user is exist active and deactive both\n";
    active_group();
    deactive_group();
}
void total_amount(){
    cout<<"write sql query to total remain amount\n";

}
void amount_group_by_group(){
    cout<<"write sql query to show all amount remain in every active group\n";
    add_money();
}
void select(){
    cout<<"(1) show contact";
    cout<<"(2) show group\n";
    cout<<"(3) total amount\n";
    cout<<"(4) amount group by group\n";
    cout<<"(5) create a new group\n";
    // cout<<"(1) show contact";
    // cout<<"(1) show contact";
    int choice;
    cout<<"select choice\n";
    switch(choice){
        case 1:
        show_contact();
        break;
    }
}
int main(){
    int user;
    while(user=_user()&&user==-1);
    select();
}