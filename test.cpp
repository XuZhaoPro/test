#include <iostream>
#include <thread>
using namespace std;

void call_from_thread()
{
  std::cout << "Hello, World!" << std::endl;
}
	 
int main()
{
  int a;
  cin>>a;
  cout<<a<<endl;
  std::thread t1(call_from_thread);
  t1.join();
  cout << [](int m, int n) { return m + n;} (2,4) << endl;
  return 0;
}







    
