#include <iostream>
using namespace std;

class education
{ 
    char name[10];
public:
    void disp()
    { 
        cout << "Its education system";
    }
    
    class school : public education
    {
    public:
        void disp()
        { 
            cout << "Its school education system";
        }
    };

};

int main()
{
    education::school s;
    s.disp();
    return 0;
}
