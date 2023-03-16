package test;

public class O10的阶乘和 {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int base=10,sumj=1,result=0;
		for (int i = 1; i < base; i++) {
			
			for (int j = 1; j <= i; j++) {
				sumj=sumj*j;
			}
			result=result+sumj;
		}
		System.out.println(result);

	}

}
