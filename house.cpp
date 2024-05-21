// modules
#include "house.h"

// main function
int main()
{
    // creating the house ( my_house ), with the size of 5
    House my_house(8);
    House my_house2(3);
    House my_house3(17);
    House my_house4(56);
    House my_house5(1);

    my_house5.GetSize();

    my_house4.GetSize();

    my_house.Grow();

    my_house.SetBorder('*');

    my_house.SetFill('=');

    my_house.Shrink();

    my_house.Summary();

    my_house2.GetSize();

    my_house2.Grow();

    my_house2.SetBorder('*');

    my_house2.Shrink();

    my_house2.Summary();

    my_house3.Grow();

    my_house3.SetBorder('*');

    my_house3.GetSize();

    my_house3.Summary();

    // set fill
    my_house3.SetFill('=');

    // house shrunk by 1
    my_house3.Shrink();

    // set fill
    my_house2.SetFill('=');
};