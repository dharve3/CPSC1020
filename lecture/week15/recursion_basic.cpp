// This program demonstrates a simple recursive function. 
#include <iostream> 
#include <chrono>
#include <thread>
using namespace std;

void message(int times)
{
  cout << "Message " << times << ".\n";
  if (times > 0)
    {
      //this_thread::sleep_for(chrono::seconds(1));
      message(times - 1);
    }
  //this_thread::sleep_for(chrono::seconds(1));
  cout << "Message " << times << " is returning.\n";
}



int main()
{
  message(3);
  return 0;

  cout << "End of program" << endl;
}

