#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class FeedBack
{
	char arr[100];
	char rep[100];
	char D_Name[30];
	char D_CNIC[15];
	char P_Name[30];
public:

	void Set()
	{
		cout << "Enter Reply to Feed Back : ";
		cin.getline(rep, 100);
		cin.getline(rep, 100);
	}
	string get()
	{
		string temp = rep;
		return temp;
	}

	void Display()
	{
		cout << "-------FeedBack------" << endl;
		cout << "FeedBack From : " << P_Name << endl;
		cout << "Doctor Name : " << D_Name << endl;
		cout << "Doctor CNIC : " << D_CNIC << endl;
		cout << "FeedBack : " << arr << endl;
	}

	void set_DN(string a)
	{
		strcpy_s(D_Name, a.length() + 1, a.c_str());
	}
	void set_DC(string a)
	{
		strcpy_s(D_CNIC, a.length() + 1, a.c_str());
	}
	void set_PN(string a)
	{
		strcpy_s(P_Name, a.length() + 1, a.c_str());
	}
	void set_F(string a)
	{
		strcpy_s(arr, a.length() + 1, a.c_str());
	}
	string get_DN()
	{
		string temp = D_Name;
		return temp;
	}
	string get_DC()
	{
		string temp = D_CNIC;
		return temp;
	}
	string get_PN()
	{
		string temp = P_Name;
		return temp;
	}
	string get_F()
	{
		string temp = arr;
		return temp;
	}
};

class Payment
{
protected:
	int Amount=3500;
	
public:
	virtual void Main();
	void Add(int a)
	{
		Amount += a;
	}
	void sub(int a)
	{
		Amount -= a;
	}
	int get()
	{
		return Amount;
	}
	void set(int a)
	{
		Amount = a;
	}
	
};

class E_Transaction: public Payment
{
public:
	virtual void Main();
	virtual void Pay()
	{

	}
	
};

class Bank: public Payment
{
	virtual void Main();
	virtual void Pay()
	{

	}
	
};

class Jazzcash : public E_Transaction
{
public:
	void Pay()
	{
		
	}
};
class EasyPaisa : public E_Transaction
{

public:
	void Pay()
	{
		
	}
};

class Union_Pay : public Bank
{
public:
	virtual void Pay()
	{
		
	}
};
class PayPak : public Bank
{
public:
	virtual void Pay()
	{
		
	}
};

void Bank::Main()
{
	Bank* ar;
	int a;
	cout << "Select Your Payment Method : " << endl;
	cout << "Press 1 for Union Pay" << endl;
	cout << "Press 2 for PayPak" << endl;

	cin >> a;
	if (a == 1)
	{
		ar = new Union_Pay;
		ar->Pay();
	}
	if (a == 2)
	{
		ar = new PayPak;
		ar->Pay();
	}
}

void E_Transaction::Main()
{
	E_Transaction* ar;
	int a;
	cout << "Select Your Payment Method : " << endl;
	cout << "Press 1 for Jazzcash" << endl;
	cout << "Press 2 for EasyPaisa" << endl;

	cin >> a;
	if (a == 1)
	{
		ar = new Jazzcash;
		ar->Pay();
	}
	if (a == 2)
	{
		ar = new EasyPaisa;
		ar->Pay();
	}
}

void Payment::Main()
{

	Payment* ar;
	int a;
	cout << "Select Your Payment Method : " << endl;
	cout << "Press 1 for Bank Payment" << endl;
	cout << "Press 2 for Online Payment " << endl;

	cin >> a;
	if (a == 1)
	{
		ar = new Bank;
		ar->Main();
	}
	if (a == 2)
	{
		ar = new E_Transaction;
		ar->Main();
	}
}


class Date
{
protected:
	int day;
	int month;
	int year;
public:
	
	void setDay(int a)
	{
		day = a;
	}
	void setMonth(int a)
	{
		month = a;
	}
	void setYear(int a)
	{
		year = a;
	}
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
};

class Time
{
protected:
	int hours;
	int minutes;
public:

	void setHours(int a)
	{
		hours = a;
	}
	void setMin(int a)
	{
		minutes = a;
	}
	int getHours()
	{
		return hours;
	}
	int getMin()
	{
		return minutes;
	}
};




class User
{
protected:
	char name[20];
	char CNIC[14];
	char password[20];
public:
	virtual void Register()
	{
		cout << "Incorrect" << endl;
	}
	virtual void Login()
	{
		cout << "Incorrect" << endl;
	}

	void setName(string a)
	{
		strcpy_s(name,a.length()+1, a.c_str());
	}
	string getName()
	{
		string temp = name;
		return temp;
	}

	void setCNIC(string a)
	{
		strcpy_s(CNIC,a.length()+1, a.c_str());
	}
	string getCNIC()
	{
		string temp = CNIC;
		return temp;
	}

	void setPass(string a)
	{
		strcpy_s(password,a.length()+1, a.c_str());
	}

	string getPass()
	{
		string temp = password;
		return temp;
	}


};



class Pateint: public User {
protected:
	Payment ar;
	bool Status = false;
	bool Appoint = true;
public:
	
	void Find(string a);

	void Display()
	{
		cout << "Name of Pateint : " << name << endl;
		cout << "CNIC of Pateint : " << CNIC << endl;
		cout << "Account Status : ";
		if (Status == false)
		{
			cout << "Not Approved" << endl;
		}
		else
		{
			cout << "Approved" << endl;
		}
	}
	

	void Search_Doctor()
	{
		cout << "Search Doctor By City " << endl;
		cout << "Search Doctor By Hospital" << endl;
		cout << "Search Doctor by Speciality" << endl;
		int a;
		cin >> a;

		if (a == 1)
		{
			cout << "Enter City : ";
			string a;
			cin >> a;
			Find(a);
		}
		if (a == 2)
		{
			cout << "Enter Hospital : ";
			string a;
			cin >> a;
			Find(a);
		}
		if (a == 3)
		{
			cout << "Enter Speciality : ";
			string a;
			cin >> a;
			Find(a);
		}

	}

	void Update_Password(Pateint& obj)
	{
		string a, b;
		b = obj.getPass();
		bool flag = true;
		while (flag == true)
		{
			cout << "Enter Password : ";
			cin >> a;
			if (a == b)
			{
				cout << "Enter New Password : ";
				cin >> a;


				char pas[30];

				bool up = false;
				bool down = false;
				bool special = false;
				bool Num = false;
				bool Dig = false;
				bool f = true;
				while (f == true)
				{
					strcpy_s(pas, a.length() + 1, a.c_str());
					if (a.length() >= 8)
					{
						Dig = true;
					}
					for (int i = 0;i < pas[i] != '\0';i++)
					{
						if (pas[i] >= 65 && pas[i] <= 90)
						{
							up = true;
						}
						else if (pas[i] >= 97 && pas[i] <= 122)
						{
							down = true;
						}
						else if ((pas[i] >= 33 && pas[i] <= 47) || (pas[i] >= 58 && pas[i] <= 64))
						{
							special = true;
						}
						else if (pas[i] >= 48 && pas[i] <= 57)
						{
							Num = true;
						}
					}
					if (Dig == true && Num == true && special == true && down == true && up == true)
					{
						f = false;
					}
					else
					{
						Dig = false;
						Num = false;
						special = false;
						down = false;
						up = false;
						f = true;
						cout << "Incorrect Format" << endl;
						cout << "Re-Enter Password : ";
						cin >> a;
					}
				}



				obj.setPass(a);
				Update("Pateint.dat", obj);
				flag = false;
			}
			else
			{
				cout << "Wrong Password : ";
			}
		}
	}

