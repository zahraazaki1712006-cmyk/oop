#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course
{

private:
   string courseCode;
   string courseName;
   string teacherName;
    public:
       Course() {}
       Course(string courseCode,string courseName,string teacherName) {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;}
       ~Course() {}
   void set_courseName(string courseName){
   this->courseName=courseName;}
    void set_courseCode(string courseCode){
   this->courseCode=courseCode;}
    void set_teacherName(string teacherName){
   this->teacherName=teacherName;}
    string get_courseCode(){
    return courseCode;}
   string get_courseName(){
   return courseName;}
   string get_teacherName(){
   return teacherName;}
   void print(){
    cout<<"the course Code is:"<<courseCode<<endl;
    cout<<"the course Name is:"<<courseName<<endl;
    cout<<"the teacher Name is:"<<teacherName<<endl;
   }

};

#endif // COURSE_H
