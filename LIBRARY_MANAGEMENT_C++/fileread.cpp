#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
int main()
{
    
    ifstream itf("paddu.txt");
    string s;
    vector<string> vstrings;
        
    while(getline(itf,s))
    {
        //cout<<s<<endl;
        stringstream ss(s);
        while(ss.good())
        {
            string s1;
            ss>>s1;
            vstrings.push_back(s1);
        }
        
    }
    
        for(int i=0;i<vstrings.size();i++)
        {
            cout<<vstrings[i]<<endl;
        }
    itf.close();

    return 0;

}