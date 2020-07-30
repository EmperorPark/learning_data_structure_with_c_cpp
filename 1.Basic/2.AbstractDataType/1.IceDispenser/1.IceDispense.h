///C로 정의 하는 추상자료형
///Header File을 통해 Infomation Hiding 구현이 가능하나 독자적 명칭을 가진 추상적인 객체는 언어적 특성상 인정하지 않는다.
typedef struct 
{
    int water;  //물의 양
    int Motor;  //모터의 회전수
    int Botton; //버튼 1, 2, 3
} materialType;

void GetMeChilledWater();   //냉수 주시오.
void GetMeCrushedIce();     //부순 얼음 주시오.
void GetMeCubeIce();        //각진 얼음 주시오.