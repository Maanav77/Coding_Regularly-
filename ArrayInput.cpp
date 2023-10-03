#include<iostream>
using namespace std;

int main ()
{
    int x;
    cout<<"enter the number of students : ";
    cin>>x;
    
    int students[100];
    cout<<"enter the marks for students : "<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<i+1<<". ";
        cin>>students[i];
    }
    cout<<endl;

    for (int i = 0; i < x; i++)
    {
        cout<<i+1<<". ";
        cout<<students[i]<<"\n";
    }
}