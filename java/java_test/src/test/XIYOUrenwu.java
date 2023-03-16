package test;

class xiyoujirenwu{
	float height;
	String name,weapon;
	public xiyoujirenwu(float H,String N,String W) {
		// TODO 自动生成的构造函数存根
		this.height=H;
		this.name=N;
		this.weapon=W;
	}
	void printName(){
		System.out.println(name);
	}
	void printWeapon(){
		System.out.println(weapon);
	}
}

public class XIYOUrenwu {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		xiyoujirenwu sunwukong = new xiyoujirenwu(170,"Wk", "jingubang");
		xiyoujirenwu zhubajie = new xiyoujirenwu(200, "zhubajie", "jiuchidingpa");
		sunwukong.printName();
		sunwukong.printWeapon();
		zhubajie.printName();
		zhubajie.printWeapon();
		
	}

}
