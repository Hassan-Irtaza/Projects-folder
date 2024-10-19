#include <iostream>
using namespace std;

class shop
{
    int item[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void getprice(void);
    void setprice();
};

int main()
{

    return 0;
}