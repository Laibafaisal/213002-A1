//213002_Laiba Faisal_Mid term_pf lab
#include<iostream>
using namespace std;
int main()
{
   cout<<"Welcome to my Personal Panel "<<endl;
   cout<<"Here is a lsit of options: "<<endl;
   cout<<"1 Time Clock"<<endl;
   cout<<"2 List of odd numbers from 1 to 50"<<endl;
   cout<<"3 Prime number checker "<<endl;
   cout<<"4 Exit"<<endl;
   
   int option;
   cout<<"Choose a number: "<<endl;
   cin>>option;
   while (option<1||option>4)
   {
   	cout<<"Invalid entry"<<endl;
   	cout<<"Enter choice again: "<<endl;
   	cin>>option;
   }
   switch(option)
   case 1:
   	{
   		{
		char clock;
   		cout<<"There are two types of clocks, a 12 hour clock and a 24 hour clock."<<endl;
   		cout<<"'a 12 hour clock"<<endl;
		cout<<"'b 24 hour clock"<<endl;
		cout<<"Please select an option:"<<endl; 
   		cin>>clock;
   		while (clock!='a'&&clock!='b')
   		{
   			cout<<"Invalid entry. Also ensure that 'CAPS LOCK' is off."<<endl;
   			cout<<"Make a choice again: "<<endl;
   			cin>>clock;
		}
   		     switch(clock)
   		     case'a': 
   		             {
   		             	for (int hr=0;hr<=24; hr++)
   		             	{
   		
   		             		for (int min=0; min<=59; min++)
   		             		{
   		             			
   		             			for (int s=0; s<=59; s++)
   		             			{
							        if (hr<12)
   		             	         	{
   		             	            cout<<hr<<":"<<min<<":"<<s<<" AM"<<endl;
						            }
						            else
						            {
									cout<<hr<<":"<<min<<":"<<s<<" PM"<<endl;
							        }
							   
							    }
				           }
				        //Optional Task
						char any;
				        cin>>any;
				        if (any)
				        {
				        cout<<"Welcome to my Personal Panel "<<endl;
                        cout<<"Here is a list of options: "<<endl;
                        cout<<"1 Time Clock"<<endl;
                        cout<<"2 List of odd numbers from 1 to 50"<<endl;
                        cout<<"3 Prime number checker "<<endl;
                        cout<<"4 Exit"<<endl;
                        continue;
					   }
					   
						
			}
		    break;
	        }
							        
   	        case 'b':
   	        	     { 
						for (int hr=0;hr<=24; hr++)
   		             	{
   		             		for (int min=0; min<=59; min++)
   		             		{
   		             			
   		             			for (int s=0; s<=59; s++)
   		             			{
	                             cout<<hr<<":"<<min<<":"<<s<<endl;
	                            }
							}
   	        	        
   	        	//Optional Task
   	        	        char any;
						cin>>any;
						
						if (any)
				        {
				        cout<<"Welcome to my Personal Panel "<<endl;
                        cout<<"Here is a list of options: "<<endl;
                        cout<<"1 Time Clock"<<endl;
                        cout<<"2 List of odd numbers from 1 to 50"<<endl;
                        cout<<"3 Prime number checker "<<endl;
                        cout<<"4 Exit"<<endl;
                        }
                        continue;
                //The use of do while loop was also tried for the optional task, however, the attempt remained unsuccessful.
					   }
						
	    break;
	}
	}

    case 2:  
	       {
	       	cout<<"Here is a list of the odd numbers between 1 and 50: "<<endl;
	       	for (int i=1; i<=50; i++)
	       	{
	       		if (i%2!=0)
	       		cout<<i<<endl;
			}
			break;
		   }  
    case 3: 
	       {
	       	int num;
	       	cout<<"Please enter a number that you want to check whether primary or not: "<<endl;
	       	cin>>num;
	       	if (num%2==0)
	       	{
	       	  cout<<"NO"<<endl;	
			}
			else if (num%3==0)
			{
				cout<<"NO"<<endl;
			}
			else if (num%5==0)
			{
				cout<<"NO"<<endl;
			}
			else if (num%7==0)
			{
				cout<<"NO"<<endl;
			}
			else 
			{
				cout<<"YES"<<endl;
			}
			break;  
			} 
    case 4:
	       {
	       	cout<<"Congratulations! You have earned $1500."<<endl;
	       	exit(1);
		   }   
   	
}
}




	
	
	
	
	
	
	
	
	
	
	

