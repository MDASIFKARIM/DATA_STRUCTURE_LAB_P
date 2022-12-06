#include<iostream>
#include<conio.h>
using namespace std;


class Student
{
     int id;
    int data;
    Student *left,*right;
    public:
    Student(){
        data = 0;
        left = NULL;
        right =NULL;
};



Student(int value){
        data = value;
        left = NULL;
        right= NULL;
}


 Student* Insert(Student* root, int value)
    {
        if (!root){
            return new Student(value);
        }

        if (value > root->data){
            root->right = Insert(root->right, value);
        }
        else{
            root->left = Insert(root->left, value);
        }
        return root;
    }



void Inorder(Student* root)
    {
        if (!root){
            return;
        }
        Inorder(root->left);
        cout << root->data << endl;
        Inorder(root->right);
    }
};



int main()
{
    Student id,*root = NULL;
    root = id.Insert(root, 101);
    id.Insert(root, 111);
    id.Insert(root, 152);
    id.Insert(root, 255);
    id.Insert(root, 266);
    id.Insert(root, 212);
    id.Insert(root, 525);
    id.Insert(root, 999);
    id.Insert(root, 666);

    id.Inorder(root);
    return 0;
}






