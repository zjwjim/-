#include <Windows.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
	bool x=false;
    int time;
    char character;
    char file[1000];

	cout<<"�������ļ�����";
	cin>>file; 
    cout<<"��������ʱ��";
    cin>>time;

    FILE *fp = fopen(file, "r");
    
//	����ʱ5��
	for(int k=5;k>=0;k--)  
	{
		cout<<k<<"���ʼ����"<<endl;
		Sleep(1000);
		system("cls");
	}
	cout<<"������..."<<endl;

//	��ʼ���� 
	while(!feof(fp))
	{
		character=fgetc(fp);
		if(character=='('||character==')') 
		{
			x=!x;
		}
		else
		{
			keybd_event((BYTE)character, 0, 0, 0);
    		keybd_event((BYTE)character, 0, KEYEVENTF_KEYUP, 0);
		}
		if(x==false&&character!='\n'&&character!='/')
        {
        	Sleep(time);
		}	
	}
	system("cls"); 
	cout<<"������"<<endl;
	system("pause");
	return 0;
}

        
	