	void Update(string fileName, Pateint& obj)
	{
		Delete("Pateint.dat", obj);
		write("Pateint.dat", obj);
	}

	void Delete(string fileName, Pateint& obj)
	{
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getCNIC() == temp.getCNIC() && obj.getName() == temp.getName())
			{

				continue;
			}
			else
			{
				write("temp.dat", temp);
			}
		}
		in.close();
		remove("Pateint.dat");
		rename("temp.dat", "Pateint.dat");

	}

	void Check_Appointments(Pateint& obj);

	void Delete_Appointments(Pateint& obj);
	

	void Update_Appointments(Pateint& obj);

	bool getStatus()
	{
		return Status;
	}
	void setStatus(bool a)
	{
		Status = a;
	}
	
	void Main(Pateint& obj)
	{
		if (Status == true)
		{
			bool flag = true;
			while (flag == true)
			{
				cout << "Press 1 to Search Doctors" << endl;
				cout << "Press 2 to Book Appointments" << endl;
				cout << "Press 3 to Check Balance" << endl;
				cout << "Press 4 to Update Appointments" << endl;
				cout << "Press 5 to Check Scheduled Appointments" << endl;
				cout << "Press 6 to Update Password" << endl;
				cout << "Press 7 to Recharge Account" << endl;
				cout << "Press 8 to delete Appointments" << endl;
				cout << "Press 0 to Log out " << endl;
				int a;
				cin >> a;
				if (a == 1)
				{
					Search_Doctor();
				}
				if (a == 2)
				{
					Book_Appointment(obj);
				}
				if (a == 3)
				{
					int aa = ar.get();
					cout << "Your Balanace is : " << aa << endl;
				}
				if (a == 4)
				{
					Update_Appointments(obj);
				}
				if (a == 5)
				{
					Check_Appointments(obj);
				}
				if (a == 6)
				{
					Update_Password(obj);
				}
				if (a == 7)
				{
					cout << "Enter Amount to Add in Account : ";
					int aa;
					cin >> aa;
					ar.Add(aa);
				}
				if (a == 8)
				{
					Delete_Appointments(obj);
				}
				if (a == 0)
				{
					flag = false;
				}
			}

		}
		else
		{
			cout << "Account Not Approved Yet" << endl;
		}
	}
	

	virtual void Login() override
	{
		Pateint temp;
		Pateint temp2;
		bool flag = false;
		string a, b, c;
		cout << "Enter Your Name : ";
		cin >> a;
		temp.setName(a);
		while (flag==false)
		{
			cout << "Enter Your CNIC : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == false)
				{
					cout << "CNIC Not Found" << endl;
				}
				else
				{
					temp2 = Check_OBJ_N(b);
					cout << "CNIC FOUND" << endl;
					break;
				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		if (temp2.getPass() == c)
		{
			cout << "Successfully Logged In " << endl;
			Main(temp2);
			
		}

	}

	Pateint Check_OBJ_N(string a)
	{
		Pateint temp2;
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				temp2.Equal(temp);
				break;
			}
		}
		in.close();
		return temp2;
	}

	void Equal(Pateint a)
	{
		this->setName(a.getName());
		this->setCNIC(a.getCNIC());
		this->setPass(a.getPass());
		this->Status = a.Status;
		this->ar.set(a.ar.get());
		this->Appoint = a.Appoint;
	}


	void Register() override
	{
		Pateint temp;
		bool flag = true;
		string a,b,c;
		cout << "Enter Your Name : ";
		cin >> a;
		temp.setName(a);
		while (flag==true)
		{
			cout << "Enter Your Cnic : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == true)
				{
					cout << "CNIC already registered" << endl;
				}
				else
				{
					flag = false;
					temp.setCNIC(b);
				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		char pas[30];

		bool up = false;
		bool down = false;
		bool special = false;
		bool Num = false;
		bool Dig = false;
		bool f = true;
		while (f == true)
		{
			strcpy_s(pas, c.length() + 1, c.c_str());
			if (c.length() >= 8)
			{
				Dig = true;
			}
			for (int i = 0;i < pas[i] != '\0';i++)
			{
				if (pas[i] >= 65 && pas[i] <= 90)
				{
					up = true;
				}
				else if (pas[i] >= 97 && pas[i] <= 122)
				{
					down = true;
				}
				else if ((pas[i] >= 33 && pas[i] <= 47) || (pas[i] >= 58 && pas[i] <= 64))
				{
					special = true;
				}
				else if (pas[i] >= 48 && pas[i] <= 57)
				{
					Num = true;
				}
			}
			if (Dig == true && Num == true && special == true && down == true && up == true)
			{
				f = false;
			}
			else
			{
				Dig = false;
				Num = false;
				special = false;
				down = false;
				up = false;
				f = true;
				cout << "Incorrect Format" << endl;
				cout << "Re-Enter Password : ";
				cin >> c;
			}
		}
		
		temp.setPass(c);
		write("Pateint.dat", temp);
	}
	void write(string file_name, Pateint obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();
		
	}

	bool Check(string a)
	{
		bool check = false;
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				check = true;
				break;
			}
		}
		in.close();
		return check;
	}
	Pateint Check_OBJ(string a)
	{
		bool check = false;
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				return temp;
				break;
			}
		}
		in.close();
	}

	void Book_Appointment(Pateint& obj);
	
	
};



class Appointment
{
protected:
	char P_Name[30];
	char P_CNIC[15];
	char D_Name[30];
	char D_CNIC[15];
	int endH;
	int endM;
	int startH;
	int startM;
	int Approved=0;
	int Pending=0;
	int Rejected=0;
	int In_Person=0;
	int Video_Consultation = 0;
public:

	int get_endH()
	{
		return endH;
	}
	void set_endH(int a)
	{
		endH = a;
	}
	int get_endM()
	{
		return endM;
	}
	void set_endM(int a)
	{
		endM = a;
	}
	int get_startH()
	{
		return startH;
	}
	void set_startH(int a)
	{
		startH = a;
	}
	int get_startM()
	{
		return startM;
	}
	void set_startM(int a)
	{
		startM = a;
	}


