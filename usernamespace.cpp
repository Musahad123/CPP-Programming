#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                cout<<"Inside fun of Demo from Maevellous\n";
            }
    };
    class Hello
    {
        public:
            int x,y;
    };
}
namespace Infosystems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                cout<<"Inside fun of Demo from Infosystem\n";
            }
    };
}
int main()
{
    Marvellous::Demo obj1;
    obj1.fun();
    Infosystems::Demo obj2;
    obj2.fun();

    return 0;


}