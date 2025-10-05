#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include<Person.h>
#include<Staff.h>
#include<Student.h>
#include<Teacher.h>
#include<Exam.h>
#include<ClassRoom.h>
#include<Course.h>

class School
{ private:
     int studentCounter;
    Student students[100];
     int teacherCounter;
    Teacher teachers[100];
     int staffCounter;
    Staff staffs[100];
    string schoolName;
    string address;
    string principalName;
     int courseCounter;
    Course courses[100];
     int classroomCounter;
    ClassRoom classrooms[100];
    public:
void addStudent(Student student)
    {
        if(studentCounter==100)
        {
            cout<<"The Student In School IS Full"<<endl;
        }
        else
        {
            students[studentCounter]=student;
            studentCounter++;
        }
    }
    void printStudents()
    {
        for(int i=0;i<studentCounter;i++)
        {
            students[i].print();
            cout<<endl;
        }

    }
  void addTeacher(Teacher teacher) {
        if(teacherCounter==100)
        {
            cout<<"The teacher In School IS Full"<<endl;
        }
        else
        {
            teachers[teacherCounter]=teacher;
            teacherCounter++;
        }
    }
    void printTeachers(){
        for(int i=0;i<  teacherCounter;i++)
        {

            teachers[i].print();
            cout<<endl;
        }
    }

void addStaff(Staff staff){
        if(staffCounter==100)
        {
            cout<<"The stuff In School IS Full"<<endl;
        }
        else
        {
            staffs[staffCounter]=staff;
            staffCounter++;
        }
    }
    void PrintStuffs()
    {
        for(int i=0;i<staffCounter;i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }

void addCourse(Course course)
    {
        if(courseCounter==100)
        {
            cout<<"The course In School IS Full"<<endl;
        }
        else
        {
            courses[courseCounter]=course;
            courseCounter++;
        }
    }
    void printCourses()
    {
        for(int i=0;i<courseCounter;i++)
        {
            courses[i].print();
            cout<<endl;
        }}
 void addClassrooms(ClassRoom classroom)
    {
        if(classroomCounter==100)
        {
            cout<<"The classroom In School IS Full"<<endl;
        }
        else
        {
            classrooms[classroomCounter]=classroom;
            classroomCounter++;
        }
    }
    void printClassrooms()
    {
        for(int i=0;i<classroomCounter;i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
    }


    void setSchoolName(string schoolName)
    {
        this->schoolName=schoolName;
    }
    void setaddress(string address)
    {
        this->address=address;
    }
      void setprincipalName(string principalName)
    {
        this->principalName=principalName;
    }
    string getSchoolName()
    {
        return schoolName;
    }
     string getaddress()
    {
        return address;
    }
     string getprincipalName()
    {
        return principalName;
    }
     void print(){

   cout <<"schoolName: " << schoolName << endl;
        cout <<"address: " << address << endl;
        cout << "principalName: " << principalName << endl;}

    School()
    {
        studentCounter=0;
        classroomCounter=0;
        teacherCounter=0;
        staffCounter=0;
        courseCounter=0;
    }
    School(string schoolName,string address,string principalName)
    {
        studentCounter=0;
        classroomCounter=0;
        teacherCounter=0;
        staffCounter=0;
        courseCounter=0;
        this->schoolName=schoolName;
        this->address=address;
        this->principalName=principalName;
    }
    virtual ~School() {}

};

#endif // SCHOOL_H
