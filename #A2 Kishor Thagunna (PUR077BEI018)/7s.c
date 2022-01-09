 //using switch case

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
    int a,b,r; 
    printf("Enter two numbers:\n"); 
    scanf("%d%d",&a,&b); 
    char c; 
    printf("Enter arithematic operator\n"); 
    scanf(" %c",&c); 
    switch(c)
    {
        case '*': 
        r=a*b; 
        break; 
        case '/': 
        r=a/b; 
        break;  case '%': 
        r=a%b; 
        break; 
        case '+': 
        r=a+b; 
        break; 
        case '-':
        r=a-b;
        break; 

    } 
    printf("%d%c%d is %d",a,c,b,r); 
    getch(); 



 }
