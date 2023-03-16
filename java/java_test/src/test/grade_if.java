package test;

import java.util.Scanner;

public class grade_if {
	public static void main(String[] args) {
		Scanner grade_in = new Scanner(System.in);
		float grade = grade_in.nextFloat();
		if (grade >= 90&&grade<=100) {
			System.out.println("优");
		} else if (grade >= 80&&grade <90) {
			System.out.println("良");
		} else if (grade >= 70&&grade <80) {
			System.out.println("中");
		} else if (grade >= 60&&grade <70) {
			System.out.println("及格");
		} else if (grade >= 0&&grade <=60) {
			System.out.println("不及格");
		} else {
			System.out.println("ERRO value");
		}
	}
}
