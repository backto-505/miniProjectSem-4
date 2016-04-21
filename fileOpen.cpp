#include<iostream>
#include<fstream>
using namespace std;

main()
{
    fstream fp;
    string text;
    fp.open("Para.txt");
    if(fp.is_open())
    {
        while(getline(fp,text))
        {
            cout<<text;
            cout<<"\n";
        }
        fp.close();
    }
    else
    {
        cout<<"\nERROR OPENING FILE";
    }
    return 0;
}
