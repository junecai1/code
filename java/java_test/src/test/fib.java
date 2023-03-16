package test;

import java.util.Scanner;

public class fib {
	 public static void main(String[] args) {
			int sum=0,i=1;
	        System.out.printf("%d,%d\n",sum,i);
			for(i=1;i<=10;i++) {
			    sum+=i;
	            // System.out.println(sum);
			}
			 System.out.println(sum);
			while(i<=10){
			    sum+=i;
			}
			System.out.println(sum);
	        //此时i=10
			do{
			    sum+=i;     //执行一次后判断
			}while(i<=10);
			System.out.println(sum);
	        
		}
}
