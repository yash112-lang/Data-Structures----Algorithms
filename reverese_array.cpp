# include <iostream>

using namespace std;

int main()
{
    int num;
	cin >> num;
	int *arr = (int *)malloc(num * sizeof(int));
	for(int i = 0; i < num; i += 1) {
		cin >> arr[i];
	}

	for(int i = num; i > 0; i -= 1) {
		cout << arr[i-1] << endl;
	}
    return 0;
}