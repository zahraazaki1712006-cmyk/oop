#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<Person.h>
using namespace std;
class Student:public Person
{
private:
    int studentID;
    string gradeLevel;
     float GPA;
    public:
        Student() {}
         Student(string name, string gender, int age,string address,string phoneNumber,string email,int studentID,string gradeLevel, float GPA):Person(name,gender,age,address,phoneNumber,email) {
         this->studentID=studentID;
         this->gradeLevel=gradeLevel;
         this->GPA=GPA;}
            ~Student() {}
          void set_studentID(int studentID) {
        this->studentID= studentID;}
         void set_gradeLevel(string gradeLevel) {
        this->gradeLevel = gradeLevel;}
         void set_GPA(float GPA) {
        this->GPA = GPA;
    }
      int get_studentID(){
      return studentID;}
    string get_gradeLevel(){
    return gradeLevel;}
     float get_GPA(){
     return GPA;}
     void print(){
       Person::print();
       cout<<"studentID:"<<studentID<<endl;
       cout<<"gradeLevel:"<<gradeLevel<<endl;
       cout<<"GPA:"<<endl;
       }};

#endif // STUDENT_H
