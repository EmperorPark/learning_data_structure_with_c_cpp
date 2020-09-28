// All field value is Copied

#include <iostream>
#include <string.h>

typedef struct car
{
    char Title[12];
    int Year;
    int price;
} carType;

void function(carType thisCar)
{
    thisCar.price = 1;
    thisCar.Year = 2000;
    strcpy_s(thisCar.Title, 12, "testtest");
}

int main()
{
    carType myCar { "SportsCar", 2020, 1000000000 };
    
    function(myCar); // not change(original)

    std::cout << "Title: " << myCar.Title << ", Year: " << myCar.Year << ", Price: " << myCar.price;

    return 0;
}