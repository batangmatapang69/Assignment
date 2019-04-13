#include <iostream>
using namespace std;

int main() {
   
   float day,year;
   int month;
   

   
   cout<< "Enter Month: ";
   cin>> month;
   
   cout<< "Enter Day: ";
   cin>> day;
   
   cout<< "Enter Year: ";
   cin>> year;
   
   switch(month)
   {
   	case 1: if (month=1)
  	cout<< "January " << day << "," << year << endl;	
    break;
 
   case 2: if (month=2)
   {
   
	cout<< "February " << day << ", " << year << endl;
	break;
}
	case 3: if (month=3)
   {
   
	cout<< "March " << day << ", " << year << endl;
	break;
}
	case 4: if (month=4)
   {
   
	cout<< "April " << day << ", " << year << endl;
	break;
}
	case 5: if (month=5)
   {
   
	cout<< "May " << day << ", " << year << endl;
break;
}
	case 6: if (month=6)
   {
   
	cout<< "June " << day << ", " << year << endl;
break;
}
	case 7: if (month=7)
   {
   
	cout<< "July " << day << ", " << year << endl;
break;
}
	case 8: if (month=8)
   {
   
	cout<< "August " << day << ", " << year << endl;
break;
}
	case 9: if (month=9)
   {
   
	cout<< "September " << day << ", " << year << endl;
break;
}
	case 10: if (month=10)
   {
   
	cout<< "October " << day << ", " << year << endl;
break;
}
	case 11: if (month=11)
   {
   
	cout<< "November " << day << ", " << year << endl;
break;
}
	case 12: if (month=12)
   {
   
	cout<< "December " << day << ", " << year << endl;
break;
}
default: 

cout<< "Invalid date";
}

	
   return 0;
}
