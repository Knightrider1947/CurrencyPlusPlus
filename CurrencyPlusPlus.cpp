#include<iostream>
#include<string>

using namespace std;


class Money
{
private:
	int dollars;
	int cents;
public:
	int getdollars() const;
	int getcents() const;
	void setdollars(int);
	void setcents(int);
	void input();
	void output();
	Money friend operator+(const Money& a, const Money& b);
	Money friend operator-(const Money& a, const Money& b);
	Money friend operator*(const Money& a, int n);
	bool friend operator==(const Money& a, const Money& b);
	bool friend operator<(const Money& a, const Money& b);
	bool friend operator>(const Money& a, const Money& b);
	Money(int, int);


};
int Money::getdollars() const
{
	return this->dollars;
}
int Money::getcents() const
{
	return this->cents;
}
void Money::setdollars(int x)
{
	this->dollars = x;
}
void Money::setcents(int y)
{
	if (cents >= 0 && cents <= 0)
	{
		this->cents = y;
	}

}
Money::Money(int x = 0, int y = 0)
{
	this->dollars = x;
	this->cents = y;
}
void Money::input()
{
	cout << "Please enter the Amount of dollars\n";
	cin >> this->dollars;
	while (this->dollars < 0)
	{
		cout << "Please enter the positive Amount of dollars\n";
		cin >> this->dollars;
	}

	cout << " Please enter the amount of cents\n";
	cin >> this->cents;
	while (cents < 0 && cents > 0)
	{
		cout << "Please enter the positive Amount of cents as cents >= 0 && cents <= 0\n";
		cin >> this->cents;
	}
}
void Money::output()
{
	cout << "You have $" << this->dollars << "." << this->cents << " in your wallet\n";

}
Money operator+(const Money& a, const Money& b)
{
	Money c;
	c.dollars = a.dollars + b.dollars;
	c.cents = a.cents + b.cents;
	if (c.cents > 99)
	{
		c.dollars += c.cents / 100;
		c.cents = c.cents % 100;
	}
	return c;
}
Money operator-(const Money& a, const Money& b)
{
	Money c;
	c.dollars = a.dollars;
	c.cents = a.cents;
	if (a.cents < b.cents)
	{
		c.dollars = c.dollars - 1;
		c.cents = c.cents + 100;

	}
	c.dollars = c.dollars - b.dollars;
	c.cents = c.cents - b.cents;
	return c;
}
Money operator*(const Money& a, int n)
{
	Money c;
	c.dollars = a.dollars * n;
	c.cents = a.cents * n;
	if (c.cents > 99)
	{
		c.dollars += c.cents / 100;
		c.cents = c.cents % 100;
	}
	return c;
}
bool operator==(const Money& a, const Money& b)
{
	return(a.dollars == b.dollars && a.cents == b.cents);

}
bool operator<(const Money& a, const Money& b)
{
	return(a.dollars > b.dollars || a.cents > b.cents && a.dollars > b.dollars || a.cents < b.cents);

}
bool operator>(const Money& a, const Money& b)
{
	return(a.dollars < b.dollars || a.cents < b.cents&& a.dollars <b.dollars || a.cents > b.cents);

}
int main()
{
	Money x(4, 50), y(5, 90), z, k, l;

	cout << "Using Adding function and adding into Z\n";
	z = x + y;
	z.output();
	cout << "Using subtract function to subtract x from y assigning into k\n";
	k = x - y;
	k.output();
	cout << "Multiplying y with 5 storing into l\n";
	l = y * 5;
	l.output();
	if (x < y)
	{
		cout << "x is less than y\n";
	}
	else if (x > y)
	{
		cout << "x is greater then y\n";

	}
	else if (x == y)
	{
		cout << "they are equal\n";
	}


	return 0;

}


class Money
{
private:
	int dollars;
	int cents;
public:
	int getdollars() const;
	int getcents() const;
	void setdollars(int);
	void setcents(int);
	void input();
	void output();
	Money friend operator+(const Money& a, const Money& b);
	Money friend operator-(const Money& a, const Money& b);
	Money friend operator*(const Money& a, int n);
	bool friend operator==(const Money& a, const Money& b);
	bool friend operator<(const Money& a, const Money& b);
	bool friend operator>(const Money& a, const Money& b);
	Money(int, int);


};
int Money::getdollars() const
{
	return this->dollars;
}
int Money::getcents() const
{
	return this->cents;
}
void Money::setdollars(int x)
{
	this->dollars = x;
}
void Money::setcents(int y)
{
	if (cents >= 0 && cents <= 0)
	{
		this->cents = y;
	}

}
Money::Money(int x = 0, int y = 0)
{
	this->dollars = x;
	this->cents = y;
}
void Money::input()
{
	cout << "Please enter the Amount of dollars\n";
	cin >> this->dollars;
	while (this->dollars < 0)
	{
		cout << "Please enter the positive Amount of dollars\n";
		cin >> this->dollars;
	}

	cout << " Please enter the amount of cents\n";
	cin >> this->cents;
	while (cents < 0 && cents > 0)
	{
		cout << "Please enter the positive Amount of cents as cents >= 0 && cents <= 0\n";
		cin >> this->cents;
	}
}
void Money::output()
{
	cout << "You have $" << this->dollars << "." << this->cents << " in your wallet\n";

}
Money operator+(const Money& a, const Money& b)
{
	Money c;
	c.dollars = a.dollars + b.dollars;
	c.cents = a.cents + b.cents;
	if (c.cents > 99)
	{
		c.dollars += c.cents / 100;
		c.cents = c.cents % 100;
	}
	return c;
}
Money operator-(const Money& a, const Money& b)
{
	Money c;
	c.dollars = a.dollars;
	c.cents = a.cents;
	if (a.cents < b.cents)
	{
		c.dollars = c.dollars - 1;
		c.cents = c.cents + 100;

	}
	c.dollars = c.dollars - b.dollars;
	c.cents = c.cents - b.cents;
	return c;
}
Money operator*(const Money& a, int n)
{
	Money c;
	c.dollars = a.dollars * n;
	c.cents = a.cents * n;
	if (c.cents > 99)
	{
		c.dollars += c.cents / 100;
		c.cents = c.cents % 100;
	}
	return c;
}
bool operator==(const Money& a, const Money& b)
{
	return(a.dollars == b.dollars && a.cents == b.cents);

}
bool operator<(const Money& a, const Money& b)
{
	return(a.dollars > b.dollars || a.cents > b.cents && a.dollars > b.dollars || a.cents < b.cents);

}
bool operator>(const Money& a, const Money& b)
{
	return(a.dollars < b.dollars || a.cents < b.cents&& a.dollars <b.dollars || a.cents > b.cents);

}
int main()
{
	Money x(4, 50), y(5, 90), z, k, l;

	cout << "Using Adding function and adding into Z\n";
	z = x + y;
	z.output();
	cout << "Using subtract function to subtract x from y assigning into k\n";
	k = x - y;
	k.output();
	cout << "Multiplying y with 5 storing into l\n";
	l = y * 5;
	l.output();
	if (x < y)
	{
		cout << "x is less than y\n";
	}
	else if (x > y)
	{
		cout << "x is greater then y\n";

	}
	else if (x == y)
	{
		cout << "they are equal\n";
	}


	return 0;

}