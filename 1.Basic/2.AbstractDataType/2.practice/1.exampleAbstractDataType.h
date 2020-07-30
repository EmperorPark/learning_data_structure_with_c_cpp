class Telephone 
{
public:
    void setNumber();
    unsigned char* catchACall();
    void startCall();
    void endCall();
private:
    bool isBusy;
    unsigned char myNumber[];
    unsigned char NumberToCall[];
};

class Car
{
public:
    void startTheEngine();
    void turnOffTheEngine();
    void setClutch();
    void setTheGear();
    void increaseSpeed();
    void decreaseSpeed();
    void setDirection();
private:
    bool onEngine;
    bool onClutch;
    char gear;
    unsigned char speed;
    float direction;
};