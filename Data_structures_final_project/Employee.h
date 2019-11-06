#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
class Employee
{
	private:
		
		int id;
		string name;
		string address;
		string telephone;
		string profession;
		string job;
		string department;
		string hiring_date;
		float salary;
		
	public:	
		
		Employee()
		{
			this->id = 0;
			this->name = "";
			this->address =  "";
			this->telephone = "";
			this->profession = "";
			this->job = "";
			this->department ="";
			this->hiring_date = "";
			this->salary = 0.0;
		}
		
		Employee(int id,string name,string address,string telephone,string profession,
				 string job,string department,string hiring_date,float salary)
		{
			this->id = id;
			this->name = name;
			this->address =  address;
			this->telephone = telephone;
			this->profession = profession;
			this->job = job;
			this->department = department;
			this->hiring_date = hiring_date;
			this->salary = salary;
		}
		
		void setId(int id)
		{
			this->id = id;
		}
		
		void setName(string name)
		{
			this->name = name;
		}
		
		void setAddress(string address)
		{
			this->address = address;
		}
		
		void setTelephone(string telephone)
		{
			this->telephone = telephone;
		}
		
		void setProfession(string profession)
		{
			this->profession = profession;
		}
		
		void setJob(string job)
		{
			this->job = job;
		}
		
		void setHiring_date(string hiring_date)
		{
			this->hiring_date = hiring_date;
		}
		
		void setSalary(float salary)
		{
			this->salary = salary ;
		}
		//////////////////////////////
		int getId()
		{
			return this->id;
		}
		
		string getName()
		{
			return this->name;
		}
		
		string getAddress()
		{
			return this->address;
		}
		
		string getTelephone()
		{
			return this->telephone;
		}
		
		string getProfession()
		{
			return this->profession;
		}
		
		string getJob()
		{
			return this->job;
		}
		
		string getHiring_date()
		{
			return this->hiring_date;
		}
		
		float getSalary()
		{
			return this->salary;
		}
		
};
#endif
