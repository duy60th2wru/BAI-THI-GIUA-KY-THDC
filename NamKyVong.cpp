#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double tienvon,tienkyvong,laisuat,nam,a,b;
	cout<<"***** CHUONG TRINH TINH SO NAM KY VONG *****"<<endl;
	do
	{
		cout<<"Nhap vao so tien von, lai suat, tien ky vong : ";
		cin>>tienvon>>laisuat>>tienkyvong;
		if(tienvon>=tienkyvong)
		cout<<"Ban da nhap sai, vui long nhap lai.";
		cout<<endl;
	}
	while(tienvon>=tienkyvong);
	laisuat= double(laisuat/100);
	a = double(tienkyvong/tienvon);
	b = double(1+laisuat);
	nam = ((log(a)/log(b)));
	cout<<"So nam can thiet de dat so tien ki vong la : "<<ceil(nam)<<" nam";
	return 0;
}
