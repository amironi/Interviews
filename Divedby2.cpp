
#include <iosrteam>
#include <stdio.h>

int array = {1,2,3,4,5,6,7,8,9,10}

void OddFunc(int* array, int n)
{
    for(int i = 1 ; i <n ; ++i)
    {
        if(i%2)
            swap(array[i-1],array[i]);
    }
    
}
int main()
{
    OddFunc();
}


//	{[*}((*{*}){}({{*})
