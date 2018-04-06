// QUESTION
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// using recursion. Return the answer.



double power(int k){
  	if(k == 0){
      	return 1;
    }
	return 2 * power(k-1);
}

double geometricSum(int k) {
    // Write your code here
	if(k == 0){
    	return 1;
    }
  	return 1/power(k) + geometricSum(k-1);
}