	int get_Approved()
	{
		return Approved;
	}
	void set_Approved(int a)
	{
		Approved = a;
	}
	int get_Rejected()
	{
		return Rejected;
	}
	void set_Rejected(int a)
	{
		Rejected = a;
	}
	int get_Pending()
	{
		return Pending;
	}
	void set_Pending(int a)
	{
		Pending = a;
	}
	int get_In_Person()
	{
		return In_Person;
	}
	void set_In_Person(int a)
	{
		In_Person = a;
	}
	int get_Video()
	{
		return Video_Consultation;
	}
	void set_Video(int a)
	{
		Video_Consultation = a;
	}

	void set_D_Name(string a)
	{
		strcpy_s(D_Name, a.length() + 1, a.c_str());
	}
	string get_D_Name()
	{
		string temp = D_Name;
		return temp;
	}

	void set_D_CNIC(string a)
	{
		strcpy_s(D_CNIC, a.length() + 1, a.c_str());
	}
	string get_D_CNIC()
	{
		string temp = D_CNIC;
		return temp;
	}

	void set_P_Name(string a)
	{
		strcpy_s(P_Name, a.length() + 1, a.c_str());
	}
	string get_P_Name()
	{
		string temp = P_Name;
		return temp;
	}

	void set_P_CNIC(string a)
	{
		strcpy_s(P_CNIC, a.length() + 1, a.c_str());
	}
	string get_P_CNIC()
	{
		string temp = P_CNIC;
		return temp;
	}

	void Time_fill(int a, int b,int c,int d)
	{
		startH = a;
		startM = b;
		endH = c;
		endM = d;
	}

	void Approve()
	{
	
			Approved = 1;
			Pending = 0;
			Rejected = 0;
		
	}
	void Disapprove()
	{
		Approved = 0;
		Pending = 0;
		Rejected = 1;
	}
	bool Fill(Pateint& obj)
	{
		if (Approved == 0 && Pending == 0 && (Rejected == 1||Rejected==0))
		{
			int a;
			cout << "Press 1 to Book In Person Appointment" << endl;
			cout << "Press 2 to Book Video Consultation" << endl;
			cin >> a;
			if (a == 1)
			{
				In_Person = 1;
			}
			if (a == 2)
			{
				Video_Consultation = 1;
			}
			Pending = 1;
			Rejected = 0;
			string aa = obj.getName();
			string bb = obj.getCNIC();
			strcpy_s(P_Name, aa.length() + 1, aa.c_str());
			strcpy_s(P_CNIC, bb.length() + 1, bb.c_str());
			return true;
		}
		return false;
	}


	/*void Add_Person(Pateint* obj)
	{
		p = obj;
	}*/
	void Display()
	{
		if (Approved==0&&Pending==0)
		{
			cout << "Empty Slot" << endl;
			cout << "Appointment Start Time : " << startH << " : " << startM << endl;
			cout << "Appointment End Time : " << endH << " : " << endM << endl;
		}
		else
		{
			cout << "Name of Pateint : " << P_Name << endl;
			cout << "Name of Doctor : " << D_Name << endl;
			cout << "Appointment Start Time : " << startH << " : " << startM << endl;
			cout << "Appointment End Time : " << endH << " : " << endM << endl;
			if (Approved == 1)
				cout << "Appointment Status : Approved " << endl;
			else if(Pending==1)
				cout << "Appointment Status : Pending " << endl;
			else if(Rejected==1)
				cout << "Appointment Status : Rejected " << endl;

		}

	}
	void S_Status()
	{
		Approved = 0;
		Pending = 0;
		Rejected = 0;
		In_Person = 0;
		Video_Consultation = 0;
	}

};

class Appoints
{
protected:
	
	
public:
	Appointment arr[10];
	Date arr1;
	Appointment getapp(int a)
	{
		return *(arr+a);
	}
	Date getD()
	{
		return arr1;
	}
	

	
	void Fill_Time(int a, int b,int tot)
	{
		int aa = a;
		int bb = b;
		
		int j = 0;
		for (int i = 0;i < tot;i++)
		{
			if (b == 0)
			{
				
				if (i % 2 == 0)
				{
					arr[j].Time_fill(aa, bb, aa, bb + 30);
					bb = 30;
				}
				if (i % 2 != 0)
				{
					arr[j].Time_fill(aa, bb, aa + 1, bb - 30);
					bb = 0;
					aa += 1;

				}
			}
			else
			{
				if (i % 2 != 0)
				{
					arr[j].Time_fill(aa, bb, aa, bb + 30);
					bb = 30;
				}
				if (i % 2 == 0)
				{
					arr[j].Time_fill(aa, bb, aa + 1, bb - 30);
					bb = 0;
					aa += 1;

				}
			}
			j++;
		}
	}

	void write(string File_Name, Appointment& obj)
	{
		ofstream fout(File_Name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();
	}
	void SET(string a, string b,int c)
	{
		arr[c].set_D_Name(a);
		arr[c].set_D_CNIC(b);

	}
	bool Fill_Slot(int a, Pateint obj)
	{
		while (1)
		{
			bool flag = arr[a].Fill(obj);
			if (flag == true)
			{
				return true;
				break;
			}
			else
			{
				cout << "Slot already Filled " << endl;
				cout << "Please try Again" << endl;
				cin >> a;
			}
		}
		return false;

	}
	void Display()
	{
		cout << "Date Is : " << arr1.getDay() << "-" << arr1.getMonth() << "-" << arr1.getYear() << endl;
		for (int i = 0;i < 10;i++)
		{
			cout << "Slot no : " << i + 1 << endl;
			arr[i].Display();
		}
	}
	void Add_Date(int a,int b,int c)
	{
		arr1.setDay(a);
		arr1.setMonth(b);
		arr1.setYear(c);
	}
	bool Return_Date(int a, int b, int c)
	{
		if (arr1.getDay() == a && arr1.getMonth() == b && arr1.getYear() == c)
			return true;
		else
			return false;
	}

	int Find_App(string a,string b)
	{
		int t = 99;
		for (int i = 0;i <10;i++)
		{
			if (arr[i].get_D_Name() == a && arr[i].get_D_CNIC() == b)
			{
				t = i;
				break;
			}
		}
		return t;
	}

	void Approve(int a)
	{
		arr[a].Approve();
	}
	void Disapprove(int a)
	{
		arr[a].Disapprove();
	}
	void Status()
	{
		for (int i = 0;i < 10;i++)
		{
			arr[i].S_Status();
		}
	}

	
};




class Doctor : public User{
protected:

	char Speciality[15];
	bool Status = false;
	char Email[30];
	char Hospital[50];
	char City[20];
	int Hourly_Charge=0;
	Appoints app[50];
	int app1 = 0;
	int total;
	Time end;
	Time Start;
	float Rating = 0;
	int count = 0;
public:
	void setStatus(bool a)
	{
		Status = a;
	}
	bool getStatus()
	{
		return Status;
	}

	void setRating(float a)
	{
		Rating += a;
		count++;
	}
	float getRating()
	{
		return Rating;
	}
	int getCount()
	{
		return count;
	}

	void Display_Feed(Doctor& obj)
	{
		FeedBack temp;
		ifstream in("Feedback.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getName() == temp.get_DN() && obj.getCNIC() == temp.get_DC())
			{
				temp.Display();
			}

		}
		in.close();
	}

