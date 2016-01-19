#include <iostream> 
#include <sstream>
#include <string>

using namespace std;
   
int main() {

float val;
string str;
string temp;
getline(cin,str);

stringstream ss(str);

while(getline(ss,temp, ' '))
{
    stringstream stream(temp);
    if(stream >> val)
    {
		cout<<2*val<<endl;
	}

    else 
    {
		cout<<"temp --> "<<temp<<endl;
	}
}

}


