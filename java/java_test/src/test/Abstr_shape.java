package test;
abstract class shape{
	abstract double area();
	abstract double perimter();
}
class cube extends shape {
	double len;
	public cube(double len) {
		// TODO 自动生成的构造函数存根
		this.len=len;
	}
	double area() {
		// TODO 自动生成的方法存根
		return len*len*6;
	}
	double perimter() {
		// TODO 自动生成的方法存根
		return len*len*len;
	}
	void show() {
		System.out.printf("area is %4.2fCM2,perimter is %4.2fCM3",area(),perimter());
	}
}
public class Abstr_shape {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		cube 柜子 = new cube(10);
		柜子.show();
	}

}
