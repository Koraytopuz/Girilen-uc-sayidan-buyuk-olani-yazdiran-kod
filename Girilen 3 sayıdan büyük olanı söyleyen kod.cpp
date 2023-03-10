#include<iostream> 
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Lutfen birinci sayiyi giriniz"<< endl;
	cin>> x ;
    cout<<"Lutfen ikinci sayiyi giriniz"<< endl;
	cin>> y ;
	cout<<"Lutfen ucuncu sayiyi giriniz"<< endl;
	cin>> z ;
    if(x>y&&y>z)
{ 
      cout<<"ilk sayi en buyuktur"<< endl;
}
	  else if (y>x&&x>z)  
{
      cout<<"ikinci sayi en buyuktur"<< endl;
}
      else 
{ 
      cout<<"ucuncu sayi en buyuktur"<< endl;
}
}
