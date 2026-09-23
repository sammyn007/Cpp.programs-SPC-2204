/*

Name : Sammy Njuguna
Reg No. : CT101/G/28858/25
Course : CS
Unit : OOP-I, SPC 2204

*/

#include<iostream>
using namespace std;

int main(){
string name;
float marks;
char grade;

// get user details 
cout << "Enter student name: " << endl;
cin >> name;

cout << "Enter Exam marks :" << endl;
cin >> marks;

//compute the grade obtained using the marks
if (marks >= 70 && marks <= 100){
grade ='A';}

else if (marks >= 60 && marks <= 69){
grade ='B';}

else if (marks >= 50 && marks <= 59){
grade ='C';}

else if (marks >= 40 && marks <= 49){
grade ='D';}

else if (marks >= 0 && marks <= 39){
grade = 'E';}

else{
cout<< "\nInvalid marks."<<endl;
return 0;
}

// display details and the grade
cout << "\n==================\n" << endl;

cout << "Student Name :"<<name << endl;
cout << "Exam Marks :" <<marks << endl;
cout << "\nGrade :" <<grade << endl;

return 0;
}
