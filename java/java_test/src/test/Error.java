package test;

import java.util.Scanner;

public class Error {
	public static void main(String[] args) throws IllegalArgumentException {
		int a, b, c;
		Scanner input = new Scanner(System.in);
		a = input.nextInt();
		b = input.nextInt();
		input.close();
		{
		try {
			c = a / b;
			System.out.printf("%d ÷ %d is : %d\n", a, b, c);
		} catch (ArithmeticException e) { // 捕获被除数为零的情况
			System.err.println("被除数不能为0");
		} finally { // 验证程序运行情况
			System.out.println("程序运行完成！");
		}
		}
	}

}
