#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include<Person.h>
using namespace std;


class Staff:public Person
{
private:
  int staffID;
  string role;
  float salary;
 public:
Staff() {}
Staff(string name, string gender, int age,string address,string phoneNumber,string email,int staffID,string role, float salary)
:Person(name,gender,age,address,phoneNumber,email) {
        this->staffID=staffID;
        this->role=role;
        this-> salary=salary;

         }
   ~Staff() {}
   void set_staffID(int staffID) {
        this->staffID = staffID;
    }
 void set_role(string role) {
        this->role = role;
    }
     void set_salary(float salary) {
        this->salary = salary;
    }
   int get_staffID(){
   return staffID;}
  string get_role(){
  return role;}
  float get_salary(){
  return salary;}
  void print(){
  Person::print();
  cout <<" staffID: " << staffID << endl;
  cout << "role: " << role << endl;
 cout << "salary: " << salary << endl;}
};

#endif // STAFF_H
