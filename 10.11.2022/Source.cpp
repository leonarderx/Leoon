#include <iostream>  
//Array4 
//Дано целое число N (>1), а также первый член A и знаменатель D геометрической прогрессии. 
//Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2, A·D3, ... .        


/*1
		int arr[5];
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < 5; i++) {
			cout << arr[i] <<' ';
		}*/

		/*2
		int arr[5];
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
		for (int i = 4; i >= 0; i--) {
			cout << arr[i] << ' ';
		}*/

		/*3
		int arr[10];
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < 10; i+=2) {
				cout << arr[i] << ' ';
			}*/

			/*1
			int arr[10];
			arr[0] = 1;
			for (int i = 1; i < 10; i++) {
				arr[i] = 1 + i * 2;
			}
			for (int i = 0; i < 10; i ++) {
				cout << arr[i] << ' ';
			}*/

			/*2
			int arr[10];
			for (int i = 0; i < 10; i++) {
				arr[i] = pow(2, i);
			}
			for (int i = 0; i < 10; i++) {
				cout << arr[i] << ' ';
			}*/

			/*3
			int arr[10];
			int D, A;
			cin >> D >> A;
			for (int i = 0; i < 10; i++) {
				arr[i] = A+D*i;
			}
			for (int i = 0; i < 10; i++) {
				cout << arr[i] << ' ';
			}*/

			/*4
			int arr[10];
			int D, A;
			cin >> D >> A;
			for (int i = 0; i < 10; i++) {
				arr[i] = A * pow(i,D);
			}
			for (int i = 0; i < 10; i++) {
				cout << arr[i] << ' ';
			}*/
