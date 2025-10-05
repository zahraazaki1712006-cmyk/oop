#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include<Person.h>
using namespace std;
class Teacher:public Person
{  private:
    int teacherID;
    string subjectSpecialization;
    float salary;
    public:
        Teacher() {}
Teacher(string name, string gender, int age,string address,string phoneNumber,string email,int teacherID,string subjectSpecialization,float salary)
:Person(name,gender,age,address,phoneNumber,email) {

        this->teacherID=teacherID;
        this->subjectSpecialization=subjectSpecialization;
        this->salary=salary;

        }
  ~Teacher() {}
 void set_teacherID(int teacherID) {
        this->teacherID = teacherID;
    }
 void set_subjectSpecialization(string subjectSpecialization) {
        this->subjectSpecialization = subjectSpecialization;
    }
 void set_salary(float salary) {
        this->salary = salary;
    }

  int get_teacherID(){
  return teacherID;}
    string get_subjectSpecialization(){
    return subjectSpecialization;}
    float get_salary(){
    return salary;}

 void print(){
     Person::print();
   cout << "teacherID: " << teacherID << endl;
        cout << "subjectSpecialization: " << subjectSpecialization << endl;
        cout << "salary: " << salary << endl;}
    };

#endif // TEACHER_H
