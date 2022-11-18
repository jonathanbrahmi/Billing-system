#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	int bar1 = 177, bar2 = 219, answer = 63, price, number_of_item, sum; 
	string name; 
	cout <<"Billing system written by jonathan brahmi\n"; 
	cout <<endl;
    cout <<"menu. . .\n-----------\n - Tv: 300\n - Playstation 5: 3019\n - Xbox one s: 2199\n";  
    cout <<endl;
	cout <<"Enter name of item"<<(char)63; 
	cin >>name;  
	cout <<"Enter price of item"<<(char)63; 
	cin >>price;
	cout <<"Enter number of item"<<(char)63; 
	cin >>number_of_item;  
	sum = number_of_item * price;
	cout <<endl;
	cout <<"Processing. . .\n"; 
	cout <<"------------"; 
	cout <<endl;
	for (int i = 0; i < 25;i++) 
		cout <<  (char)bar1;  
		
	cout <<"\r"; 
		
	for (int i = 0; i < 25;i++) 
	{
		cout << (char)bar2; 
		Sleep(150);
	}  
	cout <<endl;
    cout <<"------------\n";
	cout <<" - Name of item:"<<name<<"\n - Price:"<<price<<"\n - Total Price:"<<sum;
	cout <<endl;
	cout <<"\nPress any key to exit";
	cin.ignore(); 
	cin.get(); 
	
	return 0;
}
