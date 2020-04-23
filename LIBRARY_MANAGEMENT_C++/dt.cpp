/*#include <iostream>
#include <ctime>
#include<sstream>

using namespace std;

int main() {
   // current date/time based on current system
/*
   time_t now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year" << 1900+ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
 
   time_t now = time(0);
   tm *ltm = localtime(&now);
   ostringstream s1,s2,s3;
   s1<<(ltm->tm_mday);
   s2<<(1 + ltm->tm_mon);
   s3<<(1900+ltm->tm_year);
   string day=s1.str();
   string month=s2.str();
   string year=s3.str();
   cout<<endl<<day<<" "<<month<<" "<<year<<endl;
   cout<<"\nLibrarian Details :\n";
   cout<<"\nEnter Id : ";
   cin>>l_id;
   while(true)
   {
         stringstream geek(l_id);
         int id=0;
         geek>>id;
         cout<<typeid(int)==typeid(id);
         cout<<l_id.length()>=4;
         cout<<typeid(string)!=typeid(id);
         if(typeid(int)==typeid(id) && l_id.length()>=4 && typeid(string)!=typeid(id))
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
 */
#include <iostream>
#include <ctime>

int main()
{
    struct std::tm a = {0,0,0,24,5,104}; /* June 24, 2004 */
    struct std::tm b = {0,0,0,5,6,104}; /* July 5, 2004 */
    std::time_t x = std::mktime(&a);
    std::cout<<x<<"\n";
    std::time_t y = std::mktime(&b);
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
    {
        double difference = std::difftime(y, x) / (60 * 60 * 24);
        std::cout << std::ctime(&x);
        std::cout << std::ctime(&y);
        std::cout << "difference = " << difference << " days" << std::endl;
    }
    return 0;
}