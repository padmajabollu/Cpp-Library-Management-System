#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    ofstream otf;
    stringstream ss;
    otf.open("paddu.txt");
    ss<<"hi"<<" paddu"<<"\n";
    string s=ss.str();
    otf<<s;
    otf<<"hi vrushi\n";
    return 0;
    otf.close();

    
    
}