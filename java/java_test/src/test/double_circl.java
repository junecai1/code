package test;


import java.io.IOException;
import java.io.Reader;
import java.lang.Math;
import java.util.Scanner;

public class double_circl {
	public static void main(String[] args) throws IOException {
		double R;
		Scanner input = new Scanner(System.in);
		
		R=input.nextDouble();
		System.out.println(R);
		
		System.out.printf("area is %.3f",2*Math.PI*Math.pow(R, 2));
	}
}
//输出样例：
//11.25
//11.25
//area is 795.216