#include<iostream>
using namespace std;


class product
{
    public :

    string pid , pname;
    float unitprice;
    string product_category;

    product()
    {
    }
    product( string x , string y , float v , string z)
    {
        pname = x;
        pid= y;
        unitprice = v;
        product_category = z;

    }
    void printDetails()
    {
        cout<<"Product Name : "<<pname<<endl;
        cout<<"Product ID : "<<pid<<endl;
        cout<<"Unite_Price : "<<unitprice<<endl;
        cout<<"Product Category : "<<product_category<<endl;

    }




};


int main()
{

 product *p1 = new product[5];
 string pid , pname;
 float unitprice , temp;
 string product_category;

 for(int i = 0;i<5;i++)
 {
   cout<<"Enter product information"<<i+1<<endl;
   cout<<"Product Name,Product ID, Unite_Price,Product Category"<<endl;
   cin>>pname;
   cin>>pid;
   cin>>unitprice;
   cin>>product_category;
   p1[i] = product(pname , pid , unitprice, product_category);
 }
 cout<<endl<<endl;

 for(int i = 0 ; i < 5 ; i++)
 {
     p1[i].printDetails();
     cout<<endl;

 }
 for(int i = 0 ; i < 5 ; i++)
 {
     for(int j = 0 ; j<(5-i-1);j++)
     {
         if(p1[j].unitprice>p1[j+1].unitprice)
         {
             temp = p1[j].unitprice;
             p1[j].unitprice=p1[j+1].unitprice;
             p1[j+1].unitprice = temp;
         }

     }

 }
 cout<<"After applying bubble sort";
 for(int i = 0 ; i<5; i++)
 {
     p1[i].printDetails();
     cout<<endl;
 }


}
