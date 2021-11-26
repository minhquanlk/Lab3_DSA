﻿#include "Header.h"

void Swap(int& a, int& b, ll& compare_count) {
	int temp = a;
	a = b;
	b = temp;
}

void SelectionSort(int n, int* a, ll& compare_count) {
	int minTemp;
	for (int i = 0; (++compare_count) && (i < n - 1); ++i) {
		minTemp = i; // Giá trị ban đầu
		for (int j = i + 1; (++compare_count) && (j < n); ++j) if ((++compare_count) && (a[minTemp] > a[j])) { // Tim giá trị nhỏ nhất của phần chưa săp xếp
			minTemp = j;
		}
		Swap(a[i], a[minTemp], compare_count); // Hoán vị với phần tử cuối của phần đã sắp xếp
	}
}