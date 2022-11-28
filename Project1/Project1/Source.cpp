#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

class card
{
private:
	string expirydate;
public:
	card()
	{
		expirydate = ".";
	}
	card(string edate)
	{
		expirydate = edate;
	}
	string getedate()
	{
		return expirydate;
	}
	void setedate(string edate)
	{
		expirydate = edate;
	}
};
class goldcard : public card
{
private:
	float discount;
public:
	goldcard()
	{
		discount = 0.15;
		setedate(".");		
}
	goldcard(string edate)
	{
		discount = 0.15;
		setedate(edate);
	}
	float getdiscount()
	{
		return discount;
	}
};
class platinumcard : public card
{
private:
	float discount;
public:

	platinumcard()
	{
		discount = 0.2;
		setedate(".");
	}
	platinumcard(string edate)
	{
		discount = 0.2;
		setedate(edate);
	}
	float getdiscount()
	{
		return discount;
	}
};
class silvercard : public card
{
private:
	float discount;
public:
	silvercard()
	{
		discount = 0.1;
		setedate(".");
	}
	silvercard(string edate)
	{
		discount = 0.1;
		setedate(edate);
	}
	float getdiscount()
	{
		return discount;
	}
};

class customer
{
private:
	int ID;
	string password;
	card* mycard;
	int loyaltypoints;
	string accountstatus;
	string name;
	string address;
public:
	customer()
	{
		ID = 0;
		password = ".";
		loyaltypoints = 0;
		accountstatus = ".";
		mycard = nullptr;
		name = "";
		address = "";
	}

	customer(int id, string pass, int lp, string status, string n, string add)
	{
		ID = id;
		password = pass;
		loyaltypoints = lp;
		accountstatus = status;
		mycard = nullptr;
		name = n;
		address = add;
	}
	void setcustomer(int id, string pass, int lp, string status, string n, string add)
	{
		ID = id;
		password = pass;
		loyaltypoints = lp;
		accountstatus = status;
		name = n;
		address = add;
	}
	int getid()
	{
		return ID;
	}
	int getloyaltypoints()
	{
		return loyaltypoints;
	}
	string getpass()
	{
		return password;
	}
	string getstatus()
	{
		return accountstatus;
	}
	string getname() {
		return name;
	}
	string getaddress() {
		return address;
	}
};
class item
{
private:
	string name;
	string category;
	int ID;
	string agegroup;
public:
	item()
	{
		name = ".";
		category = ".";
		ID = 0;
		agegroup = ".";
}
	item(string cat, int id, string age, string n)
	{
		name = n;
		category = cat;
		ID = id;
		agegroup = age;
	}
	void setitem(string cat, int id, string age, string n)
	{
		name = n;
		category = cat;
		ID = id;
		agegroup = age;
	}
	int getitemID()
	{
		return ID;
	}
	string getcategory()
	{
		return category;
	}
	string getagegroup()
	{
		return agegroup;
	}

	string getname() {
		return name;
	}
};
class cart
{
private:
	item* itemlist;
public:
	cart()
	{
		itemlist = nullptr;
	}
};
class checkout
{
private:
	float bill;
	item* itemlist;
public:
checkout()
{
		bill = 0.0;
		itemlist = nullptr;
}
};
class inventorymanager
{
private:
	int ID;
	string password;
public:
	inventorymanager()
	{
		ID = 0;
		password = ".";
}
	inventorymanager(int id, string pass)
	{
		ID = id;
		password = pass;
	}
	int getID()
	{
		return ID;
	}
	string getpass()
	{
		return password;
	}
	void setdetails(int id, string pass)
	{
		ID = id;
		password = pass;
	}
	
};
class inventory
{
private:
	int outletID;
	int* itemquantity;
	item* itemlist;
	int size;
	inventorymanager* Imanager;
public:
	inventory()
	{
		outletID = -1;
		itemquantity = nullptr;
		itemlist = nullptr;
		Imanager = nullptr;
		size = 0;
	}
	inventory(int id, int* quantity,item* list,inventorymanager* m, int s)
	{
		outletID = id;
		itemquantity = quantity;
		itemlist = list;
		Imanager = m;
		size = s;
	}
	int getID()
	{
		return outletID;
	}
	int* getquantity()
	{
		return itemquantity;
	}
	void setquantity(int* q)
	{
		itemquantity = q;
	}
	int getSize() {
		return size;
	}
	
	void printItemList() {
		//prints the entire inventory for the store and item details. e.g...
		cout << "Select any item to add to cart!" << endl << endl;
		cout << "1. Mini Skirt" << endl;
		cout << "2. Plain T-Shirt" << endl;
		cout << "3. Leather Jacket" << endl;
		cout << "4. Shear Leggings" << endl;
	}
};
class storeadmin
{
private:
	int ID;
	string password;
public:
	storeadmin()
	{
		ID = 0;
		password = ".";
	}
	storeadmin(int id, string pass)
	{
		ID = id;
		password = pass;
	}
	int getID()
	{
		return ID;
	}
	string getpass()
	{
		return password;
	}
	void setdetails(int id, string pass)
	{
		ID = id;
		password = pass;
	}

};
class storemanager
{
private:
	int ID;
	string password;
public:
	storemanager()
	{
		ID = 0;
		password = ".";
	}
     storemanager(int id, string pass)
	{
		ID = id;
		password = pass;
	}
	int getID()
	{
		return ID;
	}
	string getpass()
	{
		return password;
	}
	void setdetails(int id, string pass)
	{
		ID = id;
		password = pass;
	}
};
class floormanager
{
private:
	int ID;
	string password;
public:
	floormanager()
	{
		ID = 0;
		password = ".";
	}
	floormanager(int id, string pass)
	{
		ID = id;
		password = pass;
	}
	int getID()
	{
		return ID;
	}
	string getpass()
	{
		return password;
	}
	void setdetails(int id, string pass)
	{
		ID = id;
		password = pass;
	}

};
class salesagent
{
private:
	int ID;
	string workshift;
public:
	salesagent()
	{
		ID = 0;
		workshift = ".";
	}
	salesagent(int id, string ws)
	{
		ID = id;
		workshift = ws;
	}
	int getID()
	{
		return ID;
	}
	string getworkshift()
	{
		return workshift;
	}
	void setdetails(int id, string ws)
	{
		ID = id;
		workshift = ws;
	}
};

