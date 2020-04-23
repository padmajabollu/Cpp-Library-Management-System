#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<ctime>
#include<sstream>
#include<iterator>
#include<exception>
#include<sstream>
#include<typeinfo>
#include<cctype>
#include<regex>
#include<fstream>

using namespace std;

int main()
{

    const regex email_pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    char c;
    bool name=false;
    bool id=false;
    int length=0;
    bool digit=false;
    bool upper=false;
    bool lower=false;
    bool special=false;
    int i=0;
        
    int i1=0,i2=0,i3=0,i4=0;
    int BTotal=0,ITotal1=0;
    map<int, vector<string>> Book;
    map<int, vector<string>> Student;
    map<int, vector<string>> StudentBook;
    map<int, vector<string>> Librarian;
    map<int, vector<string>>:: iterator ibook;
    map<int, vector<string>>:: iterator istudent;
    map<int, vector<string>>:: iterator istudentbook;
    map<int, vector<string>>:: iterator ilibrarian;
    vector<string> vBook;
    vector<string> vStudent;
    vector<string> vStudentBook;
    vector<string> vLibrarian;

    string s_prn;
    string s_name;
    string s_email;
    string s_password;
    string s_prn1;
    string s_password1;
    

    
    string l_id;
    string l_name;
    string l_password;
    string l_id1;
    string l_password1;
                                
    
    string b_id;
    string b_name;
    string b_author;
    string b_publication;
    
    string b_id1;
    string b_author1;
    string b_publication1;
    string b_name1;

    time_t now = time(0);
    tm *ltm = localtime(&now);
    ostringstream s1,s2,s3;
    s1<<(ltm->tm_mday);
    s2<<(1 + ltm->tm_mon);
    s3<<(1900+ltm->tm_year);
    string day=s1.str();
    string month=s2.str();
    string year=s3.str();
        string s;
    vector<string> output_Book;
    vector<string> output_Student;
    vector<string> output_StudentBook;
    vector<string> output_Librarian;
    cout<<"\nBook Details : \n";
    ifstream rBook("Book.txt");
    while(getline(rBook,s))
    {
        stringstream ss(s);
        while(ss.good())
        {    
            string sss;
            ss>>sss;
            output_Book.push_back(sss);
        }
        Book[i3]=output_Book;
        i3++;
        output_Book.clear();
    }
    for(ibook=Book.begin();ibook!=Book.end();ibook++)
    {
        cout<<endl;
        for(int i=0;i<(ibook->second).size();i++)
        {
            cout<<ibook->second[i]<<" ";
        }
        
    }
     
    rBook.close();
    
    cout<<"\nStudent Details : \n";
    ifstream rStudent("Student.txt");
    while(getline(rStudent,s))
    {
        stringstream ss(s);
        while(ss.good())
        {    
            string sss;
            ss>>sss;
            output_Student.push_back(sss);
        }
        Student[i2]=output_Student;
        i2++;
        output_Student.clear();
    }
    for(istudent=Student.begin();istudent!=Student.end();istudent++)
    {
        cout<<endl;
        for(int i=0;i<(istudent->second).size();i++)
        {
            cout<<istudent->second[i]<<" ";
        }
        
    }
 
    rStudent.close();

    cout<<"\nIssue Book Details : \n";
    ifstream rStudentBook("StudentBook.txt");
    while(getline(rStudentBook,s))
    {
        stringstream ss(s);
        while(ss.good())
        {    
            string sss;
            ss>>sss;
            output_StudentBook.push_back(sss);
        }
        StudentBook[i4]=output_StudentBook;
        i4++;
        output_StudentBook.clear();
    }
    
    for(istudentbook=StudentBook.begin();istudentbook!=StudentBook.end();istudentbook++)
    {
        cout<<endl;
        for(int i=0;i<(istudent->second).size();i++)
        {
            cout<<istudentbook->second[i]<<" ";
        }
        
    }
    
 
    rStudentBook.close();
    
    cout<<"\nLibrarian Details :\n";
    ifstream rLibrarian("Librarian.txt");
    while(getline(rLibrarian,s))
    {
        stringstream ss(s);
        while(ss.good())
        {    
            string sss;
            ss>>sss;
            output_Librarian.push_back(sss);
        }
        Librarian[i1]=output_Librarian;
        i1++;
        output_Librarian.clear();
    }
    for(ilibrarian=Librarian.begin();ilibrarian !=Librarian.end();ilibrarian++)                                   
    {
        cout<<endl;

        for(int i=0;i<(ilibrarian->second).size();i++)
        {
            cout<<ilibrarian->second[i]<<" ";

        }
    
    }
    rLibrarian.close();

    while(true)
    {    
        try
        {
            cout<<endl<<"\nLibrary Management System"<<endl;
            cout<<"\nSelect your Option\n";
            cout<<"1.Registration\n";
            cout<<"2.Login\n";
            cout<<"3.Exit";
            cout<<endl;
            int choice;
            cin>>choice;
            if(choice==1)
            {
                while(true)
                {
                    cout<<"\nSelect your Option\n";
                    cout<<"1.Librarian Registration\n";
                    cout<<"2.Student Registration\n";
                    cout<<"3.Exit\n";
                    int c1;
                    cin>>c1;
                    if(c1==1)
                    {
                        cout<<"\nLibrarian Details :\n";
                        cout<<"\nEnter Id : ";
                        cin>>l_id;
                        while(true)
                        {
                            id=false;
                            i=0;
                            length=l_id.length();
                            

                            while(i<length)
                            {
                                c=l_id[i];
                                i++;
                                if(isdigit(c))
                                {
                                    id=true;
                                }
                                else
                                {
                                    id=false;
                                }
                            }
                            if(id && length>=4)
                            {
                                break;
                            }
                            else
                            {
                                cout<<"\nEnter Valid Id : ";
                                cin>>l_id;
                                continue;
                            }

                        }
                        cout<<"\nEnter Name : ";
                        cin>>l_name;
                        while(true)
                        {
                            name=false;
                            i=0;
                            length=l_name.length();
                            

                            while(i<length)
                            {
                                c=l_name[i];
                                i++;
                                if(isalpha(c))
                                {
                                    name=true;
                                }
                                else
                                {
                                    name=false;
                                }
                            }
                            if(name && length>=4)
                            {
                                break;
                            }
                            else
                            {
                                cout<<"\nEnter Valid Name : ";
                                cin>>l_name;
                                continue;
                            }
                        }
                        cout<<"\nEnter Password like Padmaja@04 : ";
                        cin>>l_password;
                        while(true)
                        {
                            special=false;
                            lower=false;
                            upper=false;
                            digit=false;
                            i=0;
                            length=l_password.length();
                            while(i<length)
                            {
                                c=l_password[i];
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
                                break;

                            }
                            else
                            {
                                cout<<"\nEnter Valid Password : ";
                                cin>>l_password;
                                
                                continue;
                            }
                        }
                        //cout<<l_id<<" "<<l_name<<" "<<l_password<<endl;
                        vLibrarian.push_back(l_id);
                        vLibrarian.push_back(l_name);
                        vLibrarian.push_back(l_password);
                        Librarian[i1]=vLibrarian;
                        cout<<"\nRegistration Successful !!\n";
                        i1=i1+1;
                        cout<<endl;
                        ofstream wLibrarian;
                        wLibrarian.open("Librarian.txt");
                            
                        for(ilibrarian=Librarian.begin();ilibrarian !=Librarian.end();ilibrarian++)
                        {
                            for(int i=0;i<(ilibrarian->second).size();i++)
                            {
                                
                                cout<<ilibrarian->second[i]<<" ";

                            }
                            stringstream ss;
                            ss<<ilibrarian->second[0]<<" "<<ilibrarian->second[1]<<" "<<ilibrarian->second[2]<<"\n";
                            string output=ss.str();
                            wLibrarian<<output;
                            
                            cout<<endl;

                        }
                        wLibrarian.close();

                        vLibrarian.clear();

                        

                    }
                    else
                    {
                        if(c1==2)
                        {
                            cout<<"\nStudent Details : \n";
                            cout<<"\nEnter PRN : ";
                            cin>>s_prn;
                            while(true)
                            {
                                id=false;
                                i=0;
                                length=s_prn.length();
                                

                                while(i<length)
                                {
                                    c=s_prn[i];
                                    i++;
                                    if(isdigit(c))
                                    {
                                        id=true;
                                    }
                                    else
                                    {
                                        id=false;
                                    }
                                }
                                if(id && (length==10 || length==9))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"\nEnter Valid PRN : ";
                                    cin>>s_prn;
                                    continue;
                                }

                            }
                            cout<<"\nEnter Name :";
                            cin>>s_name;
                            while(true)
                            {
                                name=false;
                                i=0;
                                length=s_name.length();
                                

                                while(i<length)
                                {
                                    c=s_name[i];
                                    i++;
                                    if(isalpha(c))
                                    {
                                        name=true;
                                    }
                                    else
                                    {
                                        name=false;
                                    }
                                }
                                if(name && length>=4)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"\nEnter Valid Name : ";
                                    cin>>s_name;
                                    continue;
                                }
                            }
                            cout<<"\nEnter Email Id : ";
                            cin>>s_email;
                            while(true)
                            {
                                if(regex_match(s_email,email_pattern))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"\nEnter Valid Email Id : ";
                                    cin>>s_email;
                                    continue;
                                }
                            }
                            cout<<"\nEnter Password like Paddu@066 :";
                            cin>>s_password;
                            while(true)
                            {
                                digit=false;
                                upper=false;
                                lower=false;
                                special=false;
                                i=0;
                                length=s_password.length();
                                while(i<length)
                                {
                                    c=s_password[i];
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

                                    break;

                                }
                                else
                                {
                                    cout<<"\nEnter Valid Password : ";
                                    cin>>s_password;
                                    
                                    continue;
                                }
                            }
                            //cout<<s_prn<<" "<<s_name<<" "<<s_email<<" "<<s_password<<endl;
                            vStudent.push_back(s_prn);
                            vStudent.push_back(s_name);
                            vStudent.push_back(s_email);
                            vStudent.push_back(s_password);
                            Student[i2]=vStudent;
                            cout<<"\nRegistration Successful !!\n";
                            i2=i2+1;
                            cout<<endl;
                            ofstream wStudent;
                            wStudent.open("Student.txt");

                            for(istudent=Student.begin();istudent !=Student.end();istudent++)                                   
                            {
                                for(int i=0;i<(istudent->second).size();i++)
                                {
                                    cout<<istudent->second[i]<<" ";

                                }
                                stringstream ss;
                                ss<<istudent->second[0]<<" "<<istudent->second[1]<<" "<<istudent->second[2]<<" "<<istudent->second[3]<<"\n";
                                string output=ss.str();
                                wStudent<<output;
                                cout<<endl;
                            }
                            wStudent.close();
                            vStudent.clear();

                        }
                        else
                        {
                            if(c1==3)
                            {
                                break;
                            }
                            else
                            {
                                cout<<"\nWrong Choice !!\n";
                                continue;

                            }
                        }
                    }
                    
                }

                    
            }
            else
            {
                if(choice==2)
                {
                    while(true)
                    {
                        cout<<"\nSelect your Option\n";
                        cout<<"1.Librarian Login\n";
                        cout<<"2.Student Login\n";
                        cout<<"3.Exit\n";
                        int c2;
                        cin>>c2;
                        if(c2==1)
                        {
                            cout<<"\nEnter Id & Password for Login : \n";
                            cout<<"\nEnter ID: ";
                            cin>>l_id1;
                            while(true)
                            {
                                id=false;
                                i=0;
                                length=l_id1.length();
                                

                                while(i<length)
                                {
                                    c=l_id1[i];
                                    i++;
                                    if(isdigit(c))
                                    {
                                        id=true;
                                    }
                                    else
                                    {
                                        id=false;
                                    }
                                }
                                if(id && length>=4)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"\nEnter Valid Id : ";
                                    cin>>l_id1;
                                    continue;
                                }
                            }
                            cout<<"\nEnter Valid Password like Pass.word@25 : ";
                            cin>>l_password1;
                            while(true)
                            {
                                digit=false;
                                upper=false;
                                lower=false;
                                special=false;
                                i=0;
                                length=l_password1.length();
                                while(i<length)
                                {
                                    c=l_password1[i];
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

                                    break;

                                }
                                else
                                {
                                    cout<<"\nEnter Valid Password : ";
                                    cin>>l_password1;
                                    
                                    continue;
                                }
                            }
                            for(ilibrarian=Librarian.begin();ilibrarian !=Librarian.end();ilibrarian++)
                            {
                                if(ilibrarian->second[0]==l_id1 && ilibrarian->second[2]==l_password1)
                                {
                                    cout<<"\nLogin Successful !!\n";
                                    while(true)
                                    {
                                        cout<<"\nSelect your Option\n";
                                        cout<<"1.Add Book\n";
                                        cout<<"2.Delete Book\n";
                                        cout<<"3.Issue Book\n";
                                        cout<<"4.Return Book\n";
                                        cout<<"5.Available Books Details\n";
                                        cout<<"6.Issued Books Details\n";
                                        cout<<"7.Total Issued Books\n";
                                        cout<<"8.Total Available Books\n";
                                        cout<<"9.Delete Student\n";
                                        cout<<"10.Exit\n";
                                        int c3;
                                        cin>>c3;
                                        if(c3==1)
                                        {
                                            cout<<"\nBook Details :\n";
                                            cout<<"\nEnter Book Id :";
                                            cin>>b_id;
                                            while(true)
                                            {
                                                id=false;
                                                i=0;
                                                length=b_id.length();
                                                

                                                while(i<length)
                                                {
                                                    c=b_id[i];
                                                    i++;
                                                    if(isdigit(c))
                                                    {
                                                        id=true;
                                                    }
                                                    else
                                                    {
                                                        id=false;
                                                    }
                                                }
                                                if(id && length>=4)
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"\nEnter Valid Book Id : ";
                                                    cin>>b_id;
                                                    continue;
                                                }
                                            }
                                            cout<<"\nEnter Book Name :";
                                            cin>>b_name;
                                            while(true)
                                            {
                                                name=false;
                                                i=0;
                                                length=b_name.length();
                                                

                                                while(i<length)
                                                {
                                                    c=b_name[i];
                                                    i++;
                                                    if(isalpha(c))
                                                    {
                                                        name=true;
                                                    }
                                                    else
                                                    {
                                                        name=false;
                                                    }
                                                }
                                                if(name && length>=4)
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"\nEnter Valid Book Name : ";
                                                    cin>>b_name;
                                                    continue;
                                                }
                                            }
                                            cout<<"\nEnter Book Author : ";
                                            cin>>b_author;
                                            while(true)
                                            {
                                                name=false;
                                                i=0;
                                                length=b_author.length();
                                                

                                                while(i<length)
                                                {
                                                    c=b_author[i];
                                                    i++;
                                                    if(isalpha(c))
                                                    {
                                                        name=true;
                                                    }
                                                    else
                                                    {
                                                        name=false;
                                                    }
                                                }
                                                if(name && length>=4)
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"\nEnter Valid Book Author : ";
                                                    cin>>b_author;
                                                    continue;
                                                }
                                            }
                                            cout<<"\nEnter Book Publication : ";
                                            cin>>b_publication;
                                            while(true)
                                            {
                                                name=false;
                                                i=0;
                                                length=b_publication.length();
                                                

                                                while(i<length)
                                                {
                                                    c=b_publication[i];
                                                    i++;
                                                    if(isalpha(c))
                                                    {
                                                        name=true;
                                                    }
                                                    else
                                                    {
                                                        name=false;
                                                    }
                                                }
                                                if(name && length>=4)
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"\nEnter Valid Book Publication : ";
                                                    cin>>b_publication;
                                                    continue;
                                                }
                                            }
                                            vBook.push_back(b_id);
                                            vBook.push_back(b_name);
                                            vBook.push_back(b_author);
                                            vBook.push_back(b_publication);
                                            Book[i3]=vBook;
                                            cout<<"\nBook Added Successfully !! \n";
                                            i3=i3+1;
                                            BTotal=BTotal+1;
                                            cout<<endl;
                                            ofstream wBook;
                                            wBook.open("Book.txt");

                                            for(ibook=Book.begin();ibook !=Book.end();ibook++)                                   
                                            {
                                                for(int i=0;i<(ibook->second).size();i++)
                                                {
                                                    cout<<ibook->second[i]<<" ";

                                                }
                                                stringstream ss;
                                                ss<<ibook->second[0]<<" "<<ibook->second[1]<<" "<<ibook->second[2]<<" "<<ibook->second[3]<<"\n";
                                                string output=ss.str();
                                                wBook<<output;
                                                cout<<endl;
                                                              
                                            }
                                            wBook.close();
                                            vBook.clear();
                                            

                                        }
                                        else
                                        {
                                            if(c3==2)
                                            {
                                                cout<<"\nBook Details :\n";
                                                cout<<"\nEnter Book Id :";
                                                cin>>b_id1;
                                                while(true)
                                                {
                                                    id=false;
                                                    i=0;
                                                    length=b_id.length();
                                                    

                                                    while(i<length)
                                                    {
                                                        c=b_id[i];
                                                        i++;
                                                        if(isdigit(c))
                                                        {
                                                            id=true;
                                                        }
                                                        else
                                                        {
                                                            id=false;
                                                        }
                                                    }
                                                    if(id && length>=4)
                                                    {
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        cout<<"\nEnter Valid Book Id : ";
                                                        cin>>b_id;
                                                        continue;
                                                    }
                                                }
                                                for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                {
                                                    if(ibook->second[0]==b_id1)
                                                    {
                                                        Book.erase(ibook);
                                                        cout<<"\nBook Deleted Successfully !!\n";
                                                        BTotal=BTotal-1;
                                                        break;
                                                    }
                                                }
                                                cout<<endl;
                                                ofstream wBook;
                                                wBook.open("Book.txt");

                                                for(ibook=Book.begin();ibook !=Book.end();ibook++)                                   
                                                {
                                                    for(int i=0;i<(ibook->second).size();i++)
                                                    {
                                                        cout<<ibook->second[i]<<" ";

                                                    }
                                                    stringstream ss;
                                                    ss<<ibook->second[0]<<" "<<ibook->second[1]<<" "<<ibook->second[2]<<" "<<ibook->second[3]<<"\n";
                                                    string output=ss.str();
                                                    wBook<<output;
                                                    cout<<endl;
                                                                
                                                }
                                                wBook.close();
                                            }
                                            else
                                            {
                                                if(c3==3)
                                                {
                                                    cout<<"\nEnter Details : \n";
                                                    cout<<"\nEnter the Book Id : ";
                                                    cin>>b_id1;
                                                    while(true)
                                                    {
                                                        id=false;
                                                        i=0;
                                                        length=b_id1.length();
                                                        

                                                        while(i<length)
                                                        {
                                                            c=b_id1[i];
                                                            i++;
                                                            if(isdigit(c))
                                                            {
                                                                id=true;
                                                            }
                                                            else
                                                            {
                                                                id=false;
                                                            }
                                                        }
                                                        if(id && length>=4)
                                                        {
                                                            break;
                                                        }
                                                        else
                                                        {
                                                            cout<<"\nEnter Valid Book Id : ";
                                                            cin>>b_id1;
                                                            continue;
                                                        }
                                                    }
                                                    cout<<"\nEnter the PRN : ";
                                                    cin>>s_prn1;
                                                    while(true)
                                                    {
                                                        id=false;
                                                        i=0;
                                                        length=s_prn1.length();
                                                        

                                                        while(i<length)
                                                        {
                                                            c=s_prn1[i];
                                                            i++;
                                                            if(isdigit(c))
                                                            {
                                                                id=true;
                                                            }
                                                            else
                                                            {
                                                                id=false;
                                                            }
                                                        }
                                                        if(id && (length==10 || length==9))
                                                        {
                                                            break;
                                                        }
                                                        else
                                                        {
                                                            cout<<"\nEnter Valid PRN : ";
                                                            cin>>s_prn1;
                                                            continue;
                                                        }

                                                    }
                                                    //cout<<endl<<day<<" "<<month<<" "<<year<<endl;
                                                    for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                    {
                                                        if(ibook->second[0]==b_id1)
                                                        {
                                                            vStudentBook.push_back(ibook->second[0]);
                                                            vStudentBook.push_back(ibook->second[1]);
                                                            vStudentBook.push_back(ibook->second[2]);
                                                            vStudentBook.push_back(ibook->second[3]);
                                                            vStudentBook.push_back(s_prn1);
                                                            
                                                            vStudentBook.push_back(day);
                                                            vStudentBook.push_back(month);
                                                            vStudentBook.push_back(year);
                                                            StudentBook[i4]=vStudentBook;
                                                            ITotal1=ITotal1+1;
                                                            i4=i4+1;
                                                            Book.erase(ibook);
                                                            BTotal=BTotal-1;
                                                            cout<<"\nBook Issued Successfully !!\n";
                                                            break;
                                                            

                                                        }
                                                    }
                                                    cout<<"\n";
                                                    cout<<endl<<"\nStudent Book Details :\n";
                                                    ofstream wStudentBook;
                                                    wStudentBook.open("StudentBook.txt");
                                                    for(istudentbook=StudentBook.begin();istudentbook !=StudentBook.end();istudentbook++)                                  
                                                    {
                                                        for(int i=0;i<(istudentbook->second).size();i++)
                                                        {
                                                            cout<<istudentbook->second[i]<<" ";

                                                        }
                                                        cout<<endl;
                                                        stringstream ss;
                                                        ss<<istudentbook->second[0]<<" "<<istudentbook->second[1]<<" "<<istudentbook->second[2]<<" "<<istudentbook->second[3]<<" "<<istudentbook->second[4]<<" "<<istudentbook->second[5]<<" "<<istudentbook->second[6]<<" "<<istudentbook->second[7]<<"\n";
                                                        string output=ss.str();
                                                        wStudentBook<<output;

                                                    }
                                                    wStudentBook.close();
                                                    cout<<endl<<"\nBook Details :\n";
                                                    
                                                    ofstream wBook;
                                                    wBook.open("Book.txt");

                                                    for(ibook=Book.begin();ibook !=Book.end();ibook++)                                   
                                                    {
                                                        for(int i=0;i<(ibook->second).size();i++)
                                                        {
                                                            cout<<ibook->second[i]<<" ";

                                                        }
                                                        stringstream ss;
                                                        ss<<ibook->second[0]<<" "<<ibook->second[1]<<" "<<ibook->second[2]<<" "<<ibook->second[3]<<"\n";
                                                        string output=ss.str();
                                                        wBook<<output;
                                                        cout<<endl;
                                                                    
                                                    }
                                                    wBook.close();
                                                    vStudentBook.clear();
                                                    

                                                }
                                                else
                                                {
                                                    if(c3==4)
                                                    {
                                                        cout<<"\nEnter Details : \n";
                                                        cout<<"\nEnter the Book Id : ";
                                                        cin>>b_id1;
                                                        while(true)
                                                        {
                                                            id=false;
                                                            i=0;
                                                            length=b_id1.length();
                                                            

                                                            while(i<length)
                                                            {
                                                                c=b_id1[i];
                                                                i++;
                                                                if(isdigit(c))
                                                                {
                                                                    id=true;
                                                                }
                                                                else
                                                                {
                                                                    id=false;
                                                                }
                                                            }
                                                            if(id && length>=4)
                                                            {
                                                                break;
                                                            }
                                                            else
                                                            {
                                                                cout<<"\nEnter Valid Book Id : ";
                                                                cin>>b_id1;
                                                                continue;
                                                            }
                                                        }
                                                        cout<<"\nEnter the PRN : ";
                                                        cin>>s_prn1;
                                                        while(true)
                                                        {
                                                            id=false;
                                                            i=0;
                                                            length=s_prn1.length();
                                                            

                                                            while(i<length)
                                                            {
                                                                c=s_prn1[i];
                                                                i++;
                                                                if(isdigit(c))
                                                                {
                                                                    id=true;
                                                                }
                                                                else
                                                                {
                                                                    id=false;
                                                                }
                                                            }
                                                            if(id && (length==10 || length==9))
                                                            {
                                                                break;
                                                            }
                                                            else
                                                            {
                                                                cout<<"\nEnter Valid PRN : ";
                                                                cin>>s_prn1;
                                                                continue;
                                                            }

                                                        }
                                                        //cout<<endl<<day<<" "<<month<<" "<<year<<endl;
                                                        for(istudentbook=StudentBook.begin();istudentbook !=StudentBook.end();istudentbook++)
                                                        {
                                                            if(istudentbook->second[0]==b_id1)
                                                            {
                                                                vBook.push_back(istudentbook->second[0]);
                                                                vBook.push_back(istudentbook->second[1]);
                                                                vBook.push_back(istudentbook->second[2]);
                                                                vBook.push_back(istudentbook->second[3]);
                                                                Book[i3]=vBook;
                                                                BTotal=BTotal+1;
                                                                i3=i3+1;
                                                                StudentBook.erase(istudentbook);
                                                                cout<<"\nBook Returned Successfully !!\n";
                                                                ITotal1=ITotal1-1;
                                                                break;

                                                            }
                                                        }
                                                        cout<<"\n";
                                                        cout<<endl<<"\nStudent Book Details :\n";
                                                        ofstream wStudentBook;
                                                        wStudentBook.open("StudentBook.txt");
                                                        for(istudentbook=StudentBook.begin();istudentbook !=StudentBook.end();istudentbook++)                                  
                                                        {
                                                            for(int i=0;i<(istudentbook->second).size();i++)
                                                            {
                                                                cout<<istudentbook->second[i]<<" ";

                                                            }
                                                            cout<<endl;
                                                            stringstream ss;
                                                            ss<<istudentbook->second[0]<<" "<<istudentbook->second[1]<<" "<<istudentbook->second[2]<<" "<<istudentbook->second[3]<<" "<<istudentbook->second[4]<<" "<<istudentbook->second[5]<<" "<<istudentbook->second[6]<<" "<<istudentbook->second[7]<<"\n";
                                                            string output=ss.str();
                                                            wStudentBook<<output;

                                                        }
                                                        wStudentBook.close();
                                                        cout<<endl<<"\nBook Details :\n";
                                                        
                                                        ofstream wBook;
                                                        wBook.open("Book.txt");

                                                        for(ibook=Book.begin();ibook !=Book.end();ibook++)                                   
                                                        {
                                                            for(int i=0;i<(ibook->second).size();i++)
                                                            {
                                                                cout<<ibook->second[i]<<" ";

                                                            }
                                                            stringstream ss;
                                                            ss<<ibook->second[0]<<" "<<ibook->second[1]<<" "<<ibook->second[2]<<" "<<ibook->second[3]<<"\n";
                                                            string output=ss.str();
                                                            wBook<<output;
                                                            cout<<endl;
                                                                        
                                                        }
                                                        wBook.close();
                                                        vBook.clear();
                                                        

                                                    }
                                                    else
                                                    {
                                                        if(c3==5)
                                                        {
                                                            cout<<"\nAvailable Book Details :\n";

                                                            cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                            for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                            {
                                                                cout<<endl;
                                                                cout<<ibook->second[0]<<"\t"<<ibook->second[1]<<"\t"<<ibook->second[2]<<"\t"+ibook->second[3];
                                                            }

                                                        }
                                                        else
                                                        {
                                                            if(c3==6)
                                                            {
                                                                cout<<"\nIssued Book Details :\n";

                                                                cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                                for(istudentbook=StudentBook.begin();istudentbook !=StudentBook.end();istudentbook++)
                                                                {
                                                                    cout<<endl;
                                                                    cout<<istudentbook->second[0]<<"\t"<<istudentbook->second[1]<<"\t"<<istudentbook->second[2]<<"\t"+istudentbook->second[3];
                                                                }

                                                            }

                                                            else
                                                            {
                                                                if(c3==7)
                                                                {
                                                                    
                                                                    cout<<"\nTotal Issued Books : "<<ITotal1;
                                                                    

                                                                }
                                                                else
                                                                {
                                                                    if(c3==8)
                                                                    {
                                                                     
                                                                        cout<<"\nTotal Available Books : "<<BTotal;
                                                                    
                                                                    }
                                                                    else
                                                                    {
                                                                        if(c3==9)
                                                                        {
                                                                            cout<<"\nStudent Details :\n";
                                                                            cout<<"\nEnter Student PRN :";
                                                                            cin>>s_prn1;
                                                                            for(istudent=Student.begin();istudent !=Student.end();istudent++)
                                                                            {
                                                                                if(istudent->second[0]==s_prn1)
                                                                                {
                                                                                    Student.erase(istudent);
                                                                                    cout<<"\n Student Account Deleted Successfully !!\n";
                                                                                    break;
                                                                                }
                                                                            }
                                                                            cout<<endl;
                                                                            cout<<endl<<"\nStudent Book Details :\n";
                                                                            ofstream wStudent;
                                                                            wStudent.open("StudentBook.txt");
                                                                            for(istudent=Student.begin();istudent !=Student.end();istudent++)                                  
                                                                            {
                                                                                for(int i=0;i<(istudent->second).size();i++)
                                                                                {
                                                                                    cout<<istudent->second[i]<<" ";

                                                                                }
                                                                                cout<<endl;
                                                                                stringstream ss;
                                                                                ss<<istudent->second[0]<<" "<<istudent->second[1]<<" "<<istudent->second[2]<<" "<<istudent->second[3]<<"\n";
                                                                                string output=ss.str();
                                                                                wStudent<<output;

                                                                            }
                                                                            wStudent.close();
                                                                            

                                                                        }
                                                                        else
                                                                        {
                                                                            if(c3==10)
                                                                            {
                                                                                break;
                                                                            }
                                                                            else
                                                                            {
                                                                                cout<<"\nWrong Choice !!\n";
                                                                                continue;
                                                                            }

                                                                        }

                                                                    }

                                                                }
                                                            }
                                                        }

                                                    }       
                                                }

                                            }

                                        }
                                        
                                    }
                                }
                            }
                            

                        }
                        
                        else
                        {
                            if(c2==2)
                            {
                                cout<<"\nEnter PRN & Password for Login : \n";
                                cout<<"\nEnter PRN: ";
                                cin>>s_prn1;
                                while(true)
                                {
                                    id=false;
                                    i=0;
                                    length=s_prn1.length();
                                    

                                    while(i<length)
                                    {
                                        c=s_prn1[i];
                                        i++;
                                        if(isdigit(c))
                                        {
                                            id=true;
                                        }
                                        else
                                        {
                                            id=false;
                                        }
                                    }
                                    if(id && (length==10 || length==9))
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"\nEnter Valid PRN : ";
                                        cin>>s_prn1;
                                        continue;
                                    }

                                }
                                cout<<"\nEnter Valid Password like Pass.word@25 : ";
                                cin>>s_password1;
                                while(true)
                                {
                                    digit=false;
                                    upper=false;
                                    lower=false;
                                    special=false;
                                    i=0;
                                    length=s_password1.length();
                                    while(i<length)
                                    {
                                        c=s_password1[i];
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

                                        break;

                                    }
                                    else
                                    {
                                        cout<<"\nEnter Valid Password : ";
                                        cin>>s_password1;
                                        
                                        continue;
                                    }
                                }
                                for(istudent=Student.begin();istudent !=Student.end();istudent++)
                                {
                                    if(istudent->second[0]==s_prn1 && istudent->second[3]==s_password1)
                                    {
                                        cout<<"\nLogin Successful !!\n";
                                        while(true)
                                        {
                                            cout<<"\nSelect your Option\n";
                                            cout<<"1.Search Book\n";
                                            cout<<"2.Display Issued Book Details\n";
                                            cout<<"3.Exit\n";
                                            int c4;
                                            cin>>c4;
                                            if(c4==1)
                                            {
                                                while(true)
                                                {
                                                    cout<<"\n Select your Option\n";
                                                    cout<<"1.Search by Book Name\n";
                                                    cout<<"2.Search by Book Author\n";   
                                                    cout<<"3.Search by Book Publication\n";  
                                                    cout<<"4.Exit\n";
                                                    int c5;
                                                    cin>>c5;
                                                    if(c5==1)
                                                    {
                                                        cout<<"\nEnter the Book Name : ";
                                                        cin>>b_name1;
                                                        while(true)
                                                        {
                                                            name=false;
                                                            i=0;
                                                            length=b_name1.length();
                                                            

                                                            while(i<length)
                                                            {
                                                                c=b_name1[i];
                                                                i++;
                                                                if(isalpha(c))
                                                                {
                                                                    name=true;
                                                                }
                                                                else
                                                                {
                                                                    name=false;
                                                                }
                                                            }
                                                            if(name && length>=4)
                                                            {
                                                                break;
                                                            }
                                                            else
                                                            {
                                                                cout<<"\nEnter Valid Name : ";
                                                                cin>>b_name1;
                                                                continue;
                                                            }
                                                        }
                                                        cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                        for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                        {
                                                            if(ibook->second[1]==b_name1)
                                                            {
                                                                cout<<endl;
                                                                cout<<ibook->second[0]<<"\t"<<ibook->second[1]<<"\t"<<ibook->second[2]<<"\t"+ibook->second[3];
                                                            }
                                                            
                                                        }

                                                    }
                                                    else
                                                    {
                                                        if(c5==2)
                                                        {
                                                            cout<<"\nEnter the Book Author : ";
                                                            cin>>b_author1;
                                                            while(true)
                                                            {
                                                                name=false;
                                                                i=0;
                                                                length=b_author1.length();
                                                                

                                                                while(i<length)
                                                                {
                                                                    c=b_author1[i];
                                                                    i++;
                                                                    if(isalpha(c))
                                                                    {
                                                                        name=true;
                                                                    }
                                                                    else
                                                                    {
                                                                        name=false;
                                                                    }
                                                                }
                                                                if(name && length>=4)
                                                                {
                                                                    break;
                                                                }
                                                                else
                                                                {
                                                                    cout<<"\nEnter Valid Name : ";
                                                                    cin>>b_author1;
                                                                    continue;
                                                                }
                                                            }
                                                            cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                            for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                            {
                                                                if(ibook->second[2]==b_author1)
                                                                {
                                                                    cout<<endl;
                                                                    cout<<ibook->second[0]<<"\t"<<ibook->second[1]<<"\t"<<ibook->second[2]<<"\t"+ibook->second[3];
                                                                }
                                                                
                                                            }

                                                        }
                                                        else
                                                        {
                                                            if(c5==3)
                                                            {
                                                                cout<<"\nEnter the Book Publication : ";
                                                                cin>>b_publication1;
                                                                while(true)
                                                                {
                                                                    name=false;
                                                                    i=0;
                                                                    length=b_publication1.length();
                                                                    

                                                                    while(i<length)
                                                                    {
                                                                        c=b_publication1[i];
                                                                        i++;
                                                                        if(isalpha(c))
                                                                        {
                                                                            name=true;
                                                                        }
                                                                        else
                                                                        {
                                                                            name=false;
                                                                        }
                                                                    }
                                                                    if(name && length>=4)
                                                                    {
                                                                        break;
                                                                    }
                                                                    else
                                                                    {
                                                                        cout<<"\nEnter Valid Name : ";
                                                                        cin>>b_publication1;
                                                                        continue;
                                                                    }
                                                                }
                                                                cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                                for(ibook=Book.begin();ibook !=Book.end();ibook++)
                                                                {
                                                                    if(ibook->second[3]==b_publication1)
                                                                    {
                                                                        cout<<endl;
                                                                        cout<<ibook->second[0]<<"\t"<<ibook->second[1]<<"\t"<<ibook->second[2]<<"\t"+ibook->second[3];
                                                                    }
                                                                     
                                                                }

                                                            }
                                                            else
                                                            {
                                                                if(c5==4)
                                                                {
                                                                    break;
                                                                }
                                                                else
                                                                {
                                                                    cout<<"\nWrong Choice !!\n";
                                                                    continue;
                                                                }

                                                            }
                                                        }
                                                    }
                                                }
                                                
                                                

                                            }
                                            else
                                            {
                                                if(c4==2)
                                                {
                                                    cout<<"\nIssued Book Details :\n";
                                                    cout<<"\nBook Id\t\t\t Name\t\t\t\tAuthor\t\t   Publication \n";
                                                    for(istudentbook=StudentBook.begin();istudentbook !=StudentBook.end();istudentbook++)
                                                    {
                                                        cout<<endl;
                                                        cout<<istudentbook->second[0]<<"\t"<<istudentbook->second[1]<<"\t"<<istudentbook->second[2]<<"\t"+istudentbook->second[3];
                                                    }

                                                }
                                                else
                                                {
                                                    if(c4==3)
                                                    {
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        cout<<"\nWrong Choice !!\n";
                                                        continue;   

                                                    }

                                                }
                                            }
                                            
                                        }
                                    }
                                }
                                

                            }
                            else
                            {
                                if(c2==3)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"\nWrong Choice !!\n";
                                    continue;
                                }
                            }

                        }
                        
                    }

                }
                else
                {
                    if(choice==3)
                    {
                        break;

                    }
                    else{
                        cout<<"\nWrong Choice !!\n";
                        continue;
                        
                    }
                }
            }
            
    
        }
        catch(...)
        {
            cout<<"\nWrong Choice !!!\n";
            continue;
            
        }
        
    }
    
    return 0;

}