int * prefixArray(int[] inputArray, int size){
	static int* returnArray = (int* ) malloc(sizeof(int)*size);
	//put in returnArray[0] as inputArray[0]
	
	for(int i=0; i<size; i++){
		if(i == 0){
			returnArray[i] = inputArray[i];
		}

		returnArray[i] = inputArray[i] + returnArray[i-1];
	}
	return returnArray;
}
