# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric> // acumalate
using namespace std;

int inc(int x){return x+1;}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
//* Non-Manipulating algorithms

    //? all_of: to check all element follow given cond
    bool are_positive = all_of(arr,arr+5,[](int i){return i>0;});  // i>0: replce by any condition
    //? none_of: to check none element follow given condition
    bool are_negetive = none_of(arr,arr+5,[](int i){return i>0;});
    //? copy_n: copy element to temp arr
    int temp[5];
    copy_n(arr,arr+5,temp);

    //? sort
    sort(arr,arr+5);    // inc order
    sort(arr,arr+5,greater<int>()); // dec order

    //?stable_sort: maintain original order of equal values
    stable_sort(arr,arr+5);
    stable_sort(arr,arr+5,greater<int>());

    //? reverse
    reverse(arr,arr+5);

    //? max min element: returns  iterator to max min element
    int max_pos = *max_element(arr,arr+5);
    int min_pos = *min_element(arr,arr+5);

    //? sum of elements
    int sum = accumulate(arr,arr+5,0);
    cout << sum;

    //? count occurences
    int occurences = count(arr,arr+5,3);    // 3: element

    //? find: returns iterator to first occ of element in arr
    int first_occ = *find(arr,arr+5,4);

    //? binary_search : return 1/0
    bool ispresent_1 = binary_search(arr,arr+5,1);

    //? lower upper bound: returns iterator pointing to value < > x respectively
    //upper: it finds the location of an element just greater than a given element in a container
    //lower: it finds the location of an element just smaller than a given element in a container or equal to it
    int low_pos = *lower_bound(arr,arr+5,4);
    int up_pos  = *upper_bound(arr,arr+5,4);

    //? distance
    distance(arr,max_element(arr,arr+5));

//* Manipulating algorithms

    // permutation: modify arr to next prev permutation
    next_permutation(arr,arr+5);
    prev_permutation(arr,arr+5);

    // swap
    swap(arr,temp);

    // transform
    transform(arr,arr+5,arr,inc);

    return 0;
}
