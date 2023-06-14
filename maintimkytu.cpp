#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	char s1[25];
	strcpy(s1,"HelloNguyenTuaan");
	char *p=strchr(s1,'l');
	if (p!=NULL)
		{cout<<"tim thay 'l' o vi tri thu "<< (p-s1);cout<<endl;
		cout<<*p<<endl;
		cout<<(p+1);
		cout<<p;
		}
	else {cout<<"Khong tim thay 'l'";
		}
	cout<<endl;
	char s2[95];
	strcpy(s2,"quanh nam buon ban o mom song");
	char *m=strstr(s2,"ban");
	if (m!=NULL)
		{cout<<"tim thay \"ban\" o vi tri thu "<<(m-s2);
		}
	else {cout<<"Khong tim thay \"ban\" trong chuoi";
		}
	return 0;
}
