#include<iostream.h>
#include<conio.h>
#include<process.h>
void sort(long int arr[],long int n)
{
    int i, j, pos,temp;


    for (i = 0; i < n-1; i++)
    {

	     pos = i;
		 for (j = i+1; j < n; j++)
		 if (arr[j] < arr[pos])
				 pos = j;
		 temp=arr[pos];
		 arr[pos]=arr[i];
		 arr[i]=temp;
    }
}


void mrs_sobhas_idea(long int array[],int n,int query)
{
   int flag=-1;
   for(int i=n-1;i>=0;i--)
   {
	 if(array[i]>=query)
		 {
			 array[i]-=query;
			 flag=0;
			 break;
	     }
     else flag=-1;
   }
    if(flag==-1)
		{
		 cout<<"There are no curtains in this shop that match your requirements";
		     exit(1);
	    }

}

void kamals_idea(long int array[],int n,int query)
{
   int flag=-1;
   for(int i=0;i<n;i++)
   {
	 sort(array,n);
	 if(array[i]>=query)
		 {
			 array[i]-=query;
			 flag=0;
			 break;
	     }
     else flag=-1;
   }
    if(flag==-1)
		{
		 cout<<"There are no curtains in this shop that match your requirements";
		     exit(1);
	    }

}




void main()
{
	clrscr();
	long int curtainSize[1000],totalCurtains,totalQueries,querySize[1000],i,j,choice;
	cout<<"\nEnter the number of curtains in the shop: ";
	cin>>totalCurtains;
	cout<<"\nEnter the sizes of the curtains present: ";
	for ( i=0;i<totalCurtains;i++)
	{
		cin>>curtainSize[i];
	}
	cout<<"\nChoose from 1-3:\n1:Mrs.Sobha's idea\n2:Kamal's idea\n3:Jasmine's idea \n";
	cin>>choice;
	if(choice==1)
		{
			cout<<"Enter the number of curtains required: ";
			cin>>totalQueries;

			for( i=0;i<totalQueries;i++)
			{
				cout<<"\nEnter the size of the curtain required one by one: ";
				cin>>querySize[i];
				mrs_sobhas_idea(curtainSize,totalCurtains,querySize[i]);
				cout<<"\nThe size of the curtains in the shop are: ";
				for (j=0;j<totalCurtains;j++)
					cout<<curtainSize[j]<<" ";
			}
		}
		else if (choice==2)
			{
			cout<<"Enter the number of curtains required: ";
			cin>>totalQueries;

			for( i=0;i<totalQueries;i++)
			{
				cout<<"\nEnter the size of the curtain required one by one: ";
				cin>>querySize[i];
				kamals_idea(curtainSize,totalCurtains,querySize[i]);
				cout<<"\nThe size of the curtains in the shop are: ";
				for (j=0;j<totalCurtains;j++)
					cout<<curtainSize[j]<<" ";
			}
		}
		else if (choice==3)
		{
			cout<<"Enter the number of curtains required: ";
			cin>>totalQueries;

			for( i=0;i<totalQueries;i++)
			{
				cout<<"\nEnter the size of the curtain required one by one: ";
				cin>>querySize[i];
				sort(curtainSize,totalCurtains);
				mrs_sobhas_idea(curtainSize,totalCurtains,querySize[i]);
				cout<<"\nThe size of the curtains in the shop are: ";
				for (j=0;j<totalCurtains;j++)
					cout<<curtainSize[j]<<" ";
			}
		}


	getch();
}


