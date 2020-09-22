//Anthony Christopher

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Checks to see if value was found in array, returns true else returns false
bool found(int val,vector<int> array, int size){
    for(int i = 0; i < size; i++){
        if(val == array[i]){
            return true;
        }
    }
    return false;
}


// Creats setUnion method just the standard library
vector<int> setUnion(vector<int> setA,vector<int> setB){
// intitialized setUnion vector
    vector<int> setUnion;

    // Sorts vector
    // I know this is in standardized library already but I figured its since its not the setUnion method itself its fine
    sort(setA.begin(),setA.end());
    sort(setB.begin(),setB.end());

    // aides in helping get the union of two arrays   
     for(int i = 0; i < setA.size(); i++){
        if(!found(setA[i],setUnion,setUnion.size())){
            setUnion.push_back(setA[i]);
        }
    }


    // aides in helping get union of two arrays
    for(int i = 0; i < setB.size(); i++){
      if(!found(setB[i],setUnion,setUnion.size())){
            setUnion.push_back(setB[i]);
        }
    }
    // sort union vector
    // I know this is in standardized library already!
    sort(setUnion.begin(),setUnion.end());

    // returns the setunion
    return setUnion;
}




// Print union method
//prints the union method 
void printUnion(vector<int> setUnion){
    cout<<" Union : ";

// for loop thats prints each value in union vector
    for(int i = 0; i < setUnion.size(); i++){
        cout<< setUnion[i] << " ";
    }

     cout<< " " <<endl;
}


//Parint vector method
//prints the vector
void printVector(vector<int> vector){
//spacing
    cout << " ";

// prints out each value in vector
    for(int i = 0; i < vector.size(); i++){
        cout << vector[i] << " ";
    }
//spacing
    cout << " " << endl;

}

int main(){

    vector<int> setA {4,4,4,4,4,4,5};
    vector<int> setB {6,6,6,7,7,8,8,9};

    cout << " Vector A : ";
    printVector(setA);


    cout << " Vector B: ";
    printVector(setB);

    // sets vector set_union to setUnion function for manipulation
    vector<int> set_union = setUnion(setA,setB);

    // prints vector after set Union method has been called in the intialization
    printUnion(set_union);
   
    return 0;
}
