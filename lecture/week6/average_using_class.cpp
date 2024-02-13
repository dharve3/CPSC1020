// find average using a Stat class

#include <iostream>
using namespace std;

class Stat {
private:
	int count;
	int total;
	int largest;
  void checkLargest(int num);

public:
	Stat () : count(0), total(0), largest(0) {}
	bool addNumber(int num);
	int getCount() { return count; }
	int getLargest() { return largest; }
	double calcAverage();
};

void Stat::checkLargest(int num) {
	if (num > largest) largest = num;
}

double Stat::calcAverage() {
	if (count > 0)
	  return static_cast<double>(total) / count;
  else
	  return 0;
}

bool Stat::addNumber(int num) {
  if (num > 0) {
		total += num;
		count++;
		checkLargest(num);
		return true;
	}
	else return false;
}

int main (void) {
  Stat myStat;
  int num;

	cout << "enter some numbers; -1 to stop\n";
  cin >> num;

	while (myStat.addNumber(num)) {
	  cin >> num;
	}

  cout << "count: " << myStat.getCount() << endl;
	cout << "average: " << myStat.calcAverage() << endl;
	cout << "largest: " << myStat.getLargest() << endl;
}
