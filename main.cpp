#include<bits/stdc++.h>

using namespace std;
int no_of_p; 
class Person{
    public:
        string name;
        string mob_no;
        int credit;
        vector<int> to_give;
        vector<int> to_take;
        virtual void details()=0;
        virtual bool is_leader()=0;
        virtual void setTotalAmnt(int amnt)=0;
        Person(string name_, string mob_no_, int credit_ = 0){
            to_give.resize(no_of_p,0);
            to_take.resize(no_of_p,0);
            name = name_;
            mob_no = mob_no_;
            credit = credit_;
        }
};
class member: public Person{
    public:
    member(string name_, string mob_no_, int credit_ = 0):Person(name_, mob_no_, credit_ = 0){}
    void details(){
        cout << name << " " << mob_no << " " << credit << "\n";
    }
    bool is_leader(){
        return 0;
    }
    void setTotalAmnt(int val){}
    
};

class leader: public Person{
    private:
    int totalamnt;
    public:
    bool is_leader(){
        return 1;
    }
    leader(string name_, string mob_no_, int credit_ = 0): Person(name_, mob_no_, credit_){}
    void details(){
        cout << name << " " << mob_no << " " << credit << " Leader\n";
    }
    void setTotalAmnt(int amnt=0){
        totalamnt =  amnt;
    }
};
class Trip{
    public:
    int expectedAmount;
    Trip(int expamnt){
        expectedAmount = expamnt;
    }

};

int main(){
    cout << "Enter the number of people: ";
    cin >> no_of_p;
    vector<Person *> members;
    int expamnt;
    cin >> expamnt; 
    Trip trip(expamnt);
    int totalamnt = 0;
    for(int i=0; i<no_of_p; i++){
        // taking member details
        cout << "Enter your Name: ";
        string name; cin >> name;
        cout << "Enter your Mobile Number: ";
        string mob_no; cin >> mob_no;
        cout << "Enter the amount you want to spend, The expected amount is: " << trip.expectedAmount<< " ";
        int c; cin >> c; 
        cout << "The amount left for you personally is: " << c - trip.expectedAmount << endl;
        if(c <= trip.expectedAmount){
            totalamnt += c;
        }
        else totalamnt += trip.expectedAmount;
        cout << "Do you want to lead?(0/1): ";
        bool isl; cin >> isl;
        if(isl){
            leader * p = new leader(name, mob_no, c); 
            members.push_back(p); 
            
        }
        else{
            Person * p = new member(name, mob_no, c);
            members.push_back(p);
        }
    }
    for(int i=0; i<members.size(); i++){
        if(members[i]->is_leader()){
            members[i]->setTotalAmnt(totalamnt);
        }
        members[i]->details();
    }
    



}