	void write_Feed(string file_name, FeedBack& obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();

	}

	void Feed(string a, Doctor& obj1)
	{
		FeedBack temp;
		temp.set_DN(obj1.getName());
		temp.set_DC(obj1.getCNIC());
		temp.set_PN(a);
		cout << "Enter Your Feed Back :" << endl;
		cout << endl;
		char t3[100];
		string t;
		
		cin.getline(t3,100);
		cin.getline(t3, 100);
		t = t3;
		temp.set_F(t);

		write_Feed("Feedback.dat", temp);

		bool flag = true;
		while (flag == true)
		{
			cout << "Enter Rating :";
			float t1;
			cin >> t1;
			if (t1 >= 0 && t1 <= 5)
			{
				obj1.setRating(t1);
				Update("Doctor.dat", obj1);
				flag = false;
			}
			else
			{
				cout << "Incorrect Input" << endl;
			}
		}
	}

	void setEmail(string aa)
	{
		strcpy_s(Email, aa.length() + 1, aa.c_str());
	}

	string getEmail()
	{
		string temp = Email;
		return temp;
	}
	void equal(Doctor b)
	{
		string aa, bb, cc, dd;


		this->setName(b.getName());
		this->setCNIC(b.getCNIC());
		this->setPass(b.getPass());
		this->setSpec(b.getSpec());
		this->Set_City(b.getCity());
		this->Set_Hospital(b.getHospital());
		this->setEmail(b.getEmail());
		this->count = b.count;
		this->Rating = b.Rating;


		this->Status = b.Status;
		this->Hourly_Charge = b.Hourly_Charge;
		this->app1 = b.app1;
		this->total = b.total;
		this->end.setHours(b.end.getHours());
		this->end.setMin(b.end.getMin());
		this->Start.setHours(b.Start.getHours());
		this->Start.setMin(b.Start.getMin());
		this->app1 = b.app1;

		for (int i = 0; i < 10; i++)
		{
	      

			for (int j = 0;j < 10;j++)
			{
				this->app[i].arr[j] = b.app[i].arr[j];

				/*this->app[i].arr[j].set_Approved(b.app[i].arr[j].get_Approved());
				this->app[i].arr[j].set_D_CNIC(b.app[i].arr[j].get_D_CNIC());
				this->app[i].arr[j].set_D_Name(b.app[i].arr[j].get_D_Name());
				this->app[i].arr[j].set_endH(b.app[i].arr[j].get_endH());
				this->app[i].arr[j].set_endM(b.app[i].arr[j].get_endM());
				this->app[i].arr[j].set_In_Person(b.app[i].arr[j].get_In_Person());
				this->app[i].arr[j].set_Pending(b.app[i].arr[j].get_Pending());
				this->app[i].arr[j].set_P_CNIC(b.app[i].arr[j].get_P_CNIC());
				this->app[i].arr[j].set_P_Name(b.app[i].arr[j].get_P_Name());
				this->app[i].arr[j].set_Rejected(b.app[i].arr[j].get_Rejected());
				this->app[i].arr[j].set_startH(b.app[i].arr[j].get_startH());
				this->app[i].arr[j].set_startM(b.app[i].arr[j].get_startM());
				this->app[i].arr[j].set_Video(b.app[i].arr[j].get_Video());*/
			}

			this->app[i].arr1.setDay(b.app[i].arr1.getDay());
			this->app[i].arr1.setMonth(b.app[i].arr1.getMonth());
			this->app[i].arr1.setYear(b.app[i].arr1.getYear());
			/*this->app[i].getD().setMonth(b.app[i].getD().getMonth());
			this->app[i].getD().setYear(b.app[i].getD().getYear());*/
			
			

		}
		
		


	}

	void EF_Slots(int a, int b, int c,Pateint& obj2,Doctor& obj3)
	{
		bool flag = false;
		int t,t1;
		for (int i = 0;i < obj3.app1;i++)
		{
			bool flag2 = obj3.app[i].Return_Date(a, b, c);
			if (flag2 == true)
			{
				t = i;
				flag = true;
				break;
				cout << "Return successful" << endl;
			}
		}
		if (flag == true)
		{
			obj3.app[t].Display();
			cout << "Enter Slot to Fill : " << endl;
			cin >> t1;
			bool flag1 = obj3.app[t].Fill_Slot(t1-1, obj2);
			if (flag1 == true)
			{
				obj3.app[t].SET(obj3.getName(), obj3.getCNIC(), t1 - 1);
				Appointment temp;
				temp.set_Approved(0);
				temp.set_D_Name(obj3.getName());
				temp.set_D_CNIC(obj3.getCNIC());
				temp.set_In_Person(obj3.app[t].arr[t1-1].get_In_Person());
				temp.set_Pending(obj3.app[t].arr[t1-1].get_Pending());
				temp.set_Rejected(obj3.app[t].arr[t1-1].get_Rejected());
				temp.set_Video(obj3.app[t].arr[t1-1].get_Video());
				temp.set_endH(obj3.app[t].arr[t1-1].get_endH());
				temp.set_endM(obj3.app[t].arr[t1-1].get_endM());
				temp.set_startH(obj3.app[t].arr[t1-1].get_startH());
				temp.set_startM(obj3.app[t].arr[t1-1].get_startM());
				temp.set_P_Name(obj3.app[t].arr[t1-1].get_P_Name());
				temp.set_P_CNIC(obj3.app[t].arr[t1-1].get_P_CNIC());
				app[t].write("Appointment.dat", temp);

				
			}
		}
		else
		{
			cout << "Not Found" << endl;
		}
		Update("Doctor.dat", obj3);
	
	}

	string getCity()
	{
		string temp = City;
		return temp;
	}
	string getHospital()
	{
		string temp = Hospital;
		return temp;
	}

	bool find_Date(int a, int b, int c,Doctor& obj)
	{
		bool flag = false;
		for (int i = 0;i < obj.app1;i++)
		{
			flag=obj.app[i].Return_Date(a, b, c);
			if (flag == true)
			{
				break;

			}
		}
		return flag;
	}


	void Add_new(Doctor& obj,int a,int b,int c)
	{

		obj.app[app1].Add_Date(a, b, c);
		obj.app[app1].Fill_Time(Start.getHours(), Start.getMin(), obj.total);
		obj.app1++;
		Update("Doctor.dat", obj);
		cout << "Date Added" << endl;

	}

	void Calc_Slots(Doctor& obj)
	{
		int e1, e2, s1, s2;
		e1 = obj.end.getHours();
		e2 = obj.end.getMin();
		s1 = obj.Start.getHours();
		s2 = obj.Start.getMin();

		obj.total = e1-s1;
		obj.total = total * 2;
		if (e2 == 30)
		{
			obj.total++;
		}
		if (s2 == 30)
		{
			obj.total--;
		}

		for (int i = 0;i < obj.app1;i++)
		{
			obj.app[i].Fill_Time(obj.Start.getHours(), obj.Start.getMin(), obj.total);
		}
		
	}

