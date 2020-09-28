//Structure is "Data Type". It is not value
//Structure is Aggregate Data Type

#include <string.h>

typedef struct car
{
    char Title[12];
    int Year;
    int price;
} carType;

class carClass
{
public:
    char Title[12];
    int Year;
    int price;
};

int main()
{
    carType *myCar;
    
    myCar->Year = 1000;
    strcpy_s((*myCar).Title, 12, "testCar");
    //myCar.price = 100000000; // Error

    carClass *carClass; // Class pointer member variable access is same
    carClass->Year = 1000;
    strcpy_s((*carClass).Title, 12, "testCar");

    
    return 0;
}