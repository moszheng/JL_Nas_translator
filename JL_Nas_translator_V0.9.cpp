#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char jl[300];
	int lenthstr,lenth;
	
	cout<<"**********************"<<endl<<endl;//sourcetreetestz
	cout<<"�K�W Mac ���| : "<<endl<<endl;
	
	cin.getline(jl,300); //��cin�Y��Ů�N�|�פ�
	lenth = strlen(jl);
	
	cout<<endl<<endl<< "**********************"<<endl;
	cout<<endl<<"Windows ���| : "<<endl<<endl<<endl<<"\\\\JLDESIGNTPE";
	
	for (int i=40 ; i < lenth ; i++){
	
		if (jl[i] == '/' ){

			cout << "\\" ;
		}

		else 
		cout << jl[i] ;
   }
	
	cout<<endl<<endl<<endl<<"**********************"<<endl<<endl<<endl;
	system ("pause"	);
	
}
