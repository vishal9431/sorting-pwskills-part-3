//Find the minimum operation required to sort the array in increasing order. In one operation
//you can set each occurence of one element to 0;
// it will take o(number of unique element );
// for eg if we have array ={3,5,4,6,3,5,4,6};
// no of unique element in this array is = {3,4,5,6}; total = 4;
// in every occurence we make each element to 0 so it will become {3,5,4,0,3,5,4,0}
// in second occurence we make {3,0,4,0,3,0,4,0};
// in third occurence we make {3,0,0,0,3,0,0,0};
// in fourth occurence we make {0,0,0,0,0,0,0,0};
// it take around o(unique element )~for this operation no of unique element is o(4);
