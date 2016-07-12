
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
int main ()
{
	char keyword[5][5];
	char encrypted[5][5];
	char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char ealph[25];
	
	 
    
    cout << "That is it \n"; 
    
	
	std::string omar;
	  cout<<"Insert your keyword  ";
	  std::getline (std::cin,omar);
	  
	  
	  int j = 0;
	  int m=0;
	  int a=0;
	  int in=9;
	 for(j=0;j<=omar.length();j++)
	 {
		 if(omar[j]==alph[in+m])
		 {
			 j=0;
			 m++;
			 
		 }
		 
	 }
	 a=in+m+1;
	printf(" alpha is %c",alph[a]);
	int v = 0;
	 for (j=0;j<=25;j++)
	 {
		 if(j==a)
		 {
			 
		 continue;
			}
		 else
		 {
			 ealph[v]=alph[j];
			 v++;
		 }
	 }
	 for (j=0;j<=24;j++)
	 {
		 printf(" elaph [%d] == %c \n ",j,ealph[j]);
	
	}
	
	
	 for (j=0;j<=25;j++)
	 {
		 printf(" elaph [%d] == %c \n ",j,ealph[j]);
	
	}
	int i = 0;
	char vv [26];
	
	for (i=0;i<=25;i++)
	vv[i]='0';
	
	 for(j=0;j<=omar.length();j++)
	 {
		 
		 for (i=0;i<=25;i++)
		 if(omar[j]==alph[i])
		 {
			 vv[j]=alph[i];
			 break;
		 }
		 
	 }
	
	for (i=0;i<=25;i++)
	{
		if(vv[i]=='0')
		break;
		printf(" vv[%d] = %c ",i,vv[i]);
	}
	 int xx = 0 ;
	 int yy = 0 ;
	 for(xx=0;xx<5;xx++)
	for(yy=0;yy<5;yy++)
	keyword[xx][yy]='0';
			printf("start");
			j=0;
			int ksd=0;
			int o = 0 ;
			i=0;
			printf("omar1");
	for(xx=0;xx<5;xx++)
	for(yy=0;yy<5;yy++)
	{
		if(o==0)
		{
		if(j==omar.length()-1)
		{
			printf("done");
			o=1;
		}
		keyword[xx][yy]=omar[j];
		j++;
		}
		else
		{
				bn:;
			{
			for(j=0;j<=omar.length();j++)
			{
			 
			 
			 if(omar[j]==ealph[i])
			 {
				// vv[j]=ealph[i];
				 ksd=1;
				 break;
			 }
			 else
			 ksd=0;
			 
			}
		 if(ksd==0)
		 {
			 
			 printf("Put keyword");
			 keyword[xx][yy]=ealph[i];
		 }
		 else
		 {
			 printf("Goto%c",ealph[i]);
			 i++;
			 goto bn;
		 }
		 
			}
		i++;
		}
	
	}
	
	printf("\n");
	for(xx=0;xx<5;xx++)
	{
	for(yy=0;yy<5;yy++)
	{
	printf("kw[%d][%d]=%c\t",xx,yy,keyword[xx][yy]);	
	}
	printf("\n");
	}
	
	
	
		std::string omar1;
		char omar2[25];
	  cout<<"Insert your keyword  ";
	  printf("omar1");
	  std::getline (std::cin,omar1);
	  printf("omar1");
	  printf("omar1");
	  int lkl ; 
	  if((omar1.length()%2)!=0)
	  {
		  omar2[omar1.length()]='x';
		  lkl=omar1.length() +1;
		}
	  else 
	  {
		  lkl=omar1.length() ;
	  }
	  printf("omar2");
	    for(j=0;j<omar1.length();j++)
	  omar2[j]=omar1[j];
		for(j=0;j<lkl;j++)
		printf(" omar2 [%d] = %c ", j,omar2[j]);
		
		printf(" lkl = %d ",lkl);
		
	int x1,y1,x2,y2;
	
	for (j=0;j<=(lkl/2);j++)
	printf("\t%d\t",j);
	printf("\n");
	int jj=0;
	for (jj=0;jj<(lkl/2);jj++)
		{
			j=jj*2;
			
			for(xx=0;xx<5;xx++)
			for(yy=0;yy<5;yy++)
			{
				if(omar2[j]==keyword[xx][yy])
				{
					x1=xx;
					y1=yy;
				}
			}
			
			for(xx=0;xx<5;xx++)
			for(yy=0;yy<5;yy++)
			{
				if(omar2[j+1]==keyword[xx][yy])
				{
					x2=xx;
					y2=yy;
				}
			}
			
			if(x1==x2)
			{
				if(x1==4)
				{omar2[j]=keyword [x1][0];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j,omar1[j],x1,0,keyword[x1][0]);}
				else
				{omar2[j]=keyword [x1][y1+1];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j,omar1[j],x1,y1+1,keyword[x1][y1+1]);}
				if(x2==4)
				{omar2[j+1]=keyword [x2][0];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j+1,omar1[j+1],x1,0,keyword[x2][0]);}
				else
				{omar2[j+1]=keyword [x2][y2+1];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j+1,omar1[j+1],x2,y2+1,keyword[x1][y2+1]);}
			}
			else if(y1==y2)
			{
				
				if(y1==4)
				{omar2[j]=keyword [0][y1];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j,omar1[j],0,y1,keyword[0][y1]);}
				else
				{omar2[j]=keyword [x1+1][y1];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j,omar1[j],x1+1,y1,keyword[x1+1][y1]);}
				if(y2==4)
				{omar2[j+1]=keyword [0][y2];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j+1,omar1[j+1],0,y2,keyword[0][y2]);}
				else
				{omar2[j+1]=keyword [x2+1][y2];printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j+1,omar1[j+1],x1+1,y2,keyword[x2+1][y2]);}
			}
			else
			{
				omar2[j]=keyword [x1][y2];
				omar2[j+1]=keyword [x2][y1];
				{printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j,omar1[j],x1,y2,keyword[x1][y2]);}
				{printf("omar2[%d] = %c = Keyword [%d][%d] = %c \n",j+1,omar1[j+1],x2,y1,keyword[x2][y1]);}
			}
			
			
			
	}		
		printf("\n");
	for(xx=0;xx<5;xx++)
	{
	for(yy=0;yy<5;yy++)
	{
	printf("kw[%d][%d]=%c\t",xx,yy,keyword[xx][yy]);	
	}
	printf("\n");
	}
	
		
		for (jj=0;jj<(lkl/2);jj++)
		{
			j=jj*2;
			 printf("%c%c\n",omar2[j],omar2[j+1]);
			 
		}
	
	
	
		
}	

