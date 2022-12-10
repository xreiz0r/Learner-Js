#include<iostream>
#include<fstream>
 using namespace std; 

fstream ttf;
 int main()

{

ttf.open("newht.txt", ios::out);
ttf<<"\n<body>\n"<< "\n<scripttype=text/javascipt src=>  "<<"\n</script>\n"<<"\n</body>\n";
ttf.close();
cout << "Html created \n";
return 0;
}
