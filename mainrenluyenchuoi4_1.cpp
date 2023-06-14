#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

bool Nam_Nu(char *str);	  
int main(int argc, char** argv) {
	int n; 
	cout<< "Moi ban nhap so sinh vien:";
	cin>>n;
	char **str=new char*[n];
	for (int i=0;i<n;i++)
	{*(str+i)=new char[255];
	cout<<"Moi ban nhap sinh vien thu "<<i+1<<" theo cu phap: ";
	/* cu phap nhap la: masv;ho va ten sinh vien;gioi tinh (luu y la sau dau ";"khong co khoang cach */
	cin.ignore();
	gets(*(str+i));}
	int sonam=0;
	int sonu=0;
	for (int i=0;i<n;i++)
	{cout<< *(str+i)<<endl;
	Nam_Nu (*(str+i));
	if (Nam_Nu (*(str+i))== false)
	sonam++;
	else sonu++;
	}
	cout<<"So nam trong mang la: "<<sonam<<endl;
	cout<<"So nu trong mang la: "<<sonu;
	return 0;
}
bool Nam_Nu(char *str)
	{int j=0;
	for (int i=strlen(str)-1;i>=0;i--)
	{if (str[i]==';')
	 {j=i+1;
	 break;}
	 }
	  int i2=0;
	  char sex[5];
	  for (int i=j;i<=strlen(str)-1;i++)
	  {sex[i2]=str[i];
	  i2++;}
	  sex[i2]='\0';
	  if (strcmp(sex,"male")==0)
	  return false;
	  return true;}
