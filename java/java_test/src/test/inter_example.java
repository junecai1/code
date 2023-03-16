package test;

//import sun.reflect.generics.tree.VoidDescriptor;

interface animal{
	//public String Animal_name ="";
	public void shut();
}
class dog implements  animal{
	String dog_name;
	dog(String name){
		this.dog_name=name;
	}
	void feed() {
		System.out.println("Feed"+dog_name+"successfu！");
		shut();
	}
	public void shut() {
		System.out.println("汪汪汪");
	}
}
class cat implements animal{
	String cat_name;
	cat(String name){
		this.cat_name=name;
	}
	void feed() {
		System.out.println("Feed"+cat_name+"successful!");
		shut();
	}
	public void shut() {
		System.out.println("喵喵喵");
	}
}
public class inter_example {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		dog jinmao = new dog("金毛");
		cat buou =	new cat("布偶");
		jinmao.feed();
		buou.feed();
	}

}
