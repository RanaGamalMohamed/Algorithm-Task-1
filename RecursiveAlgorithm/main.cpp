#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > distance(int , vector<int>);


int main()
{
	int size;
	cout << "Enter Size Of Discs : ";
	cin >> size;
	vector<int>discs(size);
	for (int i = 0; i < size; i++)
	{
		cin >> discs[i];
	}

	vector<vector<int> >array(1, vector<int>(1, 0));

	array= distance(0, discs);

	int sizee=array.size();
    int number=0;

    for(int i=0;i<sizee-1;i++){
       for(int j=i+1;j<sizee;j++)
        if( array[i][j]==1)
            number++;
        else
            continue;
    }
   cout<<"Number of intersections are"<<number<<endl;

}

vector<vector<int> > distance(int index, vector<int> discs)
{
	int size = discs.size();
	static vector<vector<int> >intersectingDiscs(size +1 ,vector<int>(size+1,0));

	for (int i = 0; i < discs.size(); i++)
	{
		if (i <= index)
			continue;

		if (discs[index] + index >= i - discs[i])
		{
			intersectingDiscs[index][i] = 1;
			cout << "disc " << index <<" intersected " << " disc" << i << endl;

		}
	}
	if (index < discs.size() - 1)
	{
		distance(index + 1 ,discs);
	}
	return intersectingDiscs;
}
