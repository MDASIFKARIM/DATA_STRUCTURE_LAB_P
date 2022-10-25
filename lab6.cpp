#include<iostream>
using namespace std;


class student
{
    public :

    string id , name;
    float cgpa;
    int credit_comp;

    student()
    {
    }
    student( string x , string y , float v , int z)
    {
        name = x;
        id= y;
        cgpa = v;
        credit_comp = z;

    }
    void printDetails()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"cgpa : "<<cgpa<<endl;
        cout<<"credit completed : "<<credit_comp<<endl;

    }




};


int main()
{

 student *s1 = new student[5];
 string id , name;
 float cgpa , temp;
 int credit_comp;

 for(int i = 0;i<5;i++)
 {
   cout<<"Enter student information"<<i+1<<endl;
   cout<<"Name,id,cgpa,completed credits"<<endl;
   cin>>name;
   cin>>id;
   cin>>cgpa;
   cin>>credit_comp;
   s1[i] = student(name , id , cgpa, credit_comp);
 }
 cout<<endl<<endl;

 for(int i = 0 ; i < 5 ; i++)
 {
     s1[i].printDetails();
     cout<<endl;

 }
 for(int i = 0 ; i < 5 ; i++)
 {
     for(int j = 0 ; j<(5-i-1);j++)
     {
         if(s1[j].cgpa>s1[j+1].cgpa)
         {
             temp = s1[j].cgpa;
             s1[j].cgpa=s1[j+1].cgpa;
             s1[j+1].cgpa = temp;
         }

     }

 }
 cout<<"After applying bubble sort";
 for(int i = 0 ; i<5; i++)
 {
     s1[i].printDetails();
     cout<<endl;
 }









}
