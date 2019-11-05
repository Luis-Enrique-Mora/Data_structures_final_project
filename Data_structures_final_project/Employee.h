#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
	private:
		
		int id;
		string name;
		string address;
		string telephone;
		string profesion;
		string job;
		string department;
		string hiring_date;
		float salary;
		
	public:	
		
		Employee()
		{
			id = 0;
			name = "";
			address =  "";
			telephone = "";
			profesion = "";
			job = "";
			department ="";
			hiring_date "";
			salary = 0.0;
		}
		
		Employee(int id,string name,string address,string telephone,string profesion,
				 string job,string department,string hiring_date,float salary)
		{
			this->id = id;
			this->name = name;
			this->address =  address;
			this->telephone = telephone;
			this->profesion = profesion;
			this->job = job;
			this->department = department;
			this->hiring_date hiring_date;
			this->salary = salary;
		}
		
		
		
		
		
};
#endif
