#include <iostream>

int main()
{
  using namespace std;
  int i, sum=0, num=0; 
  //Initialize variables
  for(i=1; i<=8 ; i++){ 
  //Do 8 times.
    cout<<"enter an Integer"<<endl;
    cin>>num;
  //add one number each time
    sum+=num; 
  }
  cout << "Their sum is " << sum <<endl;
  return 0;
}
