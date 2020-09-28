#if 0
//Error
void function1(int Size)
{
    int MyArray[Size]; // It Can't use Stack Space
    // ...
}
#else
//Correct
void Function2(int Size)
{
    int *MyArrayPtr = new int[Size]; // It use Heap Space
    // ...
    delete MyArrayPtr;
    MyArrayPtr = nullptr;
}
#endif

//Dumy
int main()
{
    return 0;
}