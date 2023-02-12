#include <iostream>

using namespace std;

void bubbleSort(int arr[],int Size)
{

    int temp;

    for(int x=1;x<Size-1;x++)
    {

        for(int i=0;i<Size-x;i++)
        {

            if(arr[i]>arr[i+1])
            {

                temp=arr[i];

                arr[i]=arr[i+1];
                arr[i+1]=temp;
                //swap(arr[i],arr[i+1]);

            }

        }

    }

}

void display(int arr[],int Size)
{

    for(int i=0;i<Size;i++)
    {

        cout<<arr[i]<<endl;

    }

}

int main()
{
    int Size=6;
    int arr[Size];
    arr[0]=56;
    arr[1]=42;
    arr[2]=5;
    arr[3]=87;
    arr[4]=34;
    arr[5]=23;

    display(arr,Size);

    cout<<"......................."<<endl;

    bubbleSort(arr,Size);
    display(arr,Size);

    cout<<"......................."<<endl;

    return 0;
}