class outlet
{
private:
	string city;
	int ID;
	string status;
	storemanager* Smanager;
	inventorymanager* Imanager;
	floormanager* Fmanager;
	salesagent* Sagent;
	storeadmin* admin;
	string discountpolicy;
	inventory* catalog;
public:
	outlet()
	{
		city = ".";
		ID = -1;
		status = ".";
		Smanager = nullptr;
		Imanager = nullptr;
		Fmanager = nullptr;
		Sagent = nullptr;
		admin = nullptr;
		discountpolicy = ".";
		catalog = nullptr;

	}
	outlet(string c, int id, string s,storemanager* sm,inventorymanager* i, floormanager* f,salesagent* sa,storeadmin* a,string dp, inventory* in)
	{ 
	city = c;
	ID = id;
	status =s;
	Smanager = sm;
	Imanager = i;
	Fmanager = f;
	Sagent = sa;
	admin = a;
	discountpolicy = dp;
	catalog = in;
	}
	string getstatus()
	{
		return status;
	}
	string getpolicy()
	{
		return discountpolicy;
	}
	void setstatus(string s)
	{
		status = s;
	}
	void setpolicy(string p)
	{
		discountpolicy = p;
	}
	void setstoremanager(storemanager* sm)
	{
		Smanager = sm;
	}
	void setinventorymanager(inventorymanager* i)
	{
		Imanager = i;
	}
	void setfloormanager(floormanager* f)
	{
		Fmanager = f;
	}
	void setstoreadmin(storeadmin* a)
	{
		admin = a;
	}
	void setsalesagent(salesagent* sa)
	{
		Sagent = sa;
	}
	
};
// interface
class productreport
{
public:
	virtual void viewproductreport() = 0;

};
// interface
class salesagentreport
{
public:
	virtual void viewsalesagentreport() = 0;
};
class report: public productreport,salesagentreport
{
public:
	void viewproductreport() {};
	void viewsalesagentreport() {};
};
class attendancesheet
{
private:
	string date;
	salesagent* list;
	bool* checkin;
	bool* checkout;
public:
	attendancesheet()
	{
		list = nullptr;
		checkin = nullptr;
		checkout = nullptr;
		date = ".";
	}
	attendancesheet(string d, salesagent* sa, bool* ci, bool* co)
	{
		date = d;
		list = sa;
		checkin = ci;
		checkout = co;
	}
	void setdate(string d)
	{
		date = d;
	}
	void setagentlist(salesagent* sa)
	{
		list = sa;
	}
	string getdate()
	{
		return date;
	}
	salesagent* getagentlist()
	{
		return list;
	}
	

};
class attendance
{
private:
	int outletID;
	attendancesheet* sheet;
	
public:
	attendance()
	{
		outletID = 0;
		sheet = nullptr;
	}
	attendance(int id, attendancesheet* attendance)
	{
		outletID = id;
		sheet = attendance;
	}
	void setoutletID(int id)
	{
		outletID = id;
	}
	int getoutletID()
	{
		return outletID;
	}


};
class onlinestore
{
private:
	inventory* list;
public:
	onlinestore()
	{
		list = nullptr;
    }
	onlinestore(inventory* i)
	{
		list = i;
	}

	inventory* getList() {
		return list;
	}

};

//we will flesh out proper working functions in the final deliverable. For now we have set up a skeleton code for our classes.
//Since the deliverable only asks for a welcome page, we have worked on the aesthetics. Functionality will be added later.
//selecting an option will not show too much progression

int main() {
	onlinestore obj;
	int num = 0, num2 = 0;
	string user = "", pass = "";
	do
	{
		cout << "                    Welcome to S&J Boutique! " << endl << endl;
		cout << "S&J offers apparels for both males and females of all age groups! Our store also issues loyalty cards which translates into discounts on your next purchase." << endl << endl;
		cout << "If you are a customer, choose any option below. If you are an employee, select login to proceed." << endl << endl;
		cout << "1. Show catalog" << endl;
		cout << "2. Login" << endl;
		
		cin >> num;
		system("CLS");

		while (1) {
			if (num == 1) {
				inventory* catalog;
				catalog = obj.getList();
				catalog->printItemList();
				cout << "0. Back" << endl;
				cin >> num;
				if (num == 0) {
					break;
				}
				break;
			}
			else if (num == 2) {
				cout << "Are you a customer or an employee?" << endl << endl;
				cout << "1. Customer" << endl << "2. Employee" << endl << "0. Back" << endl;
				cin >> num2;
				system("CLS");
				if (num2 == 1) {
					cout << "Enter username: ";
					cin >> user;
					cout << "Enter password: ";
					cin >> pass;
				}
				else if (num2 == 2) {
					cout << "Enter username: ";
					cin >> user;
					cout << "Enter password: ";
					cin >> pass;
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}
		if (num != 1 && num != 2) {
			break;
		}
	} while (true);

	cout << "                          Goodbye!" << endl << endl;
	system("pause");
	return 0;
}