#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    for( string string; getline( cin, string ); )
    {
        int numbers[ 10 ];
        int max = 0;
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }
        
        if( !failure ) {
            max = numbers[0];
            for( int i = 0; i < 10; ++i )
            {
                
                if(max<numbers[i])
                {
                    max=numbers[i];
                }
            }
            cout<<max<<'\n';
        }
        else {
            cout << "An error has occured while reading numbers from line" << std::endl;
        }
    }
}
