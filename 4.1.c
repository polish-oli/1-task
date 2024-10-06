#include<stdio.h>
#include<locale.h>
#define _CTR_SECURE_NO_DEPRECATE

int main()
{
    setlocale(LC_ALL, "RUS");
    char c;
    int i;
    float f;
    double d;
   
    printf("Введите число\n");
    
    scanf("%c\n%d\n%f\n%lf",&c,&i,&f,&d);
    printf("%c, %d, %f, %lf\n", c, i, f, d );

    
    printf("Введите вещественное число\n");
    float f1;
    scanf("%f",&f1);
    printf("Целая:%d\n Дробная:%f\n", (int)f1, f1-(int)f1);

    int q;
   
    printf("Введите число\n");
    scanf("%d",&q);
    
    printf("Шестнадцатириное число:%x\n Десятичное число:%d\n",q,q);

    int l;
    float m;
    printf("Введите число\n");
    scanf("%d",&l);
    m = 1./l;
    printf("1/%d=%f\n",l,m);

    float a = 11;
    float b = 3;
    printf("%f\n%f\n%lf\n", a/b, (float)(a/b), (double)(a*b));

    int s;
    printf("Введите трехзначное число\n");
    scanf("%d",&s);
    printf("Последняя цифра числа:%d\nПервая цифра числа:%d\nСумма цифр числа:%d\n", (int)(s%10),(int)(s/100),(int)(s%10+s/100+s/10%10));
    printf("Чиcло наоборот:%d%d%d\n", (int)(s%10), (int)(s/10%10), (int)(s/100)); 

    int v = 4;
    printf("Скорость бега мальчика:%d\n",v*3);
    float vc = v*3;
    float u;
    printf("Введите расстояние, которое пробежал мальчик\n");
    scanf("%f",&u);
    printf("Расстояние:%.1f\n", u);
    printf("Время за которое преодолел путь:%.1fчаса",(float)(u/vc));


}   