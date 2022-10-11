#include<iostream>
using namespace std;
int main()
{
    int arr1[20], arr2[20], arrMerge[50];
	int size1, size2, i, j;
    cout<<"Enter the Size of First Array: ";
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        arrMerge[i] = arr1[i];
    }
    j= i;
    cout<<("Enter the Size of Second Array: ")<<endl;
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        arrMerge[j] = arr2[i];
        j++;
    }
    cout<<("The New Array Merged Array :")<<endl;
    for(i=0; i<j; i++){
        cout<<arrMerge[i]<<" ";
    }
   cout<<("The Reverse of Merged Array is:")<<endl;
    for(i=(10-1); i>=0; i--)
        cout<<arrMerge[i]<<" ";
    cout<<endl;


    return 0;
}

