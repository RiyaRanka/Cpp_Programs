// Problem: Delete an element in the array given by user, if the element is repetitive then delete all the duplicates of the element in the array.
#include <iostream>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter size of array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value of array at " << i << " index : ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Your array is ";
    for (i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int deleteNum, n=0, j, newSize;
    cout << "Enter the value you want to delete in the array: ";
    cin >> deleteNum;
    for (i=0; i<size; i++) {
            if (deleteNum == arr[i]) {
            for(j=i; j<size; j++) {
                arr[j] = arr[j+1];
            }
            n++;
            i--;
            size--;
        }
    }
    if(j == size && n==0) // if same elements value are in array then it would be deleted all irrespective of position in the array
        cout<<"\nGiven value doesn't found in the Array.";
    else {
        cout<<"\n'" << deleteNum << "' gets deleted from the array \n" << "The New Array: [";
        for (j=0; j<size; j++) {
            cout << arr[j] << " ";
         }
    }
    cout << "]" << endl;
    return 0;
}
