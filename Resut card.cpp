#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int Grade;
	float Eng,math,phy,chem,bio,udru,sum,total;
	float p;
	cout<<"Enter the English  Marks";
	cin>>Eng;
	cout<<"Enter the Math  Marks";
	cin>>math;
	cout<<"Enter the Physics  Marks";
	cin>>phy;
	cout<<"Enter the Chemistry  Marks";
	cin>>chem;
	cout<<"Enter the Bio  Marks";
	cin>>bio;
	cout<<"Enter the Udru   Marks";
	cin>>udru;
	sum=Eng+math+phy+chem+bio+udru;
	cout<<"Obtain cmarks="<<sum;
	cout<<"\n Please enter total Marks=";
	cin>>total;
	p=(sum*100)/total;
	cout<<"\n the persentage total marks is :="<<p<<"%";
	if(p>=81.5){
		cout<<"\n Grade is A+:";
	}
	else if(p>=71.5 && p<=81.4){
	cout<<"\n Grade is A:";
}
else if(p>=61.5 && p<=71.4){
	cout<<"\n Grade is B:";
}
else if(p>=51.5 && 61.4){
	cout<<"\n Grade is c:";
}
else if(p>=41.5 && 51.4){
	cout<<"\n Grade is D:";
}
else if(p>=33.0 && p<=41.4){
	cout<<"\n Grade is E:";
}
else{
	cout<<"\n your are Fail:";
	cout<<"\n Best of luck next Time:";
}
cout<<"\n\t\t\t\tFarhan Ali";
}

