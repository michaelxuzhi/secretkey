#include<iostream.h>
#include<conio.h>
#include<string.h>
char jmjg(char);
int main()
{
	char zf[20];
	char jm[20];
	cout<<"请输入要加密的字符：\t";
    cin>>zf;
	int i=strlen(zf);
	for(int i1=i-1;i1>=0;i1--)
			{
				jm[i1]=jmjg(zf[i1]);
			}
				jm[i]='\0';
				cout<<"加密后的字符：";
				cout<<jm<<endl;
				return 0;
}
char  jmjg(char a)
{
	char m;
	switch(a%3)
          {
            case 0 :m=a+5;
				break;
			case 1 :m=a+4;
				break;
            case 2 :m=a+2;
				break;
          }
	return m;
}
