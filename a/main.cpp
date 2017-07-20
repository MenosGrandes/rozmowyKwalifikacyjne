#include <iostream>

using namespace std;

int main()
{
    int i=0;
    i+++2;
    ++i+2;

    i=+i+++2;
    i+++(++i);

    int j=i++;
    int g=++i;



/*
Check if hardware is big or little endian

https://sourceforge.net/p/predef/wiki/Endianness/
*/
    int num = 1;
    if(*&num == 1)
    {
        std::cout<<("\nLittle-Endian\n");
    }
    else
    {
        std::cout<<("Big-Endian\n");
    }
    return 0;


}
