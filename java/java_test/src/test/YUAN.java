package test;
//编写一个圆类Circle，该类拥有：
//[表情]一个成员变量Radius（私有，浮点型）；  // 存放圆的半径；
//    [表情] 三个成员方法
//            double getArea( )       //获取圆的面积
//            double getPerimeter( )   //获取圆的周长
//            void  show( )          //将圆的半径、周长、面积输出到屏幕 
import java.lang.Math;
import java.util.Scanner;
class Circle {
	private float R;
	double GetArea(){
		return Math.PI*Math.pow(R,2);
	}
//	void setR(float r){
//		this.R=r;
//	}
	public Circle(float r) {
		// TODO 自动生成的构造函数存根
		R=r;
	}
	
	double getPerimeter(){
		return 2*R*Math.PI;
	}
	void show(){
		System.out.println("r="+R+"\nperimeter="+getPerimeter()+"\narea="+GetArea());
	}
}

public class YUAN {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		
		Scanner input = new Scanner(System.in);
		float r=input.nextFloat();
		//input.close();
//		YUAN.(r);
		Circle YUAN =new Circle(r);
		YUAN.show();
	}

}
