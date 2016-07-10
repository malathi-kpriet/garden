# garden
#include <stdio.h>
int main(){
   char c;
    int i,j,n,noc,nod,asc=97,days;;
	 	char nam[100];
	  printf("Enter the value n ");
		scanf("%d",&n);        
		 noc=2*n;
		nod=noc-1;
		    for(i=0;i<noc;i++)
		       	{
				nam[i]=asc;
				asc++;
			}
			 days=nod;
			 j=2*n-1;
			 while(days!=0)
			 {
				printf("\n The children pairs for day %d",days);
				for(int i=0;i<2*n;i++)
				{
					printf("\n %c %c",nam[i],nam[j]);
					j--;
				}
				for(int i=0;i<2*n;i++)
					{ 
					char temp;
						if(i==0)
						{
							temp=nam[i];
						}
					nam[i]=nam[i+1];
					if(i==(2*n)-1)
						{
						nam[i]=temp;
						}
					}
					days--;
			 }
		return 0;
	}

