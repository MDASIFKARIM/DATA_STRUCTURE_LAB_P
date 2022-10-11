#include<iostream>
using namespace std;
int main()
{
    int arr1[30], arr2[30], arrCommon[100];
	int size1, size2, i, j;
    cout<<"Enter the Size of First Array: ";
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        arrCommon[i] = arr1[i];
    }
    j= i;
    cout<<("Enter the Size of Second Array: ")<<endl;
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        arrCommon[j] = arr2[i];
        j++;
    }
    cout<<("the common arrays elements are:")<<endl;
    for(i=0;i<size1;i++)
        {
        for(i=0;i<size2;j++)
        {
         if(arr1[i]==arr2[j])
            {

        cout<<arrCommon[i]<<" ";

        }

    }

  }
 return 0;
}
