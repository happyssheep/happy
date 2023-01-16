//=======include=========
#include <iostream>

#include <string>

using namespace std;

//=======Fn=======

enum classData;

const int Max = 30;

class student_primary_low;

int student_primary_low_point = 0;

class student_primary_high;

int student_primary_high_point = 0;

class student_middle_low;

int student_middle_low_point = 0;

class student_middle_Lmid;

int student_middle_Lmid_point = 0;

class student_middle_Hmid;

int student_middle_Hmid_point = 0;

class student_middle_high;

int student_middle_high_point = 0;

int if_create(student_primary_low student_pri_low[],student_primary_high student_pri_High[], student_middle_low student_mid_low[],student_middle_Lmid student_mid_Lmid[],student_middle_Hmid student_mid_Hmid[],student_middle_high student_mid_high[]);
//=====classData enum data====
enum classData
{
	school_primary_low = 1 && 2,

	school_primary_high = 3 && 4 && 5 && 6,

	school_middle_low = 7,

	school_middle_Lmid = 8,

	school_middle_Hmid = 9,

	school_middle_high = 10
};
//====student_primary_low Data=====
class student_primary_low
{
private:

	double chinese;

	double maths;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_primary_low;

		cout << "请输入语文、数学成绩：" << endl;

		cin >> chinese >> maths;

		total = chinese + maths;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << total << endl;
	}
};
//===student_primary_high data====
class student_primary_high
{
private:

	double chinese;

	double maths;

	double english;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_primary_high;

		cout << "请输入语文、数学、英语成绩：" << endl;

		cin >> chinese >> maths >> english ;

		total = chinese + maths + english;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	double get_english()
	{
		return english;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t英语\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << english << "\t" << total << endl;
	}
};
//====student_middle_low Data=====
class student_middle_low
{
private:

	double chinese;

	double maths;

	double english;

	double politics;

	double history;

	double geography;

	double biological;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_middle_low;

		cout << "请输入语文、数学、英语、政治、历史、地理、生物成绩：" << endl;

		cin >> chinese >> maths >> english >> politics >> history >> geography >> biological;

		total = chinese + maths + english + politics + history + geography + biological;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	double get_english()
	{
		return english;
	}
	double get_politics()
	{
		return politics;
	}
	double get_history()
	{
		return history;
	}
	double get_geography()
	{
		return geography;
	}
	double get_biological()
	{
		return biological;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t英语\t政治\t历史\t地理\t生物\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << english << "\t" << politics << "\t" << history << "\t" << geography << "\t" << biological << "\t" << total << endl;
	}
};
//=====student_middle_Lmid Data=====
class student_middle_Lmid
{
private:

	double chinese;

	double maths;

	double english;

	double politics;

	double history;

	double geography;

	double biological;

	double physics;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_middle_low;

		cout << "请输入语文、数学、英语、政治、历史、地理、生物、物理成绩：" << endl;

		cin >> chinese >> maths >> english >> politics >> history >> geography >> biological>> physics ;

		total = chinese + maths + english + politics + history + geography + biological +physics;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	double get_english()
	{
		return english;
	}
	double get_politics()
	{
		return politics;
	}
	double get_history()
	{
		return history;
	}
	double get_geography()
	{
		return geography;
	}
	double get_biological()
	{
		return biological;
	}
	double get_physics()
	{
		return physics;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t英语\t政治\t历史\t地理\t生物\t物理\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << english << "\t" << politics << "\t" << history << "\t" << geography << "\t" << biological << "\t" << physics << "\t" << total << endl;
	}
};
//=====student_middle_Hmid=====
class student_middle_Hmid
{
private:

	double chinese;

	double maths;

	double english;

	double politics;

	double history;

	double geography;

	double biological;

	double physics;

	double chemistry;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_middle_low;

		cout << "请输入语文、数学、英语、政治、历史、地理、生物、物理、化学成绩：" << endl;

		cin >> chinese >> maths >> english >> politics >> history >> geography >> biological >> physics >> chemistry;

		total = chinese + maths + english + politics + history + geography + biological + physics + chemistry;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	double get_english()
	{
		return english;
	}
	double get_politics()
	{
		return politics;
	}
	double get_history()
	{
		return history;
	}
	double get_geography()
	{
		return geography;
	}
	double get_biological()
	{
		return biological;
	}
	double get_physics()
	{
		return physics;
	}
	double get_chemistry()
	{
		return chemistry;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t英语\t政治\t历史\t地理\t生物\t物理\t化学\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << english << "\t" << politics << "\t" << history << "\t" << geography << "\t" << biological << "\t" << physics << "\t" << chemistry << "\t" << total << endl;
	}
};
//=====student_middle_high=====
class student_middle_high
{
private:

	double chinese;

	double maths;

	double english;

	double politics;

	double history;

	double physics;

	double chemistry;

	double total;

public:
	char name[Max];

	char number[Max];

	classData school;