	void View_Appointments(Doctor& obj)
	{
		Appointment temp;
		ifstream in("Appointment.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getName() == temp.get_D_Name() && obj.getCNIC() == temp.get_D_CNIC())
			{
				temp.Display();
			}

		}
		in.close();
	}

	void Edit_Avalibility(Doctor& obj)
	{
		int a, b;
		cout << "Enter Your Availability Time : " << endl;
		cout << "Hour : ";
		cin >> a;
		cout << "Minutes : ";
		cin >> b;
		obj.Start.setHours(a);
		obj.Start.setMin(b);

		cout << "Enter Your Offtime : " << endl;
		cout << "Hour : ";
		cin >> a;
		cout << "Minutes : ";
		cin >> b;
		obj.end.setHours(a);
		obj.end.setMin(b);
		Calc_Slots(obj);
		Update("Doctor.dat", obj);
		
		
	}
	void Edit_Charge(Doctor& obj)
	{
		int a;
		cout << "Enter Your Hourly Charge : ";
		cin >> a;
		obj.Hourly_Charge = a;
		Update("Doctor.dat", obj);
	}

	void Update(string fileName, Doctor& obj)
	{
		Delete("Doctor.dat", obj);
		write("Doctor.dat", obj);
	}

	void Delete(string fileName, Doctor& obj)
	{
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getCNIC() == temp.getCNIC() && obj.getCity() == temp.getCity())
			{
				
				continue;
			}
			else
			{
				write("temp.dat", temp);
			}
		}
		in.close();
		remove("Doctor.dat");
		rename("temp.dat", "Doctor.dat");
		
	}

	Doctor Check_OBJ_N(string a, string b)
	{
		Doctor temp1;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getName() && b == temp.getSpec())
			{
				temp1.equal(temp);
				return temp1;
				
			}
			
		}
		in.close();

		return temp1;
	}
	Doctor Check_OBJ_M(string a, string b) {
		Doctor temp1;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getName() && b == temp.getCNIC())
			{
				temp1.equal(temp);
				return temp1;

			}

		}
		in.close();

		return temp1;
	}

	void Set_City(string a)
	{
		strcpy_s(City, a.length() + 1, a.c_str());
	}

	void Set_Hospital(string a)
	{
		strcpy_s(Hospital, a.length() + 1, a.c_str());
	}

	void Edit_Location(Doctor& obj)
	{
		string a, b;
		cout << "Enter City : ";
		cin >> a;
		cout << "Enter Hospital : ";
		cin >> b;
		obj.Set_City(a);
		obj.Set_Hospital(b);
		Update("Doctor.dat", obj);
	}

	void Edit_Password(Doctor& obj)
	{
		string a, b;
		b = obj.getPass();
		bool flag = true;
		while (flag == true)
		{
			cout << "Enter Password : ";
			cin >> a;
			if (a == b)
			{
				cout << "Enter New Password : ";
				cin >> a;


				char pas[30];

				bool up = false;
				bool down = false;
				bool special = false;
				bool Num = false;
				bool Dig = false;
				bool f = true;
				while (f == true)
				{
					strcpy_s(pas, a.length() + 1, a.c_str());
					if (a.length() >= 8)
					{
						Dig = true;
					}
					for (int i = 0;i < pas[i] != '\0';i++)
					{
						if (pas[i] >= 65 && pas[i] <= 90)
						{
							up = true;
						}
						else if (pas[i] >= 97 && pas[i] <= 122)
						{
							down = true;
						}
						else if ((pas[i] >= 33 && pas[i] <= 47) || (pas[i] >= 58 && pas[i] <= 64))
						{
							special = true;
						}
						else if (pas[i] >= 48 && pas[i] <= 57)
						{
							Num = true;
						}
					}
					if (Dig == true && Num == true && special == true && down == true && up == true)
					{
						f = false;
					}
					else
					{
						Dig = false;
						Num = false;
						special = false;
						down = false;
						up = false;
						f = true;
						cout << "Incorrect Format" << endl;
						cout << "Re-Enter Password : ";
						cin >> a;
					}
				}



				obj.setPass(a);
				Update("Doctor.dat", obj);
				flag = false;
			}
			else
			{
				cout << "Wrong Password : ";
			}
		}
	}

	void Edit_Profile(Doctor& obj)
	{
		int a;
		cout << "Press 1 to Edit Hourly Charge" << endl;
		cout << "Press 2 to Edit Availability" << endl;
		cout << "Press 3 to Edit Location" << endl;
		cout << "Press 4 to Edit Password" << endl;
	
		cout << "Press 0 to go back" << endl;

		cin >> a;
		if (a == 1)
		{
			Edit_Charge(obj);
		}
		if (a == 2)
		{
			Edit_Avalibility(obj);
		}
		if (a == 3)
		{
			Edit_Location(obj);
		}
		if (a == 4)
		{
			Edit_Password(obj);
		}
	}

	void Edit_Appointments(Doctor& obj)
	{
		
		Appointment temp;
		ifstream in("Appointments.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getCNIC() == temp.get_D_CNIC() && obj.getName() == temp.get_D_Name()&&temp.get_Pending()==1)
			{
				obj.Approval(temp, obj);
			}
		}
		in.close();
	}

	void Approval(Appointment& obj,Doctor& obj1)
	{
		int a;
		obj.Display();
		cout << endl;
		cout << "Approve (1)  ----  Disapprove (0)" << endl;
		cout << "Select Option : ";
		cin >> a;
		if (a == 1)
		{
			obj.Approve();
			Update_App("Appointments.dat", obj);
			int t;
			int t1 = 99;
			for (int i = 0;i < app1;i++)
			{
				t1 = obj1.app[i].Find_App(obj.get_D_Name(), obj.get_D_CNIC());
				if (t1!=99)
				{
					t = i;
					break;
				}
			}
			obj1.app[t].Approve(t1);
			Update("Doctor.dat", obj1);
			
			
		}
		if (a == 0)
		{
			obj.Disapprove();
			Delete_App("Appointments.dat", obj);
		}

	}

	void Update_App(string FileName, Appointment& obj)
	{
		Delete_App(FileName, obj);
		write_App(FileName, obj);
	}
	void Delete_App(string FileName, Appointment& obj)
	{
		Appointment temp;
		ifstream in("Appointment.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.get_D_CNIC() == temp.get_D_CNIC() && obj.get_D_Name() == temp.get_D_Name())
			{

				continue;
			}
			else
			{
				write_App("temp.dat", temp);
			}
		}
		in.close();
		remove("Appointment.dat");
		rename("temp.dat", "Appointment.dat");
	}
	void write_App(string file_name, Appointment& obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();

	}

	void Main(Doctor& obj)
	{
		if (Status == true)
		{
			int a;
			bool Flag = true;
			while (Flag == true)
			{
				cout << "Welcome to Doctor's Panel" << endl;
				cout << endl;

				cout << "Press 1 to view Appointments" << endl;
				cout << "Press 2 to Edit Profile" << endl;

				cout << "Press 3 to Edit Appointments" << endl;
				cout << "Press 0 to logout" << endl;

				cin >> a;
				if (a == 1)
				{
					View_Appointments(obj);
				}
				if (a == 2)
				{
					Edit_Profile(obj);
				}
				if (a == 3)
				{
					Edit_Appointments(obj);
				}
				if (a == 0)
				{
					Flag = false;
				}
			}
		}
		else
		{
			cout << "Account Not Approved Yet" << endl;
		}
	

	}

	

	virtual void Login() override
	{
		Doctor temp3;
		Doctor temp2;
		bool flag = false;
		string a, b, c;
		cout << "Enter Your Name : ";
		cin >> a;
		
		int d;
		cout << "Press 1 to Login with CNIC : " << endl;
		cout << "Press 2 to Login with Email : " << endl;
		cin >> d;

		while (flag==false && d == 1)
		{
			cout << "Enter Your Cnic : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == false)
				{
					cout << "CNIC Not Found" << endl;
				}
				else
				{
					cout << "CNIC FOUND" << endl;
					temp2 = Check_OBJ(b);
					string aa = temp2.getSpec();
					temp3 = Check_OBJ_N(a, aa);
					break;
				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		while (flag==false && d == 2)
		{
			cout << "Enter Your Email : ";
			cin >> b;
			flag = Check_Email(b);

			if (b.compare(b.length() - 9, 9, "@gmail.com") == 0)
			{
				if (flag == false)
				{
					cout << "Email not Found" << endl;
				}
				else
				{
					cout << "Email Found" << endl;
					temp2 = Check_OBJ_E(b);
					string aa = temp2.getSpec();
					temp3 = Check_OBJ_N(a, aa);
					break;
					
				}
			}
			else
			{
				cout << "Incorrect Email" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		bool flag1 = false;
		while (flag1 == false)
		{
			if (temp2.getPass() == c)
			{
				flag1 = true;
				cout << "Successfully Logged In " << endl;
				Main(temp3);
			}
			else
			{
				cout << "Incorrect Password" << endl;
				cout << "Re-Enter Password : ";
				cin >> c;
			}
		}

	}

	Doctor Input_Info(Doctor& obj)
	{
		string a;
		cout << "-----Credential Data-----" << endl;
		cout << "Enter Your Specialization : ";
		cin >> a;
		strcpy_s(obj.Speciality, a.length() + 1, a.c_str());
		cout << "Enter Your City : ";
		cin >> a;
		strcpy_s(obj.City, a.length() + 1, a.c_str());
		cout << "Enter Your Hospital Name : ";
		cin >> a;
		strcpy_s(obj.Hospital, a.length() + 1, a.c_str());
		int aa, b;
		cout << "Enter Your Availability Time : " << endl;
		cout << "Hour : ";
		cin >> aa;
		cout << "Minutes : ";
		cin >> b;
		obj.Start.setHours(aa);
		obj.Start.setMin(b);

		cout << "Enter Your Offtime : " << endl;
		cout << "Hour : ";
		cin >> aa;
		cout << "Minutes : ";
		cin >> b;
		obj.end.setHours(aa);
		obj.end.setMin(b);
		
		
		cout << "Enter Your Hourly Charge : ";
		cin >> aa;
		obj.Hourly_Charge = aa;
		
		int e1, e2, s1, s2;
		e1 = obj.end.getHours();
		e2 = obj.end.getMin();
		s1 = obj.Start.getHours();
		s2 = obj.Start.getMin();
		
		obj.total = e1-s1;
		obj.total = obj.total * 2;
		if (e2 == 30)
		{
			obj.total++;
		}
		if (s2 == 30)
		{
			obj.total--;
		}
		

		return obj;
	}

	void Register() override
	{
		Doctor temp;
		bool flag = true;
		string a, b, c;
		int d;
		cout << "Press 1 to Register with CNIC : " << endl;
		cout << "Press 2 to Register with Email : " << endl;
		cin >> d;
		cout << "Enter Your Name : ";
		cin >> a;
		temp.setName(a);

		while (flag==true&&d==1)
		{
			cout << "Enter Your Cnic : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == true)
				{
					cout << "CNIC already registered" << endl;
				}
				else
				{
					flag = false;
					temp.setCNIC(b);
					string del = "xp";
					strcpy_s(temp.Email,del.length()+1, del.c_str());

				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		while (flag==true && d == 2)
		{
			cout << "Enter Your Email : ";
			cin >> b;
			flag = Check_Email(b);

			if (b.compare(b.length() - 9, 9, "@gmail.com") == 0)
			{
				if (flag == true)
				{
					cout << "Email already registered" << endl;
				}
				else
				{
					flag = false;
					string del = "xp";
					strcpy_s(temp.Email,b.length()+1, b.c_str());
					temp.setCNIC(del);
				}
			}
			else
			{
				cout << "Incorrect Email" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		char pas[30];

		bool up = false;
		bool down = false;
		bool special = false;
		bool Num = false;
		bool Dig = false;
		bool f = true;
		while (f == true)
		{
			strcpy_s(pas, c.length() + 1, c.c_str());
			if (c.length() >= 8)
			{
				Dig = true;
			}
			for (int i = 0;i < pas[i] != '\0';i++)
			{
				if (pas[i] >= 65 && pas[i] <= 90)
				{
					up = true;
				}
				else if (pas[i] >= 97 && pas[i] <= 122)
				{
					down = true;
				}
				else if ((pas[i] >= 33 && pas[i] <= 47) || (pas[i] >= 58 && pas[i] <= 64))
				{
					special = true;
				}
				else if (pas[i] >= 48 && pas[i] <= 57)
				{
					Num = true;
				}
			}
			if (Dig == true && Num == true && special == true && down == true && up == true)
			{
				f = false;
			}
			else
			{
				Dig = false;
				Num = false;
				special = false;
				down = false;
				up = false;
				f = true;
				cout << "Incorrect Format" << endl;
				cout << "Re-Enter Password : ";
				cin >> c;
			}
		}


		temp.setPass(c);
		string spec;
		temp=Input_Info(temp);
		write("Doctor.dat", temp);

		

	}
	void write(string file_name, Doctor obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();
		
	}

	Doctor Check_OBJ(string a)
	{
		bool check = false;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				return temp;
				break;
			}
		}
		in.close();
	}

	Doctor Check_OBJ_E(string a)
	{
		bool check = false;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.Email)
			{
				return temp;
				break;
			}
		}
		in.close();
	}

	bool Check(string a)
	{
		bool check = false;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				check = true;
				break;
			}
		}
		in.close();
		return check;
	}

	bool Check_Email(string a)
	{
		bool check = false;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				check = true;
				break;
			}
		}
		in.close();
		return check;
	}

	void setSpec(string a)
	{
		strcpy_s(Speciality, a.length() + 1, a.c_str());
	}
	string getSpec()
	{
		string temp = Speciality;
		return temp;
	}

	void display()
	{
		cout <<"Name is : " <<name << endl;
		cout << "CNIC is : " << CNIC << endl;
		cout <<"Speciality is : " << Speciality << endl;
		cout <<"Hospital is : " << Hospital << endl;
		cout <<"City is : " << City << endl;
		cout <<"Hourly Charge is : " <<Hourly_Charge << endl;
		cout << "Starting Time : " << Start.getHours() << "-" << Start.getMin() << endl;
		cout <<"Ending Time :" << end.getHours() <<"-"<<end.getMin() << endl;
		cout << "Total slots per day : " << total << endl;
		

	}

};

