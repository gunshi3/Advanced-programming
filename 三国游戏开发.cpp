#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;
class General
{
	public:
		General();
		void set_name();
		void set_age_force_intelligence_strength();
		void show();
		string name;
		int age;
		int force;
		int intelligence;
		int strength;
};
General::General()
{
	name='0';
	age=0;
	force=0;
	intelligence=0;
	strength=0;
}
void General::set_name()
{
	cin>>name;
}
void General::set_age_force_intelligence_strength()
{
	cin>>age>>force>>intelligence>>strength;
}
void General::show()
{
	cout<<setiosflags(ios::left)<<setw(5)<<name<<setw(5)<<age<<setw(5)<<force<<setw(5)<<intelligence<<setw(5)<<strength<<endl;
}
void input_prompt()
{
	cout<<"��ѡ������Ҫʵ�ֵĹ���"<<endl;
	cout<<"1. �����������н������У�����n>��"<<endl;
	cout<<"2. �������������������У�����n<��"<<endl;
	cout<<"3. ����������н������У�����a>��"<<endl;
	cout<<"4. ������������������У�����a<��"<<endl;
	cout<<"5. �����������н������У�����f>��"<<endl;
	cout<<"6. �������������������У�����f<��"<<endl;
	cout<<"7. �����������н������У�����i>��"<<endl;
	cout<<"8. �������������������У�����i<��"<<endl;
	cout<<"9. �����������н������У�����s>��"<<endl;
	cout<<"10.�������������������У�����s<��"<<endl;
	cout<<"11.�������������佫    ������sn��"<<endl;
	cout<<"12.����������������佫������sa��"<<endl;
	cout<<"13.����������������佫������sf��"<<endl;
	cout<<"14.����������������佫������si��"<<endl;
	cout<<"15.����������������佫������ss��"<<endl;
	cout<<"16.�����佫������insert,��#�������룩"<<endl;
	cout<<"17.ɾ���佫������delete,��#�������룩"<<endl;
	cout<<"18.��������������null��"<<endl;
}
void sort_name1(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].name>a[k].name)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_age1(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].age>a[k].age)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_force1(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].force>a[k].force)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_intelligence1(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].intelligence>a[k].intelligence)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_strength1(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].strength>a[k].strength)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_name2(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].name<a[k].name)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_age2(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].age<a[k].age)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_force2(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].force<a[k].force)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_intelligence2(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].intelligence<a[k].intelligence)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void sort_strength2(General a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int k=i;
		General temp;
		for(int j=k+1;j<n;j++)
		{
			if(a[j].strength<a[k].strength)
			k=j;
		}
		temp=a[k];a[k]=a[i];a[i]=temp;
	}
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void search_name(General a[],int n)
{
	cout<<"������������";
	string na;
	cin>>na;
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(na==a[i].name)
		{
			a[i].show();
			flag=1;
			break;
		}
	}
	if(flag==0)cout<<"���޴���"<<endl;
	input_prompt();
}
void search_age(General a[],int n)
{
	cout<<"�������������������ʽ��";
	int x,y;
	char ch;
	cin>>x>>y>>ch;
	int t=0;
	General b[2000];
	for(int i=0;i<n;i++)
	{
		if(a[i].age>=x&&a[i].age<=y)
		{
			b[t]=a[i];
			t++;
		}
	}
	if(ch=='>')sort_age1(b,t);
	else sort_age2(b,t);
}
void search_force(General a[],int n)
{
	cout<<"�������������������ʽ��";
	int x,y;
	char ch;
	cin>>x>>y>>ch;
	int t=0;
	General b[2000];
	for(int i=0;i<n;i++)
	{
		if(a[i].force>=x&&a[i].force<=y)
		{
			b[t]=a[i];
			t++;
		}
	}
	if(ch=='>')sort_force1(b,t);
	else sort_force2(b,t);
}
void search_intelligence(General a[],int n)
{
	cout<<"�������������������ʽ��";
	int x,y;
	char ch;
	cin>>x>>y>>ch;
	int t=0;
	General b[2000];
	for(int i=0;i<n;i++)
	{
		if(a[i].intelligence>=x&&a[i].intelligence<=y)
		{
			b[t]=a[i];
			t++;
		}
	}
	if(ch=='>')sort_intelligence1(b,t);
	else sort_intelligence2(b,t);
}
void search_strength(General a[],int n)
{
	cout<<"�������������������ʽ��";
	int x,y;
	char ch;
	cin>>x>>y>>ch;
	int t=0;
	General b[2000];
	for(int i=0;i<n;i++)
	{
		if(a[i].strength>=x&&a[i].strength<=y)
		{
			b[t]=a[i];
			t++;
		}
	}
	if(ch=='>')sort_strength1(b,t);
	else sort_strength2(b,t);
}
void insert(General a[],int *n)
{
	cout<<"�����������佫��Ϣ����#��������"<<endl;
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(;;(*n)++)
	{
		a[*n].set_name();
		if(a[*n].name=="#")break;
		a[*n].set_age_force_intelligence_strength();
	}
	input_prompt();
}
void del(General a[],int *n)
{
	cout<<"������Ҫɾ���佫��������#��������"<<endl;
	string na[2000];
	int i=0;
	for(i=0;;i++)
	{
		cin>>na[i];
		if(na[i]=="#")break;
	}
	int I=i,t=0;
	General b[2000];
	for(i=0;i<*n;i++)
	{
		int flag=1;
		for(int j=0;j<I;j++)
		{
			if(na[j]==a[i].name)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			b[t]=a[i];
			t++;
		}
	}
	int T=t;
	for(t=0;t<T;t++)
	{
		a[t]=b[t];
	}
	*n=T;
	input_prompt();
}
int main()
{
	General general[2000];
	int i=0;
	cout<<"��ӭ�����������磬�������ʾ��ɳ�ʼ�佫����"<<endl;
	cout<<"�������ʼ�佫��Ϣ����#��������"<<endl;
	cout<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<' '<<"����"<<endl;
	for(i=0;;i++)
	{
		general[i].set_name();
		if(general[i].name=="#")break;
		general[i].set_age_force_intelligence_strength();
	}
	input_prompt();
	int I=i;
	string str;
	for(;;)
	{
		cin>>str;
		if(str=="null")break;
		else if(str=="n>")sort_name1(general,I);
		else if(str=="a>")sort_age1(general,I);
		else if(str=="f>")sort_force1(general,I);
		else if(str=="i>")sort_intelligence1(general,I);
		else if(str=="s>")sort_strength1(general,I);
		else if(str=="n<")sort_name2(general,I);
		else if(str=="a<")sort_age2(general,I);
		else if(str=="f<")sort_force2(general,I);
		else if(str=="i<")sort_intelligence2(general,I);
		else if(str=="s<")sort_strength2(general,I);
		else if(str=="sn")search_name(general,I);
		else if(str=="sa")search_age(general,I);
		else if(str=="sf")search_force(general,I);
		else if(str=="si")search_intelligence(general,I);
		else if(str=="ss")search_strength(general,I);
		else if(str=="insert")insert(general,&I);
		else if(str=="delete")del(general,&I);
	}
	cout<<"��Ϸ������ף��������죡"<<endl;
	return 0;
}
