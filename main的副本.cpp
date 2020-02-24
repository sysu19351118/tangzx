
#include <iostream>
#include <string>
using namespace std;
class student{
private:
    int number;
    char name[20];
    int age;
public:
    student(int newnum,char newname[20],int newage);
    void setinformation(int newnum,char newname[20],int newage);
    void getnum();
    void getname();
    void getage();
    void printinformation();
};
student::student(int newnum,char newname[20],int newage){
    number=newnum;strncpy(name,newname,20);age=newage;}

void student::setinformation(int newnum,char newname[20],int newage)
{while (newage<=0)
    {std::cout<<"Error,please input again "<<std::endl;
        std::cin>>newage;}
    number=newnum;strncpy(name,newname,20);age=newage;}

void student::getnum()
{std::cout<<"The student's number is "<<number<<std::endl;}

void student::getname()
{std::cout<<"The student's name is "<<name<<std::endl;}

void student::getage()
{std::cout<<"The student's age is "<<age<<std::endl;}

void student::printinformation()
{std::cout<<"The student's name:"<<name<<" number:"<<number<<" age:"<<age<<std::endl;
}
int main()
{student s1(9991,"Zhang San",19);
    student s2(9972,"Li Si",18);

    s1.printinformation();
    s2.printinformation();
    return 0;

}
