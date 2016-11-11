	//tea算法-7行代码
//	void encipher(unsigned int v[2],unsigned int key[4]){
//		unsigned int v0=v[0],v1=v[1],i,sum=0,delta=0x9E3779b9;
//		for (i=0;i<32;i++){
//			v0+=(((v1<<4)^(v1>>5))+v1)^(sum+key[sum & 3]);
//			sum+=delta;
//			v1+=(((v0<<4)^(v0>>5))+v0)^(sum+key[(sum>>11) & 3]);	
//		}
//		v[0]=v0;v[1]=v1; 
//		}	
	
	//tea 的解密函数
//	#define num_rounds 32
//	void decipher(unsigned int v[2],unsigned key [4]){
//		unsigned int i;
//		unsigned int v0=v[0],v1=v[1],delta=0x9E3779B9,sum=delta*num_rounds;
//		for (i=0;i<num_rounds;i++){
//			v1-=(((v1<<4)^(v0>>5))+v0)^(sum+key[(sum>>11)&3]);
//			sum-=delta;
//			v0-=(((v1<<4)^(v1>>5))+v1)^(sum+key[sum &3]);
//			
//		}
//		v[0]=v0;
//		v[1]=v1;
//	}	
