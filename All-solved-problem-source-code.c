 
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,c;
 scanf("%d %d %d ",&a,&b,&c);
 if(a>b && a>c)
 {
    printf("%d eh o maior",abs(a));
 }
 else if(a<b && b>c)
 {
    printf("%d eh o maior",abs(b));
 }
 else 
 {
     printf("%d eh o maior",abs(c));
 }
    return 0;
}
  

#include<stdio.h>
int main (){
    int a,y,d,m;
    
    scanf("%d",&a);
    m=(a%365)/30;
    y=a/365;
    d=(a%365)%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}

#include <stdio.h>
 
int main() {
int a,b,i,s;
scanf("%d %d",&a,&b);
s=0;
for(i=a;i<=b;i++)
{
    s=s+i;
}
    printf("%d\n",s);
    return 0;
}

#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    if (a>0 && a<=12)
    {
        if(n==1)
        {
            printf("January");
        }
        else if(n==2)
        {
             printf("February");
        }
        else if(n==3)
        {
             printf("March");
        }
        else if(n==4)
        {
             printf("April");
        }
        else if(n==5)
        {
             printf("May");
        }
        else if(n==6)
        {
             printf("June");
        }
        else if(n==7)
        {
             printf("July");
        }
        else if(n==8)
        {
             printf("August");
        }
        else if(n==9)
        {
             printf("september");
        }
        else if(n==10)
        {
             printf("October");
        }
        else if(n==11)
        {
             printf("November");
        }
        else if(n==12)
        {
             printf("December");
        }
    }
    else 
    {
        return;
    }
    return 0;
}

#include <stdio.h>
 

 
int main() {
 
   float a;
   scanf ("%f",&a);
   if(a<0&& a>100)
   {
       printf("Fora de intervalo\n");
   }
    else if(a>25 && a<=50)
   {
       printf("Intervalo (25,50]\n");
   }
   else if(a>=0 && a<=25)
   {
       printf("Intervalo [0,25]\n");
   }
   else
   {
       printf("Intervalo (75,100]\n");
   }
    return 0;
}
#include <stdio.h>
 #include <math.h>
int main() {
 
   double a,b,c,d,x,y;
   scanf("%lf %lf %lf",&a,&b,&c);
   d=(b*b)-4*a*c;
   if (d<0 || a==0)
   {
       printf("Impossivel calcular");
   }
 else 
 {
     x=((-b)+sqrt((b*b)-4*a*c))/(2*a);
     y=((-b)-sqrt((b*b)-4*a*c))/(2*a);
     printf("R1 = %.5lf\n",x);
      printf("R2 = %.5lf\n",y);
 }
    return 0;
}

#include <stdio.h>
int main() {
    float n,salary,bonus;
    int persentage ;
    scanf("%f",&n);
    
    if(n>=0 && n<=400.00)
    {
    salary=n+(n*0.15);
    bonus = salary -n;
    persentage = 15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salary,bonus,persentage);
    }
       else if(n>=400.01 && n<=800.00)
    {
    salary=n+(n*0.12);
    bonus = salary -n;
    persentage = 12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salary,bonus,persentage);
    }
   else if(n>=800.01 && n<= 1200)
    {
    salary=n+(n*0.10);
    bonus = salary -n;
    persentage = 10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salary,bonus,persentage);
    }
    else if(n>=1200.01 && n<= 2000)
    {
    salary=n+(n*0.07);
    bonus = salary -n;
    persentage = 7;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salary,bonus,persentage);
    }
    else 
    {
    salary=n+(n*0.04);
    bonus = salary -n;
    persentage = 4;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%",salary,bonus,persentage);
    }
return 0;
    
}
#include <stdio.h>
 
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && b>c)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,b,a,a,b,c);
    }
     else if (a>c && c>b)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,c,a,a,b,c);
    }
    else if (b>a&& a>c)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,a,b,a,b,c);
    }
    else if (b>c && c>a)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,c,b,a,b,c);
    }
     else if (c>a && a>b)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,a,c,a,b,c);
    }
    else if (c>b && b>a)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,a,b,c);
    }
 
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("%.2f\n",a[j]);
    }
    return 0;

}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
    int i;
    int hasUpper,hasLower,hasDigit;
    char user[25],password[25];
    hasUpper=hasLower=hasDigit=0;
    printf("what is your username");
    scanf("%s",&user);
    printf("please creat a password");
    scanf("%s",&password);
    for(i=0;i< strlen(password);i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit =1;
            continue ;
        }
        if(isupper(password[i]))
        {
            hasUpper=1;
            continue;
        }
        if(islower(password[i]))
        {
            hasLower =1;

        }
    }
    if((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nExcellent work, %s,\n,user");
        printf("Your password has upper and lower case ");
        printf("letters and a number.");
    }
    else 
    {
        printf("\n\nYou should consider a new password, %s,\n",user);
        printf("one that uses upper and lowercase letter");
        printf("and a number.");
    }
    return 0;

 }