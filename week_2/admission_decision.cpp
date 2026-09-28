/* 

Name : Sammy Njuguna 
Reg No. : CT101/G/28858/25
Description : Admission decision (nested if)

*/

#include<iostream>
#include <string>


using namespace std;

int main(){

string studentName;
int age;
int marks;

//prompt user to enter details 
cout << "Enter student name : " << endl;
cin >> studentName;

cout << "Enter students age : " << endl;
cin >> age;

//check if student qualifies for admission 
if (age >= 18){
 cout << "Enter student exam marks : " <<endl;
 cin >> marks;

 if (marks >= 50){
 cout << "You are admitted" << endl;
 }
 else{
 cout << "Not admitted:Low score" << endl;
 }
 }

else{
cout << "Not admitted : Underage" << endl;
}


return 0;
}
