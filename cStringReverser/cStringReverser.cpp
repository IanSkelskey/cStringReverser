#include<iostream>
#include<cstring>

using namespace std;


char cString[100], rcString[100];

void reverse(char*);

int main()
{
	cout << "Enter a string to be reversed: ";
	cin.getline(cString, 100);
	reverse(cString);
	cout << "Your string backwards is: " << cString << endl;

	return 0;
}

void reverse(char *string)
{
	int length, i;
	char *head, *tail, temp;
	length = strlen(cString);
	head = string;
	tail = string;

	for (i = 0; i < (length - 1); i++)
		tail++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *tail;
		*tail = *head;
		*head = temp;
		head++;
		tail--;
	}
}
