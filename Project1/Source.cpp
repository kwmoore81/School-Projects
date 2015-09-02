#include  <iostream>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <cstring>
#include "Header.h";

using namespace std;

extern float gal_lit = 3.78533;

void SmallFloat(float a, float b)
{ 
	if (a > b)
	{
		std::cout << b << std::endl;
		
	}
	else
	{
		std::cout << a << std::endl;

	}

}

void SmallFloat(float a, float b, float c)
{
	
}
void Half(float fnum)
{
	float halfNum;
	halfNum = fnum / 2;
	std::cout << halfNum << std::endl;
}
/*
void CoinToss(int toss)
{
	int results;
	for (int toss; toss > 0; --toss)
	{
		
		results = rand() % toss;
	
	}
	std::cout << results << std::endl;
}
*/
int expo(int a, int b)
{ 
	int c = a;
	
	for (int i = 1; i < b; ++i)
	{
		
		c = c * a;
		
	}
	return c;
}

int Facto(int a)
{
	int b = a;

	for (int i = a; i > 0; --i)
	{

		b = b * i;

	}
	return b;
}
int sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		 
	
		sum = sum + a[i];
		
	}
	return sum;
}

int MinInArray(int interger_array[], int size)
{
	int smallest = INT_MAX;
	for (int i = 0; i < size; ++i)
	{
	
		if (interger_array[i] < smallest)
		{
			smallest = (interger_array[i]);
		}

	}
	return smallest;
}

int MultiplyByIndex(int input_array[], int output_array[], int size)
{

	for (int i = 0; i < size; ++i)
	{
		output_array[i] = input_array[i] * i;
		
		std::cout << output_array[i] << " " << std::endl;
	}
	return output_array[size];
}

void array_input(int runningSum[], int size)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		std::cout << runningSum[i] << std::endl;
		runningSum[i + 1] = runningSum[i] + runningSum[i + 1];
		
	}
	
}

int Find_Num(int indexArray[], int size, int whichNum)
{
	for (int i = 0; i < size; ++i)
	{
		if (whichNum == indexArray[i])
		{
			std::cout << i << std::endl;
			return i;
		}
		
	}
	std::cout << -1 << std::endl;
	return -1;
}
void NumCalls()
{
	static int timesCalled = 0;
	
		++timesCalled;
	
	std::cout << "I have been called " << timesCalled << " times." << std::endl;
	
}


