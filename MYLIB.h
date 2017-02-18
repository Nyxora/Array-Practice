#ifndef MYLIB
#define MYLIB

template <class T, int n> class ONE
{
private: T a[n];
public: void ReadData();
		int Total();
		void Display();
		void Average(T sum, float& ave);
};

template <class T, int n> 
void ONE <T, n> :: ReadData()
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter a phrase:"; cin >> a[i];
	}
}

template <class T, int n>
int ONE<T,n>::Total()
{
	T total = 0;
	for(int i=0; i<n; ++i) total += a[i];
	return total;
}

template <class T, int n> 
void ONE <T, n> :: Display()
{
	for (int i = 0; i < n; ++i)	cout << a[i] << '\t';
	cout << endl;
}

template <class T, int n>
void ONE<T,n>::Average(T sum, float& ave)
{
	ave = float(sum)/5;
}

#endif