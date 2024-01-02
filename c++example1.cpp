// c++example1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;


int main()
{/*Print the code that takes the course grades from the user 
 as a number in the 100-point system and writes the letter equivalent
 according to the table below.
   0-50=F
   50+ -70=C
   70+ -90=B
   90+ -100=A
*/
	int grade;
	cout << "Please enter your grade.\n";
	cin >> grade;
	if (grade <= 50 && grade>0) {
		cout << "You got F\n" << "You should study a lot\n";
	}
	else if (grade > 50 && grade <= 70) {
		cout << "You got C\n" << "You are lucky\n";
	}
	else if (grade > 70 && grade <=90) {
		cout << "You got B congratulations\n";
	}
	else {
		cout <<"You got A\n" << "You are awesome\n";
	}





}
