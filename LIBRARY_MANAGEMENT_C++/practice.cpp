#include<iostream>
#include<vector>
#include<string>
#include<regex>
#include<cctype>
#include<typeinfo>
#include<sstream>

using namespace std;
// for compiling : g++ filename.cpp
// for running : a.exe

bool is_email_valid(const string& email)
{
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
}
int main()
{
    int a=10;
    string s;
    cout<<((typeid(int)==typeid(s))==0);
    if((typeid(int)==typeid(s)))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    cout<<"\nLibrarian Details :\n";
    string l_id,l_id1;
    cout<<"\nEnter Id : ";
    cin>>l_id1;
    
    stringstream geek(l_id1);
    int id=0;
    geek>>id;
    if(typeid(int)==typeid(id) && l_id1.length()>=4)
    {
        l_id=l_id1;
        
    }
    else
    {
        cout<<"\nEnter Valid Id : ";
        
    }

    
    /*
    string email;
    cin>>email;
    cout<<email<<" : "<<(is_email_valid(email)?"valid":"invalid")<<endl;
    string pw;
    cin>>pw;
    char c;
    int length=pw.length();
    bool digit=false;
    bool upper=false;
    bool lower=false;
    bool special=false;

    int i=0;
    while(i<length)
    {
        c=pw[i];
        i++;
        if(isdigit(c))
        {
            digit=true;
            
        }
        if(isupper(c))
        {
            upper=true;
            
        }
        if(islower(c))
        {
            lower=true;
            
        }
        if(c=='@' || c=='!' || c=='#' || c=='$' )
        {
            special=true;
        }
        
    }
    if(length>=6 && upper && lower && digit && special)
    {
        cout<<"\nvalid";

    }
    else
    {
        cout<<"\nInvalid";
    }
 */ 
 /*   vector<int> v;
    for(int i=0;i<=5;i++)
    {
        v.push_back(i);
        cout<<v[i];
        cout<<"\n";
    }
    v.push_back(10);
    cout<<"\noutput: \n";

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<"\n";

    }
 */

    return 0;
}