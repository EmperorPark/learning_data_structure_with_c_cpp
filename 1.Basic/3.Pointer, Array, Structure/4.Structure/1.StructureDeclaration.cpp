//Structure is "Data Type". It is not value
//Structure is Aggregate Data Type

#include <string.h>

#if 0
struct car
{
    char Title[12];
    int Year;
    int price;
};
#else
// Generally, using directive "typedef"
typedef struct car
{
    char Title[12];
    int Year;
    int price;
} carType;
#endif

int main()
{
    carType myCar;
    myCar.Year = 2001;
    strcpy_s(myCar.Title, 12, "RedSportsCar");
    myCar.price = 1000000000;

    carType yourCar {"BlueTruck", 2005, 10000000};

    carType companyCars[100]; // structure array
    companyCars[2].Year = 2001;
    strcpy_s(companyCars[2].Title, 12, "RedSportsCar");
    companyCars[2].price = 1000000000;

    return 0;
}