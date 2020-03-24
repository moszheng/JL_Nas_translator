#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char jl[300];
	int lenthstr,lenth;
	
	cout<<"**********************"<<endl<<endl;//sourcetreetestz
	cout<<"貼上 Mac 路徑 : "<<endl<<endl;
	
	cin.getline(jl,300); //純cin吃到空格就會終止
	lenth = strlen(jl);
	
	cout<<endl<<endl<< "**********************"<<endl;
	cout<<endl<<"Windows 路徑 : "<<endl<<endl<<endl<<"\\\\JLDESIGNTPE";
	
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
