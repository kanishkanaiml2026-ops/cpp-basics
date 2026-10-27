#include <iostream>
using namespace std;
class Student
{
private:
int rollNo;
string name;
public:
// Constructor
Student(int r, string n)
{
rollNo = r;
name = n;
cout <<"Student object created" << endl;
}
//member function
void display()
{
cout <<"roll number:"<<rollNo<<endl;
cout <<"name:"<<name<<endl;
}
// Destructor
~Student()
{
cout <<"student object destroyed"<<endl;
}
};
int main()
{
Student s1(101, "arun");
s1.display();
return 0;
}