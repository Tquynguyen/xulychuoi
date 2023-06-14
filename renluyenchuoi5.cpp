#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Đê bai: Viết chương trình nhập vào họ và tên của một người, cắt bỏ các khoảng trống không cần thiết (nếu có), tách tên ra  khỏi họ và tên, 
in tên và họ lên màn hình. Chú ý đến trường hợp cả họ và  tên chỉ có một 
từ */

using namespace std;
void Xoakhoangtrang(char *&str)
	{int j=0;
	for (int i=0;i<strlen(str)-1;i++)
	{if (str[i]!=' ')
	{str[j]=str[i];
	j++;}
	else if(j>0&&str[i+1]!=' ')
	{str[j]=str[i];
	j++;}
	}
	str[j]='\0';}
char *layten(char *str)
	{int k;
	for (int i=strlen(str)-1;i>=0;i--)
	{if (str[i]==' ')
	{ k=i+1;
	break;}
	}
	int i2=0;
	char *strTen=new char[35];
	for (int i=k;i<strlen(str);i++)
	{strTen[i2]=str[i];
	i2++;
	}
	strTen[i2]='\0';
	return strTen;
	}
char *layho(char *str)
	{int k;
	for (int i=0;i<strlen(str);i++)
	{if (str[i]==' ')
	{ k=i;
	break;}
	}
	int i2=0;
	char *strHo=new char[35];
	for (int i=0;i<k;i++)
	{strHo[i2]=str[i];
	i2++;
	}
	strHo[i2]='\0';
	return strHo;
	}
	
int main(int argc, char** argv) {
	char *str=new char [255];
	strcpy(str,"    Nguyen              Thi                  Lung             Linh        Long  Lanh             ");
	cout<<"chuoi ban dau la:"<<str<<endl;
	cout<<"chieu dai chuoi ban dau la:"<<strlen(str)<<endl;
	Xoakhoangtrang(str);
	cout<<"chuoi sau khi xoa khoang trang la:"<<str<<endl;
	cout<<"chieu dai chuoi sau khi xoa khoang trang la:"<<strlen(str)<<endl;
	char *ten=layten(str);
	cout<<"Ten = "<<ten<<endl;
	cout<<"do dai cua ten la:"<<strlen(ten)<<endl;
	char *ho=layho(str);
	cout<<"Ho = "<<ho<<endl;
	cout<<"do dai cua ten la:"<<strlen(ho)<<endl;
	return 0;
}
