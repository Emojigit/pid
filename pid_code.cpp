#include <unistd.h>
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("/proc/sys/kernel/pid_max");

int main() {
  cout << "The biggest pid now is: " << getpid() << endl;
  cout << "Max PID: ";
  if (f.is_open())
    cout << f.rdbuf() << endl;
  return 0;
}
