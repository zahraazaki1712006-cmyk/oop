#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

    class Person {
private:
    string name;
    string gender;
    int age;
    string address;
    string phoneNumber;
    string email;
public:

    Person() {
        name = "";
        gender = "";
        age = 0;
    }
    Person(string name, string gender, int age,string address,string phoneNumber,string email) {
       this->name = name;
        this->gender = gender;
        this->age = age;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
    }
    void set_name(string name) {
        this->name = name;
    }

    void set_gender(string gender) {
        this->gender = gender;
    }

    void set_age(int age) {
        this->age = age;
    }
     void set_address(string address) {
        this->address = address;
    }
     void set_phoneNumber(string phoneNumber) {
        this->phoneNumber = phoneNumber;
    }
    void set_email(string email) {
        this->email = email;
    }
    string get_name() {
        return name;
    }

    string get_gender() {
        return gender;
    }

    int get_age() {
        return age;
    }
     string getaddress(){
     return address;}
    string get_phoneNumber(){
    return phoneNumber;}
    string get_email(){
    return email;}
    void print() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "phonenumber: " << phoneNumber << endl;
        cout << "address: " << address << endl;
        cout << "email: " << email << endl;
    }
};



#endif // PERSON_H
