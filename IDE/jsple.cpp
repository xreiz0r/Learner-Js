#include<iostream>
#include<fstream>
using namespace std;
fstream y;

int main()
{
y.open("newjs.txt", ios::out);
y << "document.write('Not sure if this is working..');";
y.close();
cout << "New Js created! \n";
}
