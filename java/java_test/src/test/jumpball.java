package test;
import java.lang.Math;
public class jumpball {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		double height=100,sum_height=0;//最终高度，累计高度
		for(int i=0;i<10;i++)
		{
			sum_height+=height;
			height = height/2;
			if(i==9)
				break;
			else
				sum_height+=height;
		}
		
//		sum_height=(height*(1-Math.pow(0.5, 10)))/(1-0.5);//Sn=a1(1-q^n)/(1-q)
//		height = height*Math.pow(0.5, 10);				  //An=a1*q**(n-1)
		
		System.out.println("height:"+height+"sum height ："+sum_height);
		
	}

}
