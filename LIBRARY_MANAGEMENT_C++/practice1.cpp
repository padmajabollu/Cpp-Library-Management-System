#include<sstream>
#include<iterator>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    try
    {
          /*
        //usig map/
        map<int , map<int,string>> v;
        map<int,map<int,string>>:: iterator itr;
        map<int ,string>:: iterator it;
        map<int,string> v1;
        v1[0]="paddu";
        v1[1]="bollu";
        v[0]=v1;
        v[1]=v1;
        for(itr=v.begin();itr !=v.end();itr++)
        {
            for(it=(itr->second).begin();it!=(itr->second).end();it++)
            {
                cout<<it->second<<" ";

            }
        cout<<endl;

        }
        */
        /*
        //using vector
        map<int ,vector<string>> v;
        map<int,vector<string>>:: iterator itr;
        vector<string> v1;
        v1.push_back("paddu");
        v1.push_back("bollu");
        for(int i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";

            }
            cout<<endl;
        v[0]=v1;
        v[1]=v1;
        for(itr=v.begin();itr !=v.end();itr++)
        {
            for(int i=0;i<(itr->second).size();i++)
            {
                cout<<itr->second[i]<<" ";

            }
        cout<<endl;

        }
        */
        string s="1234";
        stringstream geek(s);
        int x=0;
        geek>>x;
        cout<<x;
        cout<<endl;
        ostringstream str1;
        str1<<x;
        string s1=str1.str();
        cout<<s1;
        int a;
        cin>>a;
        throw "\nError\n";
        
        
    }
    catch(const char* e)
    {
        cout<<e;
    }

    return 0;
    
}