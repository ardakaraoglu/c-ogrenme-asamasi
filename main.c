#include <stdio.h>
#include <stdlib.h>

int main() {
/*
int a,b;
printf("ilk degerinizi giriniz:   ");
scanf("%d",&a);

for(a;a<=100;a++)
{
    if(a%2==1)
    {
        continue;
    }
    b=b+a;
}

printf("Girdiginiz degerden 100e kadar olan cift sayilarin toplami %d",b); */



/*int a;
for(a='A';a<='Z';a++)
{
    printf("%c\n", a);
}*/


/*int a;
scanf("%d", &a);

if(a==1)
{
    printf("Bugun gunlerden Pazartesi");
}
else if(a==2)
{
    printf("Bugun gunlerden Sali");
}
else if(a==3)
{
    printf("Bugun gunlerden Carsamba");
}
else if(a==4)
{
    printf("Bugun gunlerden Persembe");
}
else if(a==5)
{
    printf("Bugun gunlerden Cuma");
}
else if(a==6)
{
    printf("Bugun gunlerden Cumartesi");
}
else if(a==7)
{
    printf("Bugun gunlerden Pazar");
}
else
{
    printf("Gecersiz gun girdiniz");
}

return 0;*/


/*
int a;
scanf("%d",&a);

switch(a)
{
    case 1: printf("Bugun gunlerden Pazartesi");
    break;
    case 2: printf("Bugun gunlerden Sali");
    break;
    case 3: printf("Bugun gunlerden Carsamba");
    break;
    case 4: printf("Bugun gunlerden Persembe");
    break;
    case 5: printf("Bugun gunlerden Cuma");
    break;
    case 6: printf("Bugun gunlerden Cumartesi");
    break;
    case 7: printf("Bugun gunlerden Pazar");
    break;
    default: printf("Boyle bir gun yok");
    break;
}*/

/*
float a, b;
char opt;

printf("Lutfen isleminizi giriniz:    ");
scanf("%c", &opt);

printf("Lutfen iki adet sayi giriniz:\n");
scanf("%f%f",&a,&b);

switch(opt)
{
    case'+': printf("%.2f + %.2f = %.2f",a,b,a+b);
    break;
    case'-': printf("%.2f - %.2f = %.2f",a,b,a-b);
    break;
    case'*': printf("%.2f * %.2f = %.2f",a,b,a*b);
    break;
    case'/': printf("%.2f / %.2f = %.2f",a,b,a/b);
    break;
    default: printf("Gecersiz islem");
}*/

/*
float a, b;
char opt;

printf("Lutfen isleminizi giriniz:  ");
scanf("%c", &opt);

printf("Lutfen iki adet sayi giriniz:\n");
scanf("%f%f",&a,&b);

if(opt=='+')
{
    printf("%.2f + %.2f = %.2f",a,b,a+b);
}
else if(opt=='-')
{
    printf("%.2f - %.2f = %.2f",a,b,a-b);
}
else if(opt=='*')
{
    printf("%.2f * %.2f = %.2f",a,b,a*b);
}
else if(opt=='/')
{
    printf("%.2f / %.2f = %.2f",a,b,a/b);
}
else
{
    printf("Hatali giris yaptiniz!");
}*/


/*100tl ve altı alışverişlerde yüzde 4, 100-250 lirası alışverişlerde ilk 100tl için yüzde 5 100 250 arası için yüzde 7, 250 lira ve üstü için yüzde 10 indirimi hesaplama

int main (void)  {

	float para, indirim, sonuc;


	printf("Alisveris Tutarini Giriniz:  ");
	scanf("%f", &para);

	if (para > 0 && para <= 100) {

		indirim = para*0.04;
		sonuc = para - indirim;

		printf("Indirimli Alisveris Tutari: %2.f\n", sonuc);
		printf("Indirim Tutari: %2.f\n", indirim);

	}

	else if (para > 100 && para <= 250) {

		indirim = 5+(para - 100) * 0.07;
		sonuc = para - indirim;

		printf("Indirimli Alisveris Tutari: %2.f\n", sonuc);
		printf("Indirim Tutarý: %2.f\n", indirim);

	}

	else if (para > 250) {

		indirim = para * 0.10;
		sonuc = para - indirim;

		printf("Indirimli Alisveris Tutari: %2.f\n", sonuc);
		printf("Indirim Tutarý: %2.f\n", indirim);


	}

	return 0;
*/



}


