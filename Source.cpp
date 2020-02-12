#include<iostream>

using namespace std ;
int main()
{
	int Arrays[10]={55,66,1,3,9,10,88,77,11,13} ;
	int temp=0 ;
	int k=0 ;
	int min=Arrays[0] ;
	int m=0 ;
	for(int i=0 ; i<10 ; i++)
	{
		
		for(int j=k ; j<10 ; j++)
		{
			if(min>Arrays[j])
			{
				min=Arrays[j];
				m=j;
			}
		}
		swap(Arrays[m],Arrays[k]) ;
		k++;
		min=Arrays[k]; 

	}


	for(int i=0 ; i<10 ; i++)
	{
	cout<<"Sorted Arrays is : " << Arrays[i] << endl ;
	}
	return 0 ;
}