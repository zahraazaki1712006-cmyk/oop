#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;
class Exam
{private:
    string examName;
    string courseCode;
    string examDate;
    public:
        Exam() {}
        Exam(string examName,string courseCode,string examDate) {
         this->examName=examName;
         this->courseCode=courseCode;
         this->examDate=examDate;
         }
        ~Exam() {}
          void set_examName(string examName){
   this->examName=examName;}
          void set_courseCode(string courseCode){
   this->courseCode=courseCode;}
     void set_examDate(string examDate){
   this->examDate=examDate;}
    string get_examName(){
    return examName;}
 string get_courseCode(){
    return courseCode;}
    string get_examDate(){
    return examDate;}
   void print(){
    cout<<"the exam name is:"<<examName<<endl;
    cout<<"the course code is:"<<courseCode<<endl;
    cout<<"the exam date is:"<<examDate<<endl;
   }
};

#endif // EXAM_H
