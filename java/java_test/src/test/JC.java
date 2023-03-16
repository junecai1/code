/**
 * 
 */
package test;

/**
 * @author june
 *
 */
public class JC {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		float sum=0,a=1;
		int N=3;
		int i=1;
		while(i<=N)
		{
			System.out.println(sum);
			sum=sum+a;
			System.out.println(sum);
			sum=sum*i;
			System.out.println(sum);
			i++;
			System.out.printf("第%d次\n",i);
		}
		System.out.println("结果"+sum);
	}

}
