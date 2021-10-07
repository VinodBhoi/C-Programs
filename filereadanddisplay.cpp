#include <iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){

 ifstream file;
 string s;

 file.open("file.txt");




while (file.getline(file,s))
 {

    cout<<s<<" ";


}
cout<<"\n";

 return 0;
}
