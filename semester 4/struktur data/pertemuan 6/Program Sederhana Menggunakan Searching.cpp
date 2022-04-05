#include<iostream>
using namespace std;

void BinarySearch(int data[], int n, int x, int *idx);

int main()
{
	// data wajib berurutan
	int data[] = {23, 26, 30, 50, 55, 65, 69, 78, 80, 90};
	int idx, x, i, jmlData = 10;
	
	cout<<"Elemen Array: ";
	for(i = 0; i < jmlData; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan data yang akan dicari: ";
	cin>>x;
	
	BinarySearch(data, jmlData, x, &idx);
	if(idx != -1)
	{
		cout<<"Data yang dicari berada pada indeks: "<<idx<<endl;
	}
	else
	{
		cout<<"Data yang dicari tidak ada dalam array"<<endl;
	}
	
}

void BinarySearch(int data[], int n, int x, int *idx)
{
	bool ketemu = false;
	int top = n-1, bottom = 0, mid;
	int i = 0;
	while(bottom <= top && !ketemu)
	{
		mid = (top + bottom) / 2;
		
		if(data[mid] == x)
		{
			ketemu = true;
		}
		else
		{
			if(data[mid] > x)
			{
				top = mid - 1;
			}
			else
			{
				bottom = mid + 1;
			}
		}
	}
		
	if(ketemu)
	{
		*idx = mid;
	}
	else
	{
		*idx = -1;
	}
}

