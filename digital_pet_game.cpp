#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int hour = 7, day = 1, t = 0, tim = 0, I = 1, K = 0, k = 0, x[1000], flag[1000];
string pname = "0";
class factory;
class player
{
public:
	player(int = 100, int = 100);
	friend class factory;

private:
	int money;
	int strength;
};
player::player(int mon, int s) : money(mon), strength(s) {}
class pet
{
public:
	pet(string, char, int = 20, int = 100, int = 100, int = 100);
	friend class factory;

protected:
	string name;
	char sex;
	int weight;
	int satiation;
	int happiness;
	int cleanliness;
	int life;
};
pet::pet(string nam, char ch, int w, int s, int h, int c)
{
	name = nam;
	sex = ch;
	satiation = s;
	happiness = h;
	cleanliness = c;
	weight = w;
	life = 1;
	cout << "恭喜您获得一只可爱的小" << name << endl;
}
class cat : public pet
{
public:
	cat(string, char, int, int = 100, int = 100, int = 100);
	friend class factory;
};
cat::cat(string nam, char ch, int w, int s, int h, int c) : pet(nam, ch, w, s, h, c) {}
class dog : public pet
{
public:
	dog(string, char, int = 45, int = 100, int = 100, int = 100);
	friend class factory;
};
dog::dog(string nam, char ch, int w, int s, int h, int c) : pet(nam, ch, w, s, h, c) {}
class factory
{
public:
	factory();
	void work(player &, pet &, int &);
	void buy_food(player &, pet &, int &);
	void feed(player &, pet &, int &);
	void rest(player &, pet &);
	void play_with_pet(player &, pet &);
	void clean_pet(player &, pet &, int &);
	void adjust_information(player &, pet &);
	void display_information(player &, pet &);
	void random(pet &);
	int control_life(pet &, int &);

private:
	int food1;
	int food2;
	int food3;
};
factory::factory()
{
	food1 = 0;
	food2 = 0;
	food3 = 0;
	srand(time(0));
}
void factory::work(player &pl, pet &pe, int &j)
{
	cout << "请根据提示选择打工方式" << endl;
	cout << "1.家教（消耗2个时间，获取50金钱，消耗30体力）" << endl;
	cout << "2.麦当劳兼职（消耗个4时间，获取120金钱，消耗70体力）" << endl;
	cout << "3.割草（消耗1个时间，获取20金钱，消耗20体力）" << endl;
	if (x[j + 1] == 0)
	{
		cin >> x[j + 1];
	}
	else if (x[j + 1] != 0)
	{
		cout << x[j + 1] << endl;
	}
	j++;
	cout << "正在打工" << endl;
	if (x[j] == 1)
	{
		t = 2;
		hour = hour - t;
		pl.money = pl.money + 50;
		pl.strength = pl.strength - 30;
	}
	if (x[j] == 2)
	{
		t = 4;
		hour = hour - t;
		pl.money = pl.money + 120;
		pl.strength = pl.strength - 70;
	}
	if (x[j] == 3)
	{
		t = 1;
		hour = hour - t;
		pl.money = pl.money + 20;
		pl.strength = pl.strength - 20;
	}
	pe.satiation = pe.satiation - 20;
	if (x[1] == 1)
	{
		pe.cleanliness = pe.cleanliness - 5;
	}
	if (x[1] == 2)
	{
		pe.happiness = pe.happiness - 20;
		pe.cleanliness = pe.cleanliness - 20;
	}
}
void factory::buy_food(player &pl, pet &pe, int &j)
{
	cout << "请根据提示选择要购买的宠物粮食" << endl;
	cout << "1.粗糙的粮食（花费30金钱，为宠物提供30体力，10愉悦度，降低15清洁度）" << endl;
	cout << "2.精品粮食（花费60金钱，为宠物提供50体力，40愉悦度，降低5清洁度）" << endl;
	cout << "3.香肠（花费20金钱，为宠物提供20体力，30愉悦度，降低20清洁度）" << endl;
	if (x[j + 1] == 0)
	{
		cin >> x[j + 1];
	}
	else if (x[j + 1] != 0)
	{
		cout << x[j + 1] << endl;
	}
	j++;
	if (x[j] == 1)
	{
		if (pl.money >= 30)
		{
			cout << "购买成功" << endl;
			t = 1;
			hour = hour - t;
			pl.money = pl.money - 30;
			food1++;
		}
		else
		{
			cout << "金钱不足" << endl;
			t = 0;
		}
	}
	if (x[j] == 2)
	{
		if (pl.money >= 60)
		{
			cout << "购买成功" << endl;
			t = 1;
			hour = hour - t;
			pl.money = pl.money - 60;
			food2++;
		}
		else
		{
			cout << "金钱不足" << endl;
			t = 0;
		}
	}
	if (x[j] == 3)
	{
		if (pl.money >= 20)
		{
			cout << "购买成功" << endl;
			t = 1;
			hour = hour - t;
			pl.money = pl.money - 20;
			food3++;
		}
		else
		{
			cout << "金钱不足" << endl;
			t = 0;
		}
	}
	if (t == 1)
	{
		pe.satiation = pe.satiation - 20;
		if (x[1] == 1)
		{
			pe.cleanliness = pe.cleanliness - 5;
		}
		else if (x[1] == 2)
		{
			pe.happiness = pe.happiness - 20;
			pe.cleanliness = pe.cleanliness - 20;
		}
	}
}
void factory::feed(player &pl, pet &pe, int &j)
{
	if (x[1] == 1 && flag[k] == 1)
	{
		cout << "喵喵" << endl;
	}
	if (x[1] == 2)
	{
		cout << "汪汪" << endl;
	}
	if (x[1] == 3)
	{
		cout << "叫" << endl;
	}
	if (flag[k] == 1 || flag[k] == 0)
	{
		cout << "请根据提示选择要投喂的宠物粮食" << endl;
		cout << "1.粗糙的粮食（为宠物提供30体力，10愉悦度，降低15清洁度）" << endl;
		cout << "2.精品粮食（为宠物提供50体力，40愉悦度，降低5清洁度）" << endl;
		cout << "3.香肠（为宠物提供20体力，30愉悦度，降低20清洁度）" << endl;
		if (x[j + 1] == 0)
		{
			cin >> x[j + 1];
		}
		else if (x[j + 1] != 0)
		{
			cout << x[j + 1] << endl;
		}
		j++;
		if (x[j] == 1)
		{
			if (food1 >= 1)
			{
				cout << "正在给宠物喂食" << endl;
				food1--;
				t = 1;
				hour = hour - t;
				pl.strength = pl.strength - 20;
				pe.satiation = pe.satiation + 30;
				pe.happiness = pe.happiness + 10;
				pe.cleanliness = pe.cleanliness - 15;
			}
			else
			{
				cout << "食物不足" << endl;
				t = 0;
			}
		}
		if (x[j] == 2)
		{
			if (food2 >= 1)
			{
				cout << "正在给宠物喂食" << endl;
				food2--;
				t = 1;
				hour = hour - t;
				pl.strength = pl.strength - 20;
				pe.satiation = pe.satiation + 50;
				pe.happiness = pe.happiness + 40;
				pe.cleanliness = pe.cleanliness - 5;
			}
			else
			{
				cout << "食物不足" << endl;
				t = 0;
			}
		}
		if (x[j] == 3)
		{
			if (food3 >= 1)
			{
				cout << "正在给宠物喂食" << endl;
				food3--;
				t = 1;
				hour = hour - t;
				pl.strength = pl.strength - 20;
				pe.satiation = pe.satiation + 20;
				pe.happiness = pe.happiness + 30;
				pe.cleanliness = pe.cleanliness - 20;
			}
			else
			{
				cout << "食物不足" << endl;
				t = 0;
			}
		}
	}
}
void factory::rest(player &pl, pet &pe)
{
	cout << "玩家进入休息状态" << endl;
	t = 1;
	hour = hour - t;
	pl.strength = pl.strength + 50;
	pe.satiation = pe.satiation - 20;
	if (x[1] == 1)
	{
		pe.cleanliness = pe.cleanliness - 5;
	}
	else if (x[1] == 2)
	{
		pe.happiness = pe.happiness - 20;
		pe.cleanliness = pe.cleanliness - 20;
	}
}
void factory::play_with_pet(player &pl, pet &pe)
{
	if (pe.happiness >= 30 && x[1] == 1)
	{
		if (flag[k] == 1)
		{
			cout << "正在和宠物玩耍" << endl;
			t = 1;
			hour = hour - t;
			pl.strength = pl.strength - 50;
			pe.satiation = pe.satiation - 20;
			pe.happiness = pe.happiness + 30;
			pe.cleanliness = pe.cleanliness - 10;
		}
	}
	if (pe.happiness >= 30 && x[1] == 2)
	{
		cout << "正在和宠物玩耍" << endl;
		t = 1;
		hour = hour - t;
		pl.strength = pl.strength - 50;
		pe.satiation = pe.satiation - 40;
		pe.happiness = pe.happiness + 70;
		pe.cleanliness = pe.cleanliness - 10;
	}
	if (pe.happiness < 30)
	{
		cout << "拒绝玩耍" << endl;
	}
	if (pe.happiness >= 30 && x[1] == 3)
	{
		cout << "正在和宠物玩耍" << endl;
		t = 1;
		hour = hour - t;
		pl.strength = pl.strength - 50;
		pe.satiation = pe.satiation - 30;
		pe.happiness = pe.happiness + 50;
		pe.cleanliness = pe.cleanliness - 10;
	}
}
void factory::clean_pet(player &pl, pet &pe, int &j)
{
	if (pe.happiness < 90 && x[1] == 1)
	{
		cout << "不接受清洗" << endl;
	}
	if (pe.happiness >= 90 && x[1] == 1 && flag[k] == 1)
	{
		if (pe.cleanliness > 80 || (day * 7 - hour - tim < 30 && tim != 0))
		{
			cout << "不接受清洁，是否选择强行清洁？" << endl;
			cout << "强行清洁请输入1，否则输入2" << endl;
			if (x[j + 1] == 0)
			{
				cin >> x[j + 1];
			}
			else if (x[j + 1] != 0)
			{
				cout << x[j + 1] << endl;
			}
			j++;
			if (x[j] == 1)
			{
				cout << "正在强行清洁宠物" << endl;
				t = 1;
				hour = hour - t;
				pl.strength = pl.strength - 30;
				pe.cleanliness = pe.cleanliness + 100;
				pe.happiness = pe.happiness - 50;
			}
		}
		else
		{
			cout << "正在清洁宠物" << endl;
			t = 1;
			hour = hour - t;
			pl.strength = pl.strength - 30;
			pe.cleanliness = pe.cleanliness + 100;
			tim = day * 7 - hour;
		}
	}
	if (pe.happiness < 70 && x[1] == 2)
	{
		cout << "不接受清洗" << endl;
	}
	if (pe.happiness >= 70 && x[1] == 2)
	{
		cout << "正在清洁宠物" << endl;
		t = 1;
		hour = hour - t;
		pl.strength = pl.strength - 30;
		pe.cleanliness = pe.cleanliness + 100;
	}
	if (x[1] == 3)
	{
		cout << "正在清洁宠物" << endl;
		t = 1;
		hour = hour - t;
		pl.strength = pl.strength - 30;
		pe.cleanliness = pe.cleanliness + 100;
	}
}
void factory::random(pet &pe)
{
	k++;
	if (x[1] == 1 && flag[k] == 0)
	{
		int num = rand() % 100;
		flag[k] = 1;
		if (num <= 30)
		{
			cout << "猫正在进行自洁" << endl;
			t = 1;
			hour = hour - t;
			pe.cleanliness = pe.cleanliness + 30;
			flag[k] = 2;
		}
		num = rand() % 100;
		if (num <= 20 && flag[k] == 1)
		{
			t = 1;
			hour = hour - t;
			flag[k] = 3;
			if (pe.satiation < 50)
			{
				cout << "猫正在抓老鼠，并吃掉老鼠" << endl;
				pe.satiation = pe.satiation + 40;
				pe.cleanliness = pe.cleanliness - 30;
				pe.happiness = pe.happiness + 5;
			}
			else
			{
				cout << "猫正在抓老鼠，并玩耍老鼠" << endl;
				pe.satiation = pe.satiation - 20;
				pe.cleanliness = pe.cleanliness - 10;
				pe.happiness = pe.happiness + 40;
			}
		}
	}
	else if (x[1] == 1 && flag[k] != 0)
	{
		if (flag[k] == 2)
		{
			cout << "猫正在进行自洁" << endl;
			t = 1;
			hour = hour - t;
			pe.cleanliness = pe.cleanliness + 30;
		}
		if (flag[k] == 3)
		{
			t = 1;
			hour = hour - t;
			if (pe.satiation < 50)
			{
				cout << "猫正在抓老鼠，并吃掉老鼠" << endl;
				pe.satiation = pe.satiation + 40;
				pe.cleanliness = pe.cleanliness - 30;
				pe.happiness = pe.happiness + 5;
			}
			else
			{
				cout << "猫正在抓老鼠，并玩耍老鼠" << endl;
				pe.satiation = pe.satiation - 20;
				pe.cleanliness = pe.cleanliness - 10;
				pe.happiness = pe.happiness + 40;
			}
		}
	}
}
void factory::adjust_information(player &pl, pet &pe)
{
	if (pl.strength >= 100)
	{
		pl.strength = 100;
	}
	if (pl.strength <= 0)
	{
		pl.strength = 0;
		cout << "体力归0，请休息恢复体力" << endl;
	}
	if (hour <= 0)
	{
		cout << "一天已结束，玩家进入睡眠状态，宠物进入强制休息状态" << endl;
		day++;
		hour = hour + 7;
		pl.strength = 100;
		pe.happiness = pe.happiness + 30;
		pe.satiation = pe.satiation - 60;
		pe.cleanliness = pe.cleanliness - 5;
	}
	if (day == 30)
	{
		pe.life = 0;
	}
	if (x[1] == 1)
	{
		if (pe.satiation <= 0 && pe.life != 0)
		{
			pe.satiation = 0;
			pe.happiness = pe.happiness - 10;
			pe.weight--;
		}
		if (pe.satiation >= 100 && pe.life != 0)
		{
			pe.satiation = 100;
			pe.weight++;
		}
		if ((pe.weight < 4 || pe.weight > 16) && pe.sex == 'm')
		{
			cout << "宠物因健康不佳死亡" << endl;
			pe.life = 0;
		}
		if ((pe.weight < 2 || pe.weight > 10) && pe.sex == 'f')
		{
			cout << "宠物因健康不佳死亡" << endl;
			pe.life = 0;
		}
		if ((pe.weight < 8 || pe.weight > 12) && pe.sex == 'm')
		{
			pe.happiness = pe.happiness - 10 * t;
		}
		if ((pe.weight < 4 || pe.weight > 8) && pe.sex == 'f')
		{
			pe.happiness = pe.happiness - 10 * t;
		}
	}
	if (x[1] == 2)
	{
		if (pe.satiation <= 0 && pe.life != 0)
		{
			pe.satiation = 0;
			pe.happiness = pe.happiness - 10;
			pe.weight = pe.weight - 2;
		}
		if (pe.satiation >= 100 && pe.life != 0)
		{
			pe.satiation = 100;
			pe.weight = pe.weight + 2;
		}
		if (pe.weight < 15 || pe.weight > 75)
		{
			cout << "宠物因健康不佳死亡" << endl;
			pe.life = 0;
		}
		if (pe.weight < 30 || pe.weight > 60)
		{
			pe.happiness = pe.happiness - 10 * t;
		}
	}
	if (x[1] == 3)
	{
		if (pe.satiation <= 0 && pe.life != 0)
		{
			pe.satiation = 0;
			pe.happiness = pe.happiness - 10;
			pe.weight = pe.weight - 2;
		}
		if (pe.satiation >= 100 && pe.life != 0)
		{
			pe.satiation = 100;
			pe.weight = pe.weight + 2;
		}
		if (pe.weight < 10 || pe.weight > 30)
		{
			cout << "宠物因健康不佳死亡" << endl;
			pe.life = 0;
		}
		if (pe.weight < 15 || pe.weight > 25)
		{
			pe.happiness = pe.happiness - 10 * t;
		}
	}
	if (pe.happiness <= 0 && pe.life != 0)
	{
		pe.happiness = 0;
		cout << "宠物已离开" << endl;
		pe.life = 0;
		t = 0;
	}
	if (pe.cleanliness <= 0)
	{
		pe.cleanliness = 0;
		pe.happiness = pe.happiness - 30 * t;
	}
	if (pe.cleanliness > 80)
	{
		pe.happiness = pe.happiness + 10 * t;
	}
	if (pe.cleanliness > 100)
	{
		pe.cleanliness = 100;
	}
	if (pe.happiness > 100)
	{
		pe.happiness = 100;
	}
}
void factory::display_information(player &pl, pet &pe)
{
	cout << "第" << day << "天" << ' ' << "还有" << hour << "个时辰" << endl;
	cout << "玩家金钱" << pl.money << ' ' << "体力" << pl.strength << endl;
	cout << "宠物饱食度" << pe.satiation << ' ' << "愉悦度" << pe.happiness << ' ' << "体重" << pe.weight << ' ' << "清洁度" << pe.cleanliness << endl;
}
int factory::control_life(pet &pe, int &j)
{
	if (pe.life == 0)
	{
		return 8;
	}
	else
		return x[j];
}
void indata()
{
	ifstream infile("digital_pet_game.txt", ios::in);
	infile >> I >> K >> pname;
	for (int i = 1; i < I; i++)
	{
		infile >> x[i];
	}
	for (int i = 1; i <= K; i++)
	{
		infile >> flag[i];
	}
	infile.close();
}
void outdata()
{
	ofstream outfile("digital_pet_game.txt");
	outfile << I << ' ' << K << ' ' << pname << endl;
	for (int i = 1; i < I; i++)
	{
		outfile << x[i] << ' ';
	}
	for (int i = 1; i <= K; i++)
	{
		outfile << flag[i] << ' ';
	}
	outfile.close();
}
void delete_data()
{
	for (int i = 1; i < I; i++)
	{
		x[i] = 0;
	}
	for (int i = 1; i <= K; i++)
	{
		flag[i] = 0;
	}
	I = 1, pname = "0";
}
int main()
{
	player pl;
	factory f;
	pet *pe;
	cout << "欢迎来到电子宠物游戏，祝您游戏愉快！" << endl;
	cout << "请根据提示完成操作" << endl;
	cout << "请选择您要饲养的宠物:1.猫 2.狗 3.其他" << endl;
	indata();
	int i = 1;
	if (x[i] == 0)
	{
		cin >> x[i];
		if (x[i] == 3)
		{
			cout << "请输入宠物名称:";
			cin >> pname;
		}
		cout << "请选择宠物性别:1.公 2.母" << endl;
		i++;
		cin >> x[i];
	}
	else if (x[i] != 0)
	{
		cout << x[i] << endl;
		if (x[i] == 3)
		{
			cout << "请输入宠物名称:" << pname << endl;
		}
		cout << "请选择宠物性别:1.公 2.母" << endl;
		i++;
		cout << x[i] << endl;
	}
	if (x[1] == 1 && x[i] == 1)
	{
		pe = new cat("猫", 'm', 10);
	}
	if (x[1] == 1 && x[i] == 2)
	{
		pe = new cat("猫", 'f', 6);
	}
	if (x[1] == 2 && x[i] == 1)
	{
		pe = new dog("狗", 'm');
	}
	if (x[1] == 2 && x[i] == 2)
	{
		pe = new dog("狗", 'f');
	}
	if (x[1] == 3 && x[i] == 1)
	{
		pe = new pet(pname, 'm');
	}
	if (x[1] == 3 && x[i] == 2)
	{
		pe = new pet(pname, 'f');
	}
	f.display_information(pl, *pe);

	for (int i = 3;; i++)
	{
		cout << "请选择您要进行的操作" << endl;
		cout << "1.打工" << endl;
		cout << "2.购买宠物粮食" << endl;
		cout << "3.喂食" << endl;
		cout << "4.休息" << endl;
		cout << "5.和宠物玩耍" << endl;
		cout << "6.清洗宠物" << endl;
		cout << "7.结束游戏" << endl;
		cout << "8.重新开始" << endl;
		if (x[i] == 0)
		{
			cin >> x[i];
		}
		else if (x[i] != 0)
		{
			cout << x[i] << endl;
		}
		switch (x[i])
		{
		case 1:
			f.random(*pe);
			f.work(pl, *pe, i);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		case 2:
			f.random(*pe);
			f.buy_food(pl, *pe, i);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		case 3:
			f.random(*pe);
			f.feed(pl, *pe, i);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		case 4:
			f.random(*pe);
			f.rest(pl, *pe);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		case 5:
			f.random(*pe);
			f.play_with_pet(pl, *pe);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		case 6:
			f.random(*pe);
			f.clean_pet(pl, *pe, i);
			f.adjust_information(pl, *pe);
			f.display_information(pl, *pe);
			x[i] = f.control_life(*pe, i);
			break;
		default:
			break;
		}
		if (x[i] == 7)
		{
			cout << "游戏结束" << endl;
			I = i;
			K = k;
			f.display_information(pl, *pe);
			outdata();
			break;
		}
		if (x[i] == 8)
		{
			cout << "游戏结束并清除数据" << endl;
			I = i;
			K = k;
			delete_data();
			outdata();
			break;
		}
	}
	system("pause");
	return 0;
}