	void putData()
	{
		school = school_middle_low;

		cout << "请输入语文、数学、英语、政治、历史、物理、化学成绩：" << endl;

		cin >> chinese >> maths >> english >> politics >> history >> physics >> chemistry;

		total = chinese + maths + english + politics + history + physics + chemistry;
	}
	double get_chinese()
	{
		return chinese;
	}
	double get_maths()
	{
		return maths;
	}
	double get_english()
	{
		return english;
	}
	double get_politics()
	{
		return politics;
	}
	double get_history()
	{
		return history;
	}
	double get_physics()
	{
		return physics;
	}
	double get_chemistry()
	{
		return chemistry;
	}
	void print()
	{
		cout << "姓名\t学号\t语文\t数学\t英语\t政治\t历史\t物理\t化学\t总分" << endl;

		cout << name << "\t" << number << "\t" << chinese << "\t" << maths << "\t" << english << "\t" << politics << "\t" << history << "\t" << physics << "\t" << chemistry << "\t" << total << endl;
	}
};

int if_create(student_primary_low student_pri_low[], student_primary_high student_pri_High[], student_middle_low student_mid_low[], student_middle_Lmid student_mid_Lmid[], student_middle_Hmid student_mid_Hmid[], student_middle_high student_mid_high[])
{
	int schoolmoddle;
	
	cout << "请输入要创建的学生年级：12年级请输入0\n3456年级请输入1\n7年级请输入2\n8年级上学期请输入3\n8年级下学期请输入4\n9年级请输入5\n请输入：";


	cin >> schoolmoddle;

	switch (schoolmoddle)
	{
		case 0:
		{
			cout << "请输入名字、学号：";

			cin >> student_pri_low[student_primary_low_point].name >> student_pri_low[student_primary_low_point].number;

			student_pri_low[student_primary_low_point].putData();

			student_primary_low_point++;

			cout << "创建成功！！！" << endl;

			break;
		}
		case 1:
		{
			cout << "请输入名字、学号：";

			cin >> student_pri_High[student_primary_high_point].name >> student_pri_High[student_primary_high_point].number;

			student_pri_High[student_primary_high_point].putData();

			student_primary_high_point++;

			cout << "创建成功！！!" << endl;

			break;
		}
		case 2:
		{
			cout << "请输入名字、学号：";

			cin >> student_mid_low[student_middle_low_point].name >> student_mid_low[student_middle_low_point].number;

			student_mid_low[student_middle_low_point].putData();

			student_middle_low_point++;

			cout << "创建成功！！！" << endl;

			break;
		}
		case 3:
		{
			cout << "请输入名字、学号：";

			cin >> student_mid_Lmid[student_middle_Lmid_point].name >> student_mid_Lmid[student_middle_Lmid_point].number;

			student_mid_Lmid[student_middle_Lmid_point].putData();

			student_middle_Lmid_point++;

			cout << "创建成功！！！" << endl;

			break;
		}
		case 4:
		{
			cout << "请输入名字学号：";

			cin >> student_mid_Hmid[student_middle_Hmid_point].name >> student_mid_Hmid[student_middle_Hmid_point].number;

			student_mid_Hmid[student_middle_Hmid_point].putData();

			student_middle_Hmid_point++;

			cout << "创建成功！！！" << endl;

			break;
		}
		case 5:
		{
			cout << "请输入名字学号：";

			cin >> student_mid_high[student_middle_high_point].name >> student_mid_high[student_middle_high_point].number;

			student_middle_high_point++;

			cout << "创建成功！！！" << endl;

			break;
		}
		default:
		{
			cout << "指令错误！！！" << endl;

			break;
		}
	}
	return 1;
}
//===========MainMainMainMainMainMainMainMainMainMainMainMainMainMainMainMainMain===========
int main(int argc,char* argv)
{
	const int max = 10;

	student_primary_low pri_low[max];

	student_primary_high pri_high[max];

	student_middle_low mid_low[max];

	student_middle_Lmid mid_lmid[max];

	student_middle_Hmid mid_hmid[max];

	student_middle_high mid_high[max];

	int mod = 0;

	while (mod != 3)
	{
		while (mod != 3)
		{
			cout << "----------------------------命令菜单--------------------------" << endl;

			cout << "1.新建学生信息" << endl;

			cout << "2.打印所有学生信息" << endl;

			cout << "2.退出" << endl;

			cin >> mod;

			switch (mod)
			{
				case 1:
				{
					if_create(pri_low, pri_high, mid_low, mid_lmid, mid_hmid, mid_high);

					break;
				}
				case 2:
				{
					for (int fortemp = 0; fortemp < student_primary_low_point; fortemp++)
					{
						pri_low[fortemp].print();
					}
					for (int fortemp = 0; fortemp < student_primary_high_point; fortemp++)
					{
						pri_high[fortemp].print();
					}
					for (int fortemp = 0; fortemp < student_middle_low_point; fortemp++)
					{
						mid_low[fortemp].print();
					}
					for (int fortemp = 0; fortemp < student_middle_Lmid_point; fortemp++)
					{
						mid_lmid[fortemp].print();
					}
					for (int fortemp = 0; fortemp < student_middle_Hmid_point; fortemp++)
					{
						mid_hmid[fortemp].print();
					}
					for (int fortemp = 0; fortemp < student_middle_high_point; fortemp++)
					{
						mid_high[fortemp].print();
					}
					break;
				}
			}
		}
	}
}
