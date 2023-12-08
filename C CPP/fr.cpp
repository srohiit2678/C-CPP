/*fwrite() Parameters

    buffer: Pointer to the block of memory whose content is written.
    size: Size of each objects in bytes.
    count: The number of objects to read.
    stream: The file stream to write the data to.
    */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int retVal;
    FILE *fp;
    char buffer[] = "Writing to a file using fwrite.";

    fp = fopen("data.txt","w");
    retVal = fwrite(buffer,sizeof(buffer),1,fp);
    
    cout << "fwrite returned " << retVal;
    return 0;
}
