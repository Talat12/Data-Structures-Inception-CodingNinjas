// QUESTION
// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.



int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(size == 0){
      	return -1;
    }
  	int index = lastIndex(input+1, size-1, x);
  	if(index != -1){
      	return index+1;
    }
	if(input[0] == x){
      	return 0;
    }
  	return index;
}