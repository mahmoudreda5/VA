//============================================================================
// Name        : VA.cpp
// Author      : mahmoud reda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

	// task A
	// i will use console input for this task
	int rows, cols;
	printf("enter #rows: "); scanf("%d", &rows);
	printf("enter #cols: "); scanf("%d", &cols);

	vector<int> mat(rows * cols);  // linear instead of 2d
	int minInd = 0, maxInd = 0;
	printf("enter matrix numbers: \n");
	for(int i = 0; i < rows * cols; i++) {
		scanf("%d", &mat[i]);
	}

	// find min value and index, max value and ind
	for(int i = 1; i < rows * cols; i++) {
		if(mat[i] > mat[maxInd]) maxInd = i;
		else if(mat[i] < mat[minInd]) minInd = i;
	}

	printf("max number: %d, index: %d, row: %d, col: %d\n", mat[maxInd], maxInd, maxInd / cols + 1, minInd % cols + 1);
	printf("min number: %d, index: %d, row: %d, col: %d\n", mat[minInd], minInd, minInd / cols + 1, minInd % cols + 1);
	return 0;
}
