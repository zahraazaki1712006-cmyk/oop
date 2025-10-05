#include <iostream>
#include<Person.h>
#include<School.h>
#include<Staff.h>
#include<Student.h>
#include<Teacher.h>
#include<Exam.h>
#include<ClassRoom.h>
#include<Course.h>
using namespace std;

int main()
{
    Teacher t("ali","male",35,"eygpt","012547797978978","ali@gimal.com",1,"math",10000);
    School s;
   s.addTeacher(t);
   s.printTeachers();

    return 0;
}
