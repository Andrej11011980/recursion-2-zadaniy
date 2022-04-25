//2. От A до B.
//Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
	//Ввод: 5 1
	//Вывод : 5 4 3 2 1
#include <iostream>
using namespace std;
int n;
void otrezok(int A, int B) {
	if (A < B) {
		cout << A << "\t";
		A++;
		 otrezok(A, B);

		
	}
	if (A > B) {
		cout << A << "\t";
		A--;
		otrezok(A, B);
	}
	else if (A == B) return;
	
		
}
int main()
{
	
	otrezok(2, 5);
	
	
}

