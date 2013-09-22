#include "stdafx.h"
#include <iostream>
using namespace std;
class Count{
private:int y,i;
		float x,ans;
public:
	float count(int y,float x);
};
float Count::count(int y,float x){
		   ans=1;
		   for(i=1;i<=y;i++){
			   ans=x*ans;
		   }
		   return ans;
}

int main(){
	Count test;
	cout<<"´ğ°¸Îª"<<test.count(4,3)<<endl;
	system("pause");
	return 0;
};

