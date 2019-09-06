#include <bits/stdc++.h>
#include <chrono>
using namespace std;

long long fb_thuong(const int n) {
	long long a=1;
	long long b=1;
	int i;
	for (i=2;i<=n;i++) {
		b+=a;
		a=b-a;
	}
	return b;
}

long long fb_dequy(const int index) {
    if (index<2) return 1;
    else return (fb_dequy(index-1) + fb_dequy(index-2));
}

int main() {
    chrono::high_resolution_clock::time_point starttime;
	chrono::high_resolution_clock::time_point endtime;
	chrono::duration<double> time;
	cout << "Fibonacci khong su dung de quy!" << endl;
	starttime=chrono::high_resolution_clock::now();
	long long result=fb_thuong(50);
	endtime=chrono::high_resolution_clock::now();
	time = endtime - starttime;
	cout << "Ket qua: " << result << endl;
	cout << "Thoi gian chay: ";
	cout << fixed << setprecision(10) << time.count() << "s" << endl;
	cout << "-------------------------------" << endl;
	cout << "Fibonacci su dung de quy!" << endl;
	starttime=chrono::high_resolution_clock::now();
	result=fb_dequy(50);
	endtime=chrono::high_resolution_clock::now();
    time = endtime - starttime;
    cout << "Ket qua: " << result << endl;
    cout << "Thoi gian chay: ";
    cout << fixed << setprecision(10) << time.count() << "s" << endl;
	return 0;
}
