/*
一个整数指出身高（英寸）
身高转化为英尺和英寸
下划线字符指示输入位置
*/
# include <iostream>
const double Inch_per_feet = 12.0L;
int main(void) {
	using namespace std;
	cout << "Please enter your height:__\b\b";
	double ht_inch;
	cin >> ht_inch;

	double ht_feet = ht_inch / Inch_per_feet;
	cout << "Your height is:" << ht_feet << "feets\n";
	return 0;
}