
#define A = 1
#include <std>
/* Hello
*/

class B
{
    public:
        int a = 0;
};

// Test class
template<typename T>
class CA : public B
{
    public:
        int a = 10.3e2;
        std::string sA = "Hello World";
        B::a = { 1, 2, 3};
        int[] a = [1,2,3];
        bool bA = true;

        int Hello(int a) {
            return a*4;
        }
};
