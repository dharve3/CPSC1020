// 1) a stats class as demo for CPSC 1020
// 2) show how to read from console/terminal
// 3) show how to redirect input from a file
// 4) show how to read data from command line
// 5) show how to read data from a file
// 6) show how to read data from a file with the filename from command line
// video link: https://www.loom.com/share/e8dc40fdaaa543f486bab7a850166d65

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// formally the following goes in a .h file
// class declaration
class StatsForIntegers {
  private:
	  int count {0};
		int total {0};
		vector<int> data;

	public:
	  StatsForIntegers() = default;
		StatsForIntegers(string fileName);
		int calcAverage();
		int getCount() {
		  return count;
		}
		int getTotal() {
		  return total;
		}
};

// class definition
StatsForIntegers::StatsForIntegers(string fileName) {
  string theData;
  ifstream dataSteam(fileName);
	int theInt;

	while (getline (dataSteam, theData)) {
	  // convert string to integer then store in vector
		theInt = stoi(theData);
		data.push_back(theInt);
		total += theInt;
		count++;
	}
}

int StatsForIntegers::calcAverage() {
  if (count > 0) return total / count;
	else return 0;
}

int main(int argc, char* argv[]) {
	//StatsForIntegers myStats("data2.txt"); file name is hard coded in the program; not flexible
	StatsForIntegers myStats(argv[1]); // file name is on the command line from the user; more flexible. 

	cout << "count: " << myStats.getCount() << endl;
	cout << "total: " << myStats.getTotal() << endl;
	cout << "average: " << myStats.calcAverage() << endl;
}
