#include<string>
#include<iostream>
using namespace std;

//             // ENCAPSULATION
// class teacher{
//     public:
//     // PROPERTIES OR ATTRIBUTE

//     // teacher(){                      // this is a non-peremeterize constrator
//     //     dept="CSE";
//     // }

//     // peremeterize constrator

//     teacher(string name, string dept,int sealry){
//         this-> name=name;
//         this-> dept=dept;
//        this-> sealry=sealry;
//     }

//     teacher(teacher &org){
//         cout << "i am a copy constrator"<<endl;
//         this-> name=org.name;
//         this-> dept=org.dept;
//        this-> sealry=org.sealry;
//     }

//     string name;
//     string dept;
//     double sealry;


//     //// METHOD OR MEMBER FUNCTION

//     //  // peremeterize constrator

//     // void getinfo(){
//     //     cout<<"name-"<< name<<endl;
//     //     cout<<"dept-"<< dept<<endl;
//     // }

//     // void changeDpt(string newdpt){
//     //     dept = newdpt;
//     // }
// };
// int main(){

//     //// peremeterize consrator

//     teacher t1("subho","CSE",25000);
//     // t1.getinfo();

//     // cpoy constrator
//     teacher t2(t1);
//     t2.getinfo();

//     //// non-peremeterize constrator

//     // t1.name="suvankar";
//     // t1.sealry = 1000;
//     // cout<<t1.sealry;
//     // cout<<t1.dept;
// }
// class student{
//     public:
//     string name;
//     double* cgpaptr;
//     student(string name, int cgpa){
//         this->name=name;
//         cgpaptr=new double;
//         *cgpaptr=cgpa;

//     }

//     student(student &org){
//         this->name=org.name;
//         cgpaptr=org.cgpaptr;
//     }
//     void getInfo(){
//         cout<<"name:"<<name<<endl;
//         cout<<"cgpa:"<<*cgpaptr<<endl;
//     }
// };

// int main(){
//     student s1("subho",9);
//     s1.getInfo();
//     student s2(s1);
//     s2.name="subho1";
//     *(s2.cgpaptr)=9.2;
//     s2.getInfo();
// }

class person{
    public:
    string name;
    int age;
    // person(string name, int age){
    //     this->name=name;
    //     this->age=age;
    // }
};
class student : public person{
    public:
    int rollno;
    void getinfo(){
        cout<<"name :"<< name<<endl;
        cout<<"age :"<< age<<endl;
        cout<<"rollno :"<< rollno;

    }
};

int main(){
    student s1;
    s1.name="subho";
    s1.age=18;
    s1.rollno=1;
    s1.getinfo();
}

