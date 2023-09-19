#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int i=5;int j=10; int k=15;
int s,d;
int c;int n;

printf("\t\tCentral Railway \n\n 1.Kalyan \t 2.Thakurli \n 3.Dombivli \t 5.Kopar \n 6.Mumbra \t 7.Kalwa \n 8.Thane \t 9.Mulund \n 10.Nahur \t 11.Bhandup \n 12.Kanjurmarg \t 13.Vikhroli \n 14.Ghatkopar \t 15.Vidyavihar \n 16.Kurla \t 17.Sion \n 18.Matunga \t 19.Dadar \n 20.Parel \t 21.Currey Road \n 22.Chinchpokli \t 23.Byculla \n 24.Sandhurst Road \t 25.Masjid \n 26.Chhatrapati Shivaji Maharaj Terminus \n\n");
printf("Enter the assigned digit of your source: \n");
scanf("%d",&s);
printf("Enter the assigned digit of your destination: \n");
scanf("%d",&d);
c=abs(s-d);

if(s>25 || s<1)
{
printf("The journey details are not available. \n");
}
if(d>25 || d<1)
{

printf("The journey details are not available. \n");
}
if(c>=1 && c<=4)
{
printf("The fare for your desired journey would be INR %d\nReturn Journey would cost INR %d\nFirst Class Single Journey Cost would be INR %d",i,2*i,5*i);
}
else if(c>=5 && c<=15)
{
    printf("The fare for your desired journey would be INR %d\nReturn Journey would cost INR %d\nFirst Class Single Journey Cost would be INR %d",j,2*j,4*j);
}
else if(c>=16 && c<=25)
{
    printf("The fare for your desired journey would be INR %d\nReturn Journey would cost INR %d\nFirst Class Single Journey Cost would be INR %f",k,2*k,5.66666666667*k);
}
else if(c==0)
{
    printf("Roam around and enjoy.");
}
else if(c>25)
{
printf("In progress");
}
if(c<=25)
{
printf("\nThe time required for the journey would be %d minutes.",5*c);
}
return 0;
}
