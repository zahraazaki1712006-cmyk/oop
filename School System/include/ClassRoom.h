#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;

class ClassRoom
{private:
    int roomNumber;
    int capacity;
    public:
        ClassRoom() {}
        ClassRoom( int roomNumber,int capacity) {
        this->roomNumber=roomNumber;
        this->capacity=capacity;}
         ~ClassRoom() {}
     void set_roomNumber(int roomNumber){
     this->roomNumber=roomNumber;}
     void set_capacity(int capacity){
     this->capacity=capacity;}
     int get_roomNumber(){
     return roomNumber;}
    int get_capacityI(){
    return capacity;}
     void print(){
    cout<<"the room number is:"<<roomNumber<<endl;
    cout<<"the capacity is:"<<capacity<<endl;}
};

#endif // CLASSROOM_H
