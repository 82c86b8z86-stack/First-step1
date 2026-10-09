//#include<iostream>
//using namespace std;

//int main()
//{
//	int N;
//	cin>>N;
//	cout<<"   +---+"<<endl;
//	for(int i=0;i<N;i++)
//	{
//		cout<<"  /     \\ "<<endl;  add a blank in wrong
//		cout<<" +      +"<<endl;    lose a blank
//		cout<<"  \\     /"<<endl;
//		cout<<"   +---+"<<endl;
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    cout << "   +---+" << endl;
    for (int i = 0; i < n; i++) 
	{
        cout << "  /     \\" << endl;
        cout << " +       +" << endl;
        cout << "  \\     /" << endl;
        cout << "   +---+" << endl;
    }
    
    return 0;
}