int main()
{
	vec2 point1, point2, point3, point4;
	/*
{
	std::cout << 2 / 3 + 3 / 5 << std::endl;
	std::cout << 2 % 3 + 3 % 5 << std::endl;
	std::cout << 23 % 15 % -2 << std::endl;
	std::cout << 25 * 1 / 2 << std::endl;
	std::cout << 25 * 1.0 / 2 << std::endl;
	std::cout << 25 * (1 / 2) << std::endl;
	std::cout << 235 / 8 + 7 << std::endl;
	std::cout << 235 / 8.0 + 7 << std::endl;
	std::cout << ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2 << std::endl;


2.
A: sHight
B: taxRateHigh
C: taxRateLow
D: steamGamesTotal

3.
A:short
B:float
C:char
D:int
E:bool

{
	int a = 0 ;
	int b = 0;
	int c = b;

	std::cout << "type a number" << std::endl;
	std::cin >> a; //5
	std::cout << "type a second number" << std::endl;
	std::cin >> b; //10
	std::cout << "Your First Number Was:" << a << std::endl;
	std::cout << "Your Second Number Was:" << b << std::endl;


	b = a, a = c;

		std::cout << "Your First Number Was:" << a << std::endl;

		std::cout << "Your Second Number Was:" << b << std::endl;



{
	int y;
	int x;

	if (y == 0)
	{

		x == 100;

	}


{
int a;
int b;



	std::cout << "type a number" << std::endl;
	std::cin >> a;
	std::cout << "type a second number" << std::endl;
	std::cin >> b;

	if (a > b)

	{
		std::cout << a << std::endl;
	}

	else
	{
		std::cout << b << std::endl;
	}

{

	float num1, num2, num3, num4, num5, holder, order1, order2, order3, order4, order5, sum;
	std::cout << "Enter your first Number:" << std::endl;
	std::cin >> order1;

	std::cout << "Enter your Second Number:" << std::endl;
		std::cin >> order2;

		if (order2 > order1)
		{
			holder = num1;
			num1 = num2;
			num2 = holder;
		}
		std::cout << "Enter your Third Number:" << std::endl;
		std::cin >> num3;

		if (num3 > num1)
		{
			holder = num1;
			num1 = num3;
			num3 = num2;
			num2 = holder;

		else ()
		}









	sum = num1 + num2 + num3 + num4 + num5;
	if (sum > 0)
	{





	}

	else if (sum < 0)

	{


	}

	 else if (sum == 0)

	 {



	 }



	/*
	{
	int choice;
	std::cout << "enter a number between 1-4:" << endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "1";
			break;
		case 2:
			std::cout << "2";
			break;
		case 3:
			std::cout << "3";
			break;
		case 4:
			std::cout << "4";
			break;
		default:
			std::cout << "Invalid";
			break;
		}



{
	float x, y;
	std::cout << "enter a number:" << endl;
	std::cin >> x;
	y = (x == 0) ? 0 : 10 / x;



{
	float a, c, sum;
	char b;
	std::cout << "Type an equation" << endl;
	std::cin >> a >> b >> c;

	if (b == 43)
	{
		sum = a + c;
	}
	else if (b == 45)
	{
		sum = a - c;
	}
	else if (b == 42)
	{
		sum = a * c;
	}
	else if (b == 47)
	{
		sum = a / c;
	}

	else if (b == 37)
	{
		sum = a % c;

	std::cout << sum << ::endl;



{

	int month;
	std::cout << "enter the number of a month:" << endl;
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "31";
		break;
	case 2:
		std::cout << "28 or 29";
		break;
	case 3:
		std::cout << "31";
		break;
	case 4:
		std::cout << "30";
		break;
	case 5:
		std::cout << "31";
		break;
	case 6:
		std::cout << "30";
		break;
	case 7:
		std::cout << "31";
		break;
	case 8:
		std::cout << "31";
		break;
	case 9:
		std::cout << "30";
		break;
	case 10:
		std::cout << "31";
		break;
	case 11:
		std::cout << "30";
		break;
	case 12:
		std::cout << "31";
		break;
	default:
		std::cout << "Invalid";
		break;

	}

{

	for (int i = 100; i >= 0; i-- && i--)
	{
		std::cout << i << ::endl;
	}

{


	for (int i = 0; i <= 100; ++i)
	{
		if ((i % 3) == 0 && !(i % 5) == 0)
		{
			std::cout << "Fizz "<< i << ::endl;
		}
		if ((i % 5) == 0 && !(i % 3) == 0)
		{
			std::cout << "Buzz " << i << ::endl;
		}
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			std::cout <<"FizzBuzz " << i << ::endl;
		}

	}

{
	int total = 0;
	for (int i = 999; i >= 0; i--)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{

			total = total + i;

		}


	}

	std:cout << total << std::endl;

{
	int i = 102;

	while (i >= 1)
	{
		--i;
		--i;
		std::cout << i << std::endl;
	}





{

	int i = 100;

	while (i >= 0)
	{


		if ((i % 5) == 0 && (i % 3) == 0)
		{
			std::cout << "FizzBuzz"<< i << std::endl;
		}
		else if ((i % 3) == 0)
		{
			std::cout << "Fizz" << i << std::endl;
		}
		else if ((i % 5) == 0)
		{
			std::cout << "Buzz" << i << std::endl;
		}
		--i;


{
	int i = 999, total = 0;

	while (i >= 0)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total = total + i;
		}
	}
	std:cout << total << std::endl;

{
	int data[10];

	for (int i = 0, val = 10; i < 10; ++i)
	{
		data[i] = val;
		std::cout << data[i] << std::endl;
		--val;
	}

{
	float user[5];
	float val;
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> val;
		user[i] = val;

	}

	for (int i = 4; i >= 0; --i)
	{
		std::cout << user[i] << std::endl;
	}


{
	float user[10];
	float val, large, small;
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> val;
		user[i] = val;

		if (val > large)
		{
			large = val;
		}

		else if (val < small)
		{
			small = val;
		}

	}
	std::cout << large << " " << small << ::endl;

{

	int grid[3][3];
	int start = 1;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			grid[i][j] = start;
			std::cout << grid[i][j] << " ";
			++start;
		}
		std::cout<<endl;

	}


{
	int grid[29][5];
	int start = 1;
	for (int i = 0; i < 29; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			grid[i][j] = start;

			++start;
		}
		std::cout << endl;


	}
	int sumRow = 0, sumCol = 0;
	for (int i = 0; i < 29; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{

			grid[i][j];
			sumRow = i + sumRow;
			sumCol = j + sumCol;

		}

	}
	std::cout << sumRow << " " << sumCol << std::endl;


	{



		int characters[5]{ 100, 100, 100, 100, 100 };
		int health, dmg = 40, att = -1;
		for (int  stamina = 5 ; stamina > 0; --stamina)
		{
			std::cout << "enter a number between 0-4:" << std::endl;
			std::cin >> characters[att];
			if (att > 4 || att < 0)
			{
				std::cout << "Error, choose again." << std::endl;

			}

			else if (characters[att] = 0)
			{
				std::cout << "Player is dead, choose another:" << std::endl;

			}

			else (health = characters[att]);
			{
				health - dmg;
				characters[att] = health;
				std::cout << characters[5] << std::endl;
			}

		}
		std::cout << "Out of Attacks!" << std::endl << "End Results: " << std::endl << characters[5] << std::endl;



{

		float num1, num2;
	std::cout << "Enter Two Numbers: ";
	std::cin >> num1 >> num2;

	SmallFloat(num1 , num2);

{

	Half(16.721f);




	int toss;
	std::cout << "How many time would you like to toss the coin? " << std::endl;
	std::cin >> toss;

	CoinToss(toss);





std::cout << expo(5, 5) << std::endl;


std::cout << Facto(10) << std::endl;


int a[5]{ 1, 2, 3, 4, 5 };
int result = sum(a, 5);
std::cout << result << std::endl;


int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
int result = MinInArray(integer_array, 7);
std::cout << result << std::endl;


int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
int output_array[7] = {};
MultiplyByIndex(integer_array, output_array, 7);


int runningSum[4] = { 2, 4, 6, 8 };
array_input(runningSum, 4);


int indexArray[5]{ 10, 20, 30, 40, 50 };
Find_Num(indexArray, 5, 30);

			// strings, characters
char fullName[5][128];

for (char i = 0; i < 5; ++i)
{
	std::cout << "What is your full name?" << std::endl;
	std::cin.getline(fullName[i], 128);

}

for (char i = 0; i < 5; ++i)
{
	int j = strlen(fullName[i]);
	for (char i = j; i >= 0; --i)

	{
		std::cout << fullName[i] << std::endl;
	}

}

//std::cout << "What is your last name?" << std::endl;
//std::cin.getline(fullName[1], 128);

std::cout << '\a';


	char unpw[2][128];

	std::cout << "Enter your User Name: " << std::endl;
	std::cin.getline(unpw[1], 128);

	std::cout << "Enter your password: " << std::endl;
	std::cin.getline(unpw[2], 128);

 if (strlen(unpw[2]) < 8)
{
	std::cout << "The Password must be at least 8 characters." << std::endl;
	std::cout << "Enter your password: " << std::endl;
	std::cin.getline(unpw[2], 128);
}
 bool hasCap = false; bool hasNum = false; bool hasSym = false;
 for (char i = 0; i < strlen(unpw[2]); ++i)
 {
	 
	 if (strlen(unpw[i]) >= 65 && strlen(unpw[i]) <= 90) hasCap = true;
	 if (strlen(unpw[i]) >= 48 && strlen(unpw[i]) <=57) hasNum = true;
	 if (strlen(unpw[i]) >= 33 && strlen(unpw[i]) <= 47) hasSym = true;

 }
 

	for (int i = 0; i < 20; ++i)
	{
		NumCalls();
		++i;
	}
	
int gallons;
float conversion;
std::cout << "Enter the number of gallons: " << std::endl;
std::cin >> gallons;
   
conversion = gallons * gal_lit;
std::cout << "That equals " << conversion << " in liters" << std::endl;


PlayerData player1;

createPlayer1();

player1 = createPlayer1();
*/

Shop generalStore1;

generalStore();

	system("pause");
	return 0;
	
	
	 

 }

