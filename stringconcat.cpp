#include<iostream>
using namespace std;

int main()
{
string FirstName="Radhe ";
string LastName="Shyam";
string FullName=FirstName+LastName;
string MovieName=FullName.append(FirstName);
string MovieName2=FullName.append(" Radhe");

cout<<"\n your complete name is:"<<FullName;
cout<<"\n complete movie name is:"<<MovieName;
cout<<"\n complete movie name is:"<<MovieName2;
return 0;
}
