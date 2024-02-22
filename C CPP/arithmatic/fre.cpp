/*fread() Parameters

    buffer: Pointer to the block of memory to store the objects.
    size: Size of each objects in bytes.
    count: The number of objects to read.
    stream: The file stream to read the data from.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *fp;
    char buffer[100];
    
    fp = fopen("data.txt","rb");
    while(!feof(fp))
    {
        fread(buffer,sizeof(buffer),1,fp);
        cout << buffer;
    }
    
    return 0;
}



