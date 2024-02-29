// Pointer Practice Assignment

// Question 1
// #include <iostream>
// using namespace std;
// int main() {
// 	int  x = 27;  
// 	int  *ip;        
// 	ip = &x;       
// 	cout << *ip;
// 	return 0;
// }
// 27

// Question 2
// #include <iostream>
// using namespace std;
// int main() {
// 	int  x = 27;  
// 	int  *ip;        
// 	ip = &x;  
//         (*ip)++;    
// 	cout << *ip;
// 	return 0;
// }
// 28

// Question 3
// #include <iostream>
// using namespace std;
// int main() {
// 	int *ip;
//     int tot = 0; 
// 	int arr[] = { 10, 20, 30, 10, 20, 0 };
// 	ip = arr;
        
// 	for (int x = 0; x < 6; x++) {
// 		tot += *ip; 
// 		ip++;
// 	}
//     cout << tot;
// 	return 0;
// }
// 90

// Question 4
// #include <iostream>
// using namespace std;
// int main() {
// 	int *ip;
//     int tot = 0; 
// 	int arr[] = { 10, 20, 30, 10, 20, 99 };
// 	ip = arr;
        
// 	for (int x = 0; x < 5; x++) {
// 		ip++;
// 	}
//     cout << *ip;
// 	return 0;
// }
// 99

// Question 5
// #include <iostream> 
// using namespace std; 
// int main() { 
//     int *p, x = 30; 
//     p = &x; 
//     x *= 2; 
//     cout << *p; 
//     return 0; 
// }
// 60

// Question 6
// #include <iostream>
// using namespace std;
// void test(int*, int*);
// int main() {
// 	int a = 5, b = 5;

// 	test(&a, &b);
//         cout << a + b;
// 	return 0;
// }

// void test(int* n1, int* n2) {
// 	*n1 = 10;
// 	*n2 = 11;
// }
// 21

// Question 7
// C++ program to illustrate call-by-methods in C++
// #include <iostream>
// using namespace std;
// //Pass-by-Value
// int square1(int n)
// {
//     n *= n;
//     return n;
// }
// int main ()
// {
//     int n1=8;
//     square1(n1);
//     cout << n1; 
// }
// 8

// Question 8
// C++ program to illustrate call-by-methods in C++

// #include <iostream>
// using namespace std;
// //Pass-by-Reference with Pointer Arguments
// void square2(int *n)
// {
//     *n *= *n;
// }
// int main ()
// {
//     //Call-by-Value
//     int n2=8;
//     square2(&n2);
//     cout << n2;
// }
// 64

// Question 9
// C++ program to illustrate call-by-methods in C++

// #include <iostream>
// using namespace std;
// void square3(int &n)
// {
//     n *= n;
// }
// int main ()
// {
//     int n3=8;
//     square3(n3);
//     cout << n3;
// }
// 64

// Question 10
// C++ program to illustrate Pointer Arithmetic in C++
// #include <iostream>

// int main()
// {
//     //Declare an array
//     int val[3] = { 5, 10, 20 };

//     //declare pointer variable
//     int *ptr;

//     //Assign the address of val[0] to ptr
//     // We can use ptr=&val[0];(both are same)
//     ptr = val ;

//     std::cout << ptr[0] + ptr[1] + ptr[2];
// }
// 35