class Admin : public User {
protected:
public:

	void View_Patients(Admin& obj)
	{
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{

			temp.Display();

		}
		in.close();
	}

	void View_Doctors(Admin& obj)
	{
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{

			temp.display();

		}
		in.close();
	}

	void View_Appointments(Admin& obj)
	{
		Appointment temp;
		ifstream in("Appointment.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			
				temp.Display();

		}
		in.close();
	}
	
	

	void Reply(Admin& obj)
	{
		FeedBack temp2;
		FeedBack temp;
		ifstream in("Feedback.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			temp.Set();
			Update_feed("Feedback.dat", temp);
		}
		in.close();
	}


	void Update_feed(string fileName, FeedBack& obj)
	{
		Delete_feed("Feedback.dat", obj);
		write_feed("Feedback.dat", obj);
	}

	void Delete_feed(string fileName, FeedBack& obj)
	{
		FeedBack temp;
		ifstream in("Feedback.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.get_DC() == temp.get_DC() && obj.get_DN() == temp.get_DN()&& obj.get_PN() == temp.get_PN())
			{

				continue;
			}
			else
			{
				write_feed("temp.dat", temp);
			}
		}
		in.close();
		remove("Feedback.dat");
		rename("temp.dat", "Feedback.dat");

	}
	void write_feed(string file_name, FeedBack& obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();

	}

