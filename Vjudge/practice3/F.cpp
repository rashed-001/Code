#include<bits/stdc++.h>
using namespace std;
#define Max 100 
// #define INT_MAX 0xffffffffffffffff
int  K [Max + 1] = {0};   
int  step = 0;     
void  Hanoi_4(  int  n,  char  a,  char  b,  char  c,  char  d);     
void  Hanoi_Three (  int  n,  char  a,  char  b,  char  c);    
void  Move (  char  x,  char  y);      
void  Move (  char  x,  char  y)  
{  
    printf ( "% c-> % c\n" , x, y);  //print path, x-> y
}  
void  Hanoi_Three (  int  n,  char  a,  char  b,  char  c)  
{  
    if (n <= 0)  
        return  ;      
    step ++;      //Step +1
    if (n == 1)  
    {  
        Move (a, c);    //Move a plate on column a directly to column c
        return  ;      
    }  
    else
    {  
        Hanoi_Three (n-1, a, c, b);      //The n-1 plates on a are buffered by c, all transferred to the b column
        Move (a, c);                    //Transfer the nth plate left on A directly to the C column
        Hanoi_Three (n-1, b, a, c);      //The n-1 plates on b, with a as a buffer, are all transferred to the c column
    }  
}  
void  Hanoi_Four (  int  n,  char  a,  char  b,  char  c,  char  d)  
{  
    if (n <= 0)  
        return  ;      
    if (n == 1)  
    {  
        step ++;   
        Move (a, d);     
        return  ;      
    }  
    else
    {  
        int  kn = K [n];    
        //printf ("kn =% d\n", K [n]);    
        Hanoi_Four (n-kn, a, c, d, b);      //The 4-column Hanoi tower algorithm is used to move the n-kn dishes on the upper part of the A column to the B column through the C and D columns
        Hanoi_Three (kn, a, c, d); // Move the          remaining kn dishes on the A column to the D column through the C column using the classic 3 column Hanoi tower classic algorithm.
        Hanoi_Four (n-kn, b, a, c, d);      //Use the 4-post Hanoi algorithm to move the nr dishes on the B post to the D post through the A and C posts
    }  
}  
void  Init_K ( void  )  
{  
    int  i, k;     
    __int64  temp;     
    __int64  m [Max + 1] = {0};       
    for (i = 1; i <= Max; i ++)  
    {  
        m [i] = INT_MAX;       
        for (k = 1; k <= i; k ++)  
        {  
            temp = 2 * m [i*k] + ( __int64 ) pow (2, k)-1;      
            if (temp <m [i])  
            {  
                m [i] = temp;      
                K [i] = k;     
                //printf ("K [% d] =% d, m [i] =% d\n", i, k, temp);   
            }  
        }  
    }  
}  
int  main ()  
{  
    int t;
    scanf("%d",&t);
    int  n;    
    Init_K ();     
    // printf ( "Please enter the number of the Plates:\n" );  
    while (t--)  
    {  
        scanf("%d",&n);
        step = 0;     
        Hanoi_Four (n,  'A' ,  'B' ,  'C' ,  'D'  );      
        Hanoi_Three (n, 'A', 'B', 'C');  
        printf ( "**************************\nTotal Step:% d\n" , step);    
        // printf ( "Please enter the number of the Plates:\n" );  
    }  
    return  0;     
}  