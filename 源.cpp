#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    char arr[20]="\0";
//    int a,i,j;
//    scanf("%d",&a);
//    for(i=0;i<a;i++)
//    {
//    scanf("%s",&arr);
//    int n=strlen(arr);
//    int A=0; 
//         for(j=0;j<n;j++)
//         {
//           if(arr[j]>='0'&&arr[j]<='9')
//           A++;
//         }
//    printf("%d\n",A);
//    }
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a,i;
//    scanf("%d",&a);
//    getchar();
//    for(i=0;i<a;i++)
//    {
//        char s;
//        int n=0;
//        do
//        {
//        s=getchar();
//        if(s>='0'&&s<='9')
//        n++;
//        }while(s!='\n');
//        printf("%d\n",n);
//    }
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    char a;
//    int i=0;
//    do
//    {
//        a=getchar();
//        if(a>='0'&&a<='9')
//        i++;
//    }while(a!='\n'); 
//    printf("%d",i);
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//
//int jiaohuan(int *a,int *b)
//{
// int c;
//    c=*a;
//    *a=*b;
//    *b=c;
//}
//
//int main()
//{
// int a=1,b=2;
// printf("%d %d\n",a,b);
// jiaohuan(&a,&b);
// printf("%d %d",a,b);
// return 0;
//}

//#include<stdio.h>
//
//int change(char arr[])
//{
//	int n=0,i;
//	for(i=0;arr[i]!='\0';i++)
//	{
//		printf("%c\n",arr[i]);
//	n++;	
//	arr[i]='1';
//	}
//	
//	return n;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len=change(arr);
//	printf("%d\n",len);
//	printf("%s",arr);
//	return 0;
//}



//#include<stdio.h>
//
//int change(int arr[])
//{
//	int n=0,i;
//	for(i=0;arr[i]!='\0';i++)
//	{
//		printf("%c\n",arr[i]);
//	n++;	
//	}
//	
//	return n;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len=change(arr);
//	printf("%d",len);
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[]={'a','b','c'};
//	char arr2[]="abc";
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//#include<stdio.h>
//
//int jiaohuan(int *a,int *b)
//{
//	int c;
//    c=*a;
//    *a=*b;
//    *b=c;
//}
//
//int main()
//{
//	int a=1,b=2;
//	printf("%d %d\n",a,b);
//	jiaohuan(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}


//
//#include <stdio.h>
//
//void print(int n)
//{
//    if(n>9)
//    print(n/10);
//    printf("%d\t",n%10);
//}
//int main()
//{
//        unsigned int num;
//        scanf("%d",&num);
//        print(num);
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void game()//猜数游戏（1--100） 
//{
//	int guss;
//	int computer;
//	computer=rand()%100+1;
//	while(1)
//	{
//    printf("请输入你猜的数字:>");
//	scanf("%d",&guss);
//		if(guss>computer)
//		    printf("猜大了\n");
//		if(guss<computer)
//		    printf("猜小了\n");
//		if(guss==computer)
//		{
//			printf("猜对了\n");
//			break;
//		}
//	 } 
//	
//}
//
//void menu()
//{
//	printf("***********************************\n");
//	printf("********1.play     0.exit**********\n");
//	printf("***********************************\n");
//}
//
//int main()
//{
//	int ret;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&ret);
//	    if(ret==1)
//		{
//			printf("游戏开始\n");
//			game();
//		} 
//		else if(ret==0)
//		    printf("退出游戏\n");
//		else
//		    printf("选择错误\n"); 
//    }
//    while(1); 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	in:
//	printf("123");
//	goto in;
//	return 0;
// } 




//#include<stdio.h>
//
//int main()
//{
//	int a=0,b=0,c=0,d=0;
//	char arr;
//    	while((arr=getchar())&&arr!='\n')
//	{
//		    if(((arr>='a')&&(arr<='z'))||((arr>='A')&&(arr<='Z')))
//          a++;
//        else if((arr>='0')&&(arr<='9'))
//          b++;
//        else if(arr==' ')
//          c++;
//        else
//          d++;
//		
//	}
//	printf("%d %d %d %d",a,b,c,d);
//	return 0;
//} 


//#include<stdio.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int n,i,x=1;
//      scanf("%d",&n);
//      for(x=1;x<n;x++)
//      {
//      	int a=0;
//          for(i=1;i<x;i++)
//          {
//              if(x%i==0)
//              a=a+i;
//          }
//      
//        if(x==a)
//          printf("%d ",x);
//      }
//      
//      
//	  
//	  /*********End**********/ 
//       return 0;
//	}



//#include<stdio.h>
//
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int a,b,c,s;
//      for(a=1;a<10;a++)
//      {
//          for(b=0;b<10;b++)
//          {
//              for(c=0;c<10;c++)
//              {
//                  s=100*a+10*b+c;
//                  if(s==(a*a*a+b*b*b+c*c*c)) 
//                  printf("%d ",s);
//              }
//          }
//      }
//	  
//	  /*********End**********/ 
//       return 0;
//	}
//


//#include<stdio.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  
//	  int n,i,s=0,t=1;
//      scanf("%d",&n);
//      if(n<0)
//        printf("%d",s);
//      else if(n==0)
//        {
//            s=1;
//            printf("%d",s);
//        }
//      else
//        {
//           for(i=1;i<=n;i++)
//                {
//                   t=t*i;
//                   s=s+t;
//                }
//            printf("%d",s);
//	    }
//      /*********End**********/ 
//       return 0;
//	}


//#include<stdio.h>
//
//int ji(int x)
//{
//    int a;
//    if(x<10)
//    return x;
//    else
//    a=(x%10)*ji(x/10);   
//    return a;
//}
//
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int a;
//      scanf("%d",&a);
//	  printf("%d",ji(a));
//	  /*********End**********/ 
//       return 0;
//	}


