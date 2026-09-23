/*

Name : Sammy Njuguna
Reg No. : CT101/G/28858/25
Description : Mobile Sales Receipt System
Date : 18/09/2026

*/

#include<iostream>
using namespace std;

int main(){
string customerName;
string phoneModel;
int quantity;
float pricePerPhone, totalSales;

// heading
cout << "Mobile Sales Receipt System" << endl;
cout << "===========================\n" << endl;

//get user details 
cout << "Enter Customer name : ";
cin >> customerName;

cout << "Enter Phone model : ";
cin >> phoneModel;

cout << "Enter quantity : ";
cin >> quantity;

cout << "Enter price per unit : ";
cin >> pricePerPhone;

// calculate total sales
totalSales = quantity * pricePerPhone;

// generate the receipt
cout << "\n======================" << endl;
cout << "Customer Name :" << customerName << endl;
cout << "Phone model :" << phoneModel << endl;
cout << "Quantity bought :" << quantity << endl;
cout << "Price per phone :" <<pricePerPhone << endl;
cout << "========================\n" << endl;
cout << "Total Sales Amount:" << totalSales  << endl;

return 0;
}
