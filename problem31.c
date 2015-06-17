
int main(){
	int target = 200;
	int[] coinVar = {1, 2, 5, 10, 20, 50, 100, 200};
	int[] ret = new int [target];
	ret[0] = 1;	

	for(int i = 0; i < coinVar.Length; i++){
		for(int j = cointVar[i]; j <= target; j++){
			ret[j] += ret[j - coinVar[i]];
		}
	}
	return ret;
}			