//#include<stdio.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int n,average;
//      printf("the number of students:");
//      scanf("%d",&n);
//      printf("the scores:");
//      if(n<=0)
//        average=0;
//      else
//      {
//          int i,b,a=0;
//          for(i=1;i<=n;i++)
//          {
//          scanf("%d",&b);
//          a=a+b;
//          }
//          average=a/n;
//      }
//      printf("average=%d",average);
//	  
//	  /*********End**********/ 
//       return 0;
//	}



//#include<stdio.h>
//
//int main()
//{
//	int a=0,b=0,c=0,d=0;
//	char arr[]="0";
//    scanf("%s",&arr);
//    int i=0;
//    	while(arr[i]!=0)
//	{
//		if(((arr[i]>='a')&&(arr[i]<='z'))||((arr[i]>='A')&&(arr[i]<='Z')))
//          a++;
//        else if((arr[i]>='0')&&(arr[i]<='9'))
//          b++;
//        else if(arr[i]==' ')
//          c++;
//        else
//          d++;
//		i++;
//	}
//	printf("%d %d %d %d",a,b,c,d);
//	return 0;
//} 



//
//#include<stdio.h>
//
//int yue(int m,int n)
//{
//    int a;
//    while(m%n!=0)
//    {
//    a=m%n;
//    m=n;
//    n=a;
//    }
//    return n;
//}
//
//int bei(int m,int n)
//{
//    return (m*n)/(yue(m,n));
//}
//
//
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int m,n,a,b;
//      scanf("%d %d",&m,&n);
//      a=yue(m,n);
//      b=bei(m,n);
//      printf("最大公约数是:%d\n最小公倍数是:%d",a,b);
//	  
//	  /*********End**********/ 
//       return 0;
//	}
//



//int my(char* n)
//{
//	int a=0;
//	while(*n!=0)
//	{
//		a++;
//		n++;
//	}
//	return a;
//}
//
//
//int main()
//{
//	char arr[]="ab0c0";
//	printf("%s\n",arr);
//	printf("%d",my(arr));
//	return 0;
//}



//#include<stdio.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int a;
//      printf("Enter item number:\n");
//      scanf("%d",&a);
//      float b;
//      printf("Enter unit price:\n");
//      scanf("%f",&b);
//      int z,x,c;
//      printf("Enter purchase date (mm/dd/yy):\n");
//      scanf("%d/%d/%d",&z,&x,&c);
//      printf("Item Unit Purchase\n");
//      printf("%-9d$ %-9.2f%02d%02d%02d\n",a,b,z,x,c);
//	  
//	  /*********End**********/ 
//       return 0;
//	}
//	
//	



//#include<stdio.h>
//#include<math.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  float a,b,c;
//      printf("Please enter the coefficients a,b,c:\n");
//      scanf("%f,%f,%f",&a,&b,&c);
//      if((b*b-(4*a*c))>=0)
//      printf("x1=%.4f, x2=%.4f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
//	  else
//      printf("error!\n");
//	  /*********End**********/ 
//       return 0;
//	}



//#include<stdio.h>
//#include<math.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int a;
//      float b;
//      scanf("%d,%f",&a,&b);
//      if(a==0)
//      {
//        if(b<=1)
//        printf("Price: %.2f\n",10.00);
//        else if((int)b!=b)
//        printf("Price: %.2f\n",3*floor(b)+10);
//        else
//        printf("Price: %.2f\n",3*(b-1)+10);
//      }
//      else if(a==1)
//      {
//        if(b<=1)
//        printf("Price: %.2f\n",10.00);
//        else if((int)b!=b)
//        printf("Price: %.2f\n",4*floor(b)+10);
//        else
//        printf("Price: %.2f\n",4*(b-1)+10);
//      }
//      else if(a==2)
//      {
//        if(b<=1)
//        printf("Price: %.2f\n",15.00);
//        else if((int)b!=b)
//        printf("Price: %.2f\n",5*floor(b)+15);
//        else
//        printf("Price: %.2f\n",5*(b-1)+15);
//        
//      }
//      else if(a==3)
//      {
//        if(b<=1)
//        printf("Price: %.2f\n",15.00);
//        else if((int)b!=b)
//        printf("Price: %.2f\n",6.5*floor(b)+15);
//        else
//        printf("Price: %.2f\n",6.5*(b-1)+15);
//      }
//      else if(a==4)
//      {
//        if(b<=1)
//        printf("Price: %.2f\n",15.00);
//        else if((int)b!=b)
//        printf("Price: %.2f\n",10*floor(b)+15);
//        else
//        printf("Price: %.2f\n",10*(b-1)+15);
//      }
//      else
//      printf("Error in Area\nPrice: 0.00");
//	  
//	  /*********End**********/ 
//       return 0;
//	}

//int main()
//{
//	int a;
//	char arr[]="abc";
//	a=strlen(arr[]);
//	printf("%d\n",a);
//	return 0;
//}




//int main()
//{
//	int a=1,b=1,c;
//	for(a=1;a<10;a++)
//	{
//		for(b=1;b<10;b++)
//		{
//		c=a*b;
//		printf("%dx%d=%d\t",b,a,c);
//		if(a==b)
//		{
//			printf("\n");
//		    break;
//    	}
//        }
//	}
//	return 0;
//
//}

//#define EOF A
//int main()
//{
//	int ch=0;
//	while((ch=getchar())!='1')
//	{
//		putchar(ch);
//	}
//}


//int main()
//{
//    int ch;
//	ch=getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ret=0;
//	char p[20];
//	printf("请输入密码:>");
//	scanf("%s",&p);
//	getchar();
//	printf("请确认(Y/N):>");
//	ret=getchar();
//	if(ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
