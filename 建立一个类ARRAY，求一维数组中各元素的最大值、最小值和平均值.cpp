#include <iostream>
 
using namespace std;
 
class ARRAY
{
private:
	float data[10];
	float max;
	float min;
	float average;
	
public:
    void init(float a[10]);
	void process();
	void print();
};
 
void ARRAY::init(float a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		data[i]=a[i];
	}
}
 
void ARRAY::process()
{
	float Max=data[0];
	float Min=data[0];
	float sum=0;
	int a;
	for(a=0;a<10;a++)
	{
		if( data[a]>=data[a+1] )
		{
			if(data[a]>Max)
				Max=data[a];		
		}
		
		else if( data[a]<data[a+1] )
		{
			if(data[a]<Min)
				Min=data[a];
		}
		sum+=data[a];
	}	
	max=Max;
	min=Min;
	average=sum*0.1;	
}
void ARRAY::print()
{
	int i=0;
	int b=0;
	for(i=0;i<10;i++)
	{
		b++;
		cout << data[i] << "   ";
		if(b%5==0)
			cout << endl;
	}
	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
	cout << "average=" << average << endl;
}
 
int main()
{
	float a[10]={ 3, 4, 5, 2, 1, 10, 6, 7, 8, 9 };
	ARRAY arr;
	arr.init(a);
	arr.process();
	arr.print();
	return 0;
}
