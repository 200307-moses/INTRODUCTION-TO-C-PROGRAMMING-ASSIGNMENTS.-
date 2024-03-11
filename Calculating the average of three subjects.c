// Makenzi Moses Ngumbau 
// calculating the average of three subjects. 

 #include <stdio.h>

 int main(){
 float Eng, Kisw, Maths;
 float average;

 printf ("Enter marks for three subjects/n");

 scanf ("%f %f %f, & Eng, Kisw, Maths");

 average = (Eng+Kisw+Maths)/3;

 if(average<=70 && average <=100);

 printf ("Grade A");

 if(average <=60 && average <=69);

 printf ("Grade B");

 if(average <=50 && average <=59);

 printf ("Grade C");

if(average<=30 && average <=49);

 printf ("Grade D");

 if(average<=0&& average <=29);

 printf ("Grade F");

 return 0;
 }