	void Update(string fileName, Admin& obj)
	{
		Delete("Admin.dat", obj);
		write("Admin.dat", obj);
	}

	void Delete(string fileName, Admin& obj)
	{
		Admin temp;
		ifstream in("Admin.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (obj.getCNIC() == temp.getCNIC() && obj.getName() == temp.getName())
			{

				continue;
			}
			else
			{
				write("temp.dat", temp);
			}
		}
		in.close();
		remove("Admin.dat");
		rename("temp.dat", "Admin.dat");

	}

	void Check_Pateints(Admin& obj)
	{
		Pateint obj2;
		Pateint temp;
		ifstream in("Pateint.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (temp.getStatus() == false)
			{
				obj2.Equal(temp);
				obj2.Display();
				cout << "Approve(1)-----Deny(0)" << endl;
				int aaa;
				cin >> aaa;
				if (aaa == 0)
				{
					obj2.Delete("Pateint.dat", obj2);
				}
				else if(aaa==1)
				{
					obj2.setStatus(true);
					obj2.Update("Pateint.dat", obj2);
				}
			}

		}
		in.close();
	}

	void Check_Doctors(Admin& obj)
	{
		Doctor obj2;
		Doctor temp;
		ifstream in("Doctor.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (temp.getStatus() == false)
			{
				obj2.equal(temp);
				obj2.display();
				cout << "Approve(1)-----Deny(0)" << endl;
				int aaa;
				cin >> aaa;
				if (aaa == 0)
				{
					obj2.Delete("Doctor.dat", obj2);
				}
				else if (aaa == 1)
				{
					obj2.setStatus(true);
					obj2.Update("Doctor.dat", obj2);
				}
			}

		}
		in.close();
	}

	void Main(Admin& obj)
	{
		bool flag = true;
		while (flag == true)
		{
			int a;
			cout << "Press 1 to View Appointments" << endl;
			cout << "Press 2 to view Doctors" << endl;
			cout << "Press 3 to View Pateints" << endl;
			cout << "Press 4 to Approve or Disapprove Pateints" << endl;
			cout << "Press 5 to Approve or Disapprove Doctors" << endl;
			cout << "Press 6 to reply to feedbacks" << endl;
			cout << "Press 0 to logout" << endl;
			cin >> a;
			if (a == 1)
			{
				View_Appointments(obj);
			}
			if (a == 2)
			{
				View_Doctors(obj);
			}
			if (a == 3)
			{
				View_Patients(obj);
			}
			if (a == 4)
			{
				Check_Pateints(obj);
			}
			if (a == 5)
			{
				Check_Doctors(obj);
			}
			if (a == 6)
			{
				Reply(obj);
			}
			if (a == 0)
			{
				flag = false;
			}
		}
	}

	void Register() override
	{
		Admin temp;
		bool flag = true;
		string a, b, c;
		cout << "Enter Your Name : ";
		cin >> a;
		temp.setName(a);
		while (flag == true)
		{
			cout << "Enter Your Cnic : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == true)
				{
					cout << "CNIC already registered" << endl;
				}
				else
				{
					flag = false;
					temp.setCNIC(b);
				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		char pas[30];

		bool up = false;
		bool down = false;
		bool special = false;
		bool Num = false;
		bool Dig = false;
		bool f = true;
		while (f == true)
		{
			strcpy_s(pas, c.length() + 1, c.c_str());
			if (c.length() >= 8)
			{
				Dig = true;
			}
			for (int i = 0;i < pas[i] != '\0';i++)
			{
				if (pas[i] >= 65 && pas[i] <= 90)
				{
					up = true;
				}
				else if (pas[i] >= 97 && pas[i] <= 122)
				{
					down = true;
				}
				else if ((pas[i] >= 33 && pas[i] <= 47) || (pas[i] >= 58 && pas[i] <= 64))
				{
					special = true;
				}
				else if (pas[i] >= 48 && pas[i] <= 57)
				{
					Num = true;
				}
			}
			if (Dig == true && Num == true && special == true && down == true && up == true)
			{
				f = false;
			}
			else
			{
				Dig = false;
				Num = false;
				special = false;
				down = false;
				up = false;
				f = true;
				cout << "Incorrect Format" << endl;
				cout << "Re-Enter Password : ";
				cin >> c;
			}
		}

		temp.setPass(c);
		write("Admin.dat", temp);
	}

	void write(string file_name, Admin obj)
	{
		ofstream fout(file_name, ios::binary | ios::app);
		fout.write((char*)&obj, sizeof(obj));
		fout.close();
		
	}

	bool Check(string a)
	{
		bool check = false;
		Admin temp;
		ifstream in("Admin.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				check = true;
				break;
			}
		}
		in.close();
		return check;
	}
	virtual void Login() override
	{

		Admin temp;
		Admin temp2;
		bool flag = false;
		string a, b, c;
		cout << "Enter Your Name : ";
		cin >> a;
		temp.setName(a);
		while (flag == false)
		{
			cout << "Enter Your CNIC : ";
			cin >> b;
			if (b.length() == 13)
			{
				flag = Check(b);
				if (flag == false)
				{
					cout << "CNIC Not Found" << endl;
				}
				else
				{
					temp2 = Check_OBJ(b);
					cout << "CNIC FOUND" << endl;
					break;
				}
			}
			else
			{
				cout << "Incorrect CNIC" << endl;
			}
		}
		cout << "Enter Password : ";
		cin >> c;
		if (temp2.getPass() == c)
		{
			cout << "Successfully Logged In " << endl;
			Main(temp2);

		}
	}
	Admin Check_OBJ(string a)
	{
		bool check = false;
		Admin temp;
		ifstream in("Admin.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (a == temp.getCNIC())
			{
				return temp;
				break;
			}
		}
		in.close();
	}

};




class OlaDoc
{
	User* Ola;

public:
	void Menu()
	{
		int a;
		cout << "     **      ******************        " << endl;
		cout << "   *    *    *                *        " << endl;
		cout << "   *    ******                *********" << endl;
		cout << "   *    *    *                *        " << endl;
		cout << "     **      ******************        " << endl;
		
		cout << endl;
		cout << endl;
		cout << "------Welcome to OlaDoc Services------" << endl;
		cout << endl;
		bool flag = true;
		while (flag==true)
		{
			
			cout << "Press 1 for Registration :" << endl;
			cout << "Press 2 for Signing In : " << endl;
			cout << "Press 3 to display Doctors : " << endl;
			cout << "Press 0 to Exit" << endl;
			cout << "Select Option : ";
			cin >> a;
			if (a == 0)
			{
				flag = false;
			}
			if (a == 1)
			{
				system("CLS");
				Registration();
			}
			if (a == 2)
			{
				system("CLS");
				SignIN();
			}
			if (a == 3)
			{
				system("CLS");
				Doctor obj;
				string file_name = "Doctor.dat";
				ifstream fin(file_name, ios::binary);
				while (fin.read((char*)&obj, sizeof(obj)))
				{
					obj.display();
				}

				fin.close();
			}
		}
		
	}

