#include <stdio.h>
// #include <math.h>

int sgn();
int betrag();
int schaltjahrTest();
int faku();
double hoch();
double eHoch();
int zahl;


int main(int argc, char const *argv[])
{
	ln(16);
	return 0;
}

// sgn gibt 0 wenn x=0, 1 wenn x>0, -1 wenn x<0
int sgn(int x){
	scanf("%i",&zahl);
	const int b = 1;
	const int c = -1;
	if (zahl == 0)
	{
		printf("%i\n",zahl );
	}
	else if (zahl < 0)
	{
		printf("%i\n",c );
	}
	else if (zahl > 0)
	{
		printf("%i\n",b );
	}
	return 0;
}
// gibt betrag von x wieder
int betrag(int x){
	if (x<0)
	{
		x = x * -1;
		printf("%i\n",x );
	}else{
		printf("%i\n",x );
	}
	return 0;
}
//prüft ob jahr ein Schaltjahr ist
int schaltjahrTest(int jahr){
	if (jahr%4==0 && jahr%100==0 && jahr%400==0)
	{
		printf("%i ist ein Schaltjahr\n",jahr);
	}
	else if (jahr%4==0 && jahr%100 != 0)
	{
		printf("%i ist ein Schaltjahr\n",jahr );
	}
	else{
		printf("%i ist kein Schaltjahr\n",jahr );
	}
	return 0;
}
//gibt die Fakultät von x zurück
int faku(int x){
	for (int i = x-1; i > 1; --i)
	{
		x = x*i;
	}
	//printf("faku: %i\n",x );
	return x;
}
//gibt x hoch y (x^y)
double hoch(double x, double y){
	double z = x;
	for (int i = 1; i < y; ++i)
	{
		z = z*x;
	}
	//printf("hoch: %f\n",z );
	return z;
}
//gibt e hoch x wieder (e^x)
double eHoch(double x){
	double e = 1;
	for (int k = 1; k < 10; ++k)
	{
		//printf("k: %i\n",k );
		//printf("x: %i\n", x);
		e += hoch(x,k)/faku(k);
	}
	printf("%f\n",e);
	return 0;
}
