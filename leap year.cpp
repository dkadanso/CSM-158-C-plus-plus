#include <iostream>

using namespace std;
//By Danso;
//This is a program used to check if a year is a leap year or not;
int main()
{
   int year=0;
   string ans=("Yes""No""yes""no");
cout<<"This program checks a year you enter and outputs if it is a leap year or not"<<endl;
cout<<"Would you like to check if a year is a leap year?"<<endl;
cin>>ans;
if(ans=="Yes"){
    cout<<"Enter year"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0){
        cout<<"Year is a leap year"<<endl;}


    else if(year%4==0 && year%100==0 && year%400==0){
        cout<<"Year is a leap year"<<endl;}

    else{
    cout<<"Year is not a leap year"<<endl;}
}
else if(ans=="yes"){
     cout<<"Enter year"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0){
        cout<<"Year is a leap year"<<endl;}


    else if(year%4==0 && year%100==0 && year%400==0){
        cout<<"Year is a leap year"<<endl;}

    else{
    cout<<"Year is not a leap year"<<endl;}
}

else if(ans=="No"){
    cout<<"Thank you for using this program"<<endl;
}
else if(ans=="no"){
    cout<<"Thank you for using this program"<<endl;
}
else{
    cout<<"Invalid output"<<endl;
}

    return 0;
}