	void Registration()
	{
		int a;
		
			cout << "Welcome to the Registration Panel" << endl;
			cout << "Press 1 to Register as a Pateint : " << endl;
			cout << "Press 2 to Register as a Doctor : " << endl;
			cout << "Press 3 to register as an Admin : " << endl;
			cin >> a;
			if (a == 1)
			{
				system("CLS");
				Ola = new Pateint;
				Ola->Register();

			}
			else if (a == 2)
			{
				system("CLS");
				Ola = new Doctor;
				Ola->Register();
			}
			else if (a == 3)
			{
				system("CLS");
				Ola = new Admin;
				Ola->Register();
			}

	}

	void SignIN()
	{
		int a;
		cout << "Welcome to the Login Panel" << endl;
		cout << "Press 1 to Login as a Pateint : " << endl;
		cout << "Press 2 to Login as a Doctor : " << endl;
		cout << "Press 3 to Login as an Admin : " << endl;
		cin >> a;
		if (a == 1)
		{
			system("CLS");
			Ola = new Pateint;
			Ola->Login();

		}
		else if (a == 2)
		{
			system("CLS");
			Ola = new Doctor;
			Ola->Login();
		}
		else if (a == 3)
		{
			system("CLS");
			Ola = new Admin;
			Ola->Login();
		}

	}

};

int main()
{
	OlaDoc a;
	a.Menu();
}

void Pateint::Book_Appointment(Pateint& obj)
{
	if (obj.Appoint == true)
	{
		obj.Search_Doctor();
		Doctor temp;
		string a;
		string b;
		cout << "Enter Name Of Doctor : ";
		cin >> a;
		cout << "Enter Speciality Of Doctor : ";
		cin >> b;
		Doctor obj1 = temp.Check_OBJ_N(a, b);
		int aa, bb, cc;
		cout << "Enter Day : ";
		cin >> aa;
		cout << "Enter Month : ";
		cin >> bb;
		cout << "Enter Year : ";
		cin >> cc;

		bool flag = obj1.find_Date(aa, bb, cc, obj1);
		if (flag == true)
		{
			obj1.EF_Slots(aa, bb, cc, obj, obj1);
			flag = false;
		}
		else
		{
			obj1.Add_new(obj1, aa, bb, cc);
			obj1.EF_Slots(aa, bb, cc, obj, obj1);
		}
		obj.Appoint = false;
		Update("Pateint.dat", obj);
	}
	else
	{
		cout << "You cannot Book an other Appointment" << endl;
	}
}

void Pateint :: Find(string a)
{

	Doctor temp;
	ifstream in("Doctor.dat", ios::binary);
	while (in.read((char*)&temp, sizeof(temp)))
	{
		if (a == temp.getSpec() || a == temp.getHospital() || a == temp.getCity())
		{
			temp.display();
		}
	}
	in.close();

}

void Pateint:: Check_Appointments(Pateint& obj)
{

	Appointment temp;
	ifstream in("Appointment.dat", ios::binary);
	while (in.read((char*)&temp, sizeof(temp)))
	{
		if (obj.getName() == temp.get_P_Name() && obj.getCNIC() == temp.get_P_CNIC())
		{
			temp.Display();
			break;
		}

	}
	in.close();
}

void Pateint:: Delete_Appointments(Pateint& obj)
{
	Check_Appointments(obj);
	string a, b;
	a = obj.getName();
	b = obj.getCNIC();

	Appointment temp;
	ifstream in("Appointment.dat", ios::binary);
	while (in.read((char*)&temp, sizeof(temp)))
	{
		if (b == temp.get_P_CNIC() && a == temp.get_P_Name())
		{
			obj.Appoint = true;
			
			continue;
		}
		else
		{
			ofstream fout("temp.dat", ios::binary | ios::app);
			fout.write((char*)&obj, sizeof(obj));
			fout.close();
		}
	}
	
	in.close();
	Update("Pateint.dat", obj);
	remove("Appointment.dat");
	rename("temp.dat", "Appointment.dat");

}

void Pateint:: Update_Appointments(Pateint& obj)
{
	int a;
	cout << "You Have Successfully Completed your Apppointment" << endl;
	obj.Appoint = true;
	cout << "Press 1 to give feedback" << endl;
	cin >> a;
	if (a == 1)
	{
		string a, b;
		a = obj.getName();
		b = obj.getCNIC();

		Appointment temp;
		Doctor tot;
		ifstream in("Appointment.dat", ios::binary);
		while (in.read((char*)&temp, sizeof(temp)))
		{
			if (b == temp.get_P_CNIC() && a == temp.get_P_Name())
			{
				obj.Appoint = true;
				tot = tot.Check_OBJ_M(temp.get_D_Name(), temp.get_D_CNIC());
				
				continue;
			}
			else
			{
				ofstream fout("temp.dat", ios::binary | ios::app);
				fout.write((char*)&obj, sizeof(obj));
				fout.close();
			}
		}

		in.close();
		Update("Pateint.dat", obj);
		remove("Appointment.dat");
		rename("temp.dat", "Appointment.dat");
		Doctor temp1;
		temp1.Feed(obj.getName(),tot);
	}
	Update("Pateint.dat", obj);
}


