//Structure is "Data Type". It is not value
//Structure is Aggregate Data Type

#include <string.h>

typedef struct car
{
    char Title[12];
    int Year;
    int price;
} carType;


typedef struct person
{
    char Name[12];
    int Age;
    int Weight;
} personType;

//Redefine structure
typedef struct OwnerAndPrice
{
    int *OwnerAge;
    int *CarPrice;
} OwnerAndPriceType;


int main()
{
    carType *myCar;
    
    myCar->Year = 1000;
    strcpy_s((*myCar).Title, 12, "testCar");
    myCar->price = 100000000; // Error

    personType *me;
    strcpy_s(me->Name, 12, "me");
    me->Age = 25;
    me->Weight = 65;

    // Redefine Data(abstract Data)
    // Perspective
    // Structured data
    OwnerAndPriceType *OandP;
    OandP = new OwnerAndPriceType; // Dynamic initialize
    OandP->OwnerAge = &(me->Age);
    OandP->CarPrice = &(myCar->price);

    return 0;
}