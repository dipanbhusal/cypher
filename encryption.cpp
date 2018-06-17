/* Program to encrypt and decrypt message */
/*By Dipan Bhusal */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char strchoice;

	while(true)	
	{
		int length, count , i , choice;
		string input;
		cout << "\n<<<<<<<<<< Encryption and Decryption >>>>>>>>>>\n [1]. Encrypt Message \n [2]. Decrypt Message \n ";
		cin >> choice;
		cin.ignore();
		cout << "\nEnter your message:\n" ;
		getline(cin, input);
		length = input.length();
	
		switch(choice)
		{
			case 1:
			{
				
			
				/*Encryption starts */
				for(i = 0; i < length; i++)
				{
					if(isalpha(input[i])) //Checks each input value is alphabet or not
					{
						for( count = 0; count < 5; count++) //shifts alphabet to 5th place 
						{
							if(input[i] == 'z')
								input[i] = 'a';
							else input[i]++;
						}
					}
				} 
				cout  << "\n The encrypted message = \n\n" << input;
				break;
				/*Encryption ends*/
			}
			case 2:
				{
					/* Decryption Starts */
					for(i = 0; i < length; i++)
					{
						if(isalpha(input[i]))
						{
							for(count = 0; count < 5; count ++)
							{
								if(input[i] == 'a')
									input[i] = 'z';
								else 
								input[i]--;
							} 
						}
					}
					cout << "\n The decrypted message = \n" << input;
					break;
					/* Decryption ends */
				}
			default:
			cout << "\n Enter valid number. \n \n";
		}
		cout << "\n\n Again want to encrypt/decrypt?    y/n  ";
		cin >> strchoice;
		if(strchoice == 'n')
			break;
	}
}
