package test;
import java.lang.Math;
//编写应用程序，创建类的对象，分别设置圆的半径、圆柱体的高，计算并分别显示圆半径、圆面积、圆周长，圆柱体的体积。 
class Cylinder{
	private double CLR,CLH;
	void Rinit(double r,double h){
		this.CLR=r;
		this.CLH=h;
	}
	double getCarea(){
		return Math.PI*Math.pow(CLR, 2);
	}
	double getCLR(){
		return CLR;
	}
	double getCPerimeter(){
		return 2*CLR*Math.PI;
	}
	double getCLH(){
		return CLH;
	}
	double getCLVol(){
		return getCarea()*getCLH();
	}
}
public class AREA {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Cylinder YUANZ = new Cylinder();
		YUANZ.Rinit(5.56, 8.53);
		System.out.println("r="+YUANZ.getCLR()+"\nh="+YUANZ.getCLH()+"\ncircle area is"+YUANZ.getCarea()+"\ncricle perimeter is"+YUANZ.getCPerimeter()+"\nvolume="+YUANZ.getCLVol());
		System.out.println("nitice:pass-test");
	}

}
