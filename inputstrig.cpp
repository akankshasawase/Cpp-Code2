# include<iostream>
using namespace std;
int main()
{
    string Fname;
    cout<<"enter a value for first name: ";
    cin>>Fname;
    getline(cin,Fname);
    cout<<"getline value of first name: "<<Fname;
    return 0;
}
