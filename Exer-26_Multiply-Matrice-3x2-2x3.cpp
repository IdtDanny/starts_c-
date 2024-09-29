#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	***
*/

main(){
	
	int matA[3][3] = {{3,4,2},{1,2,5},{1,2,5}};
	int matB[3][3] = {{3,4,2},{1,2,5},{1,2,5}};
	int result[3][3];
	int prod = 1;
	
	cout << "Matrice A:" << endl;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matA[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << "Matrice B:" << endl;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matB[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << "Product of MatA & MatB:" << endl;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			result[i][j] = matA[i][j] * matB[j][i];
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}