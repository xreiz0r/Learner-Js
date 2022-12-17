#include<iostream>
#include<fstream>
 using namespace std; 

fstream ttf;
 int main()

{

ttf.open("newht.txt", ios::out);
ttf<<"\n<body>\n"<< "\n<script type=\"text/javascript\">  "<<"\n</script>\n"<<"\n</body>\n";
ttf.close();
cout << "HTML created \n";
return 0;
}
