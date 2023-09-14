#include <iostream>
using namespace  std;


class student{
    string name;
    string address;
    string roll_no;
public:
    void in_val(){
        cout<<"Enter the student name: ";
        cin>>name;
        cout<<"Address: ";
        cin>>address;
        cout<<"Roll Number: ";
        cin>>roll_no;

    }

    void dis_val(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
    }

};



int main(){
    student Roll1;
    Roll1.in_val();
    Roll1.dis_val();


    return 0;
}
