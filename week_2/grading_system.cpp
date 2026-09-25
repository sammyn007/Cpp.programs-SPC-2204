/*

Name : Sammy Njuguna 
Reg No. : CT101/G/28858/25
Description : Grading system using if-else ladder

*/

#include<iostream>
using namespace std;

int main(){
string name;
int marks;
char grade;

//prompt user to enter student name and exam marks
cout << "Enter Student name : ";
cin >> name;

cout << "Enter Exam marks : ";
cin >> marks;

// calculate grade attained from marks
if (marks >=70 && marks <= 100){
grade ='A';
}

else if (marks >= 60 && marks <=69){
grade = 'B';
}

else if (marks >=50 && marks <= 59){
grade = 'C';
}

else if (marks >= 40 && marks <= 49){
grade ='D';
}

else if (marks >= 0){
grade = 'E';
}

else{
cout << "Invalid Marks" << endl;
return 0;
}

//Display student details
cout << "\n≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << endl;
cout << "Name : " << name << endl;
cout << "Marks : " << marks << endl;
cout << "Grade : " << grade << endl;
cout << "=≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠=" << endl;


return 0;
}
