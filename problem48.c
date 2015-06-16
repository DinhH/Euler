void ten_power(){
	int i = 0;
	BigInteger ret = 0;

	for(i = i ; i <= 1000; i++){
		ret += BigInteger.Pow(i,i);
	}

	printf(%d, ret);
}

