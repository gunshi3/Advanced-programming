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
	cout<<"请选择您需要实现的功能"<<endl;
	cout<<"1. 按照姓名进行降序排列（输入n>）"<<endl;
	cout<<"2. 按照姓名进行升序排列（输入n<）"<<endl;
	cout<<"3. 按照年龄进行降序排列（输入a>）"<<endl;
	cout<<"4. 按照年龄进行升序排列（输入a<）"<<endl;
	cout<<"5. 按照武力进行降序排列（输入f>）"<<endl;
	cout<<"6. 按照武力进行升序排列（输入f<）"<<endl;
	cout<<"7. 按照智力进行降序排列（输入i>）"<<endl;
	cout<<"8. 按照智力进行升序排列（输入i<）"<<endl;
	cout<<"9. 按照体力进行降序排列（输入s>）"<<endl;
	cout<<"10.按照体力进行升序排列（输入s<）"<<endl;
	cout<<"11.按照姓名查找武将    （输入sn）"<<endl;
	cout<<"12.按照年龄区间查找武将（输入sa）"<<endl;
	cout<<"13.按照武力区间查找武将（输入sf）"<<endl;
	cout<<"14.按照智力区间查找武将（输入si）"<<endl;
	cout<<"15.按照体力区间查找武将（输入ss）"<<endl;
	cout<<"16.新增武将（输入insert,以#结束输入）"<<endl;
	cout<<"17.删除武将（输入delete,以#结束输入）"<<endl;
	cout<<"18.结束操作（输入null）"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].show();
	}
	input_prompt();
}
void search_name(General a[],int n)
{
	cout<<"请输入姓名：";
	string na;
	cin>>na;
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	if(flag==0)cout<<"查无此人"<<endl;
	input_prompt();
}
void search_age(General a[],int n)
{
	cout<<"请输入年龄区间和排序方式：";
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
	cout<<"请输入武力区间和排序方式：";
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
	cout<<"请输入智力区间和排序方式：";
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
	cout<<"请输入体力区间和排序方式：";
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
	cout<<"请输入新增武将信息，以#结束输入"<<endl;
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"请输入要删除武将姓名，以#结束输入"<<endl;
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
	cout<<"欢迎进入三国世界，请根据提示完成初始武将输入"<<endl;
	cout<<"请输入初始武将信息，以#结束输入"<<endl;
	cout<<"姓名"<<' '<<"年龄"<<' '<<"武力"<<' '<<"智力"<<' '<<"体力"<<endl;
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
	cout<<"游戏结束，祝您生活愉快！"<<endl;
	return 0;
}
