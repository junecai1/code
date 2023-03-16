package test;

//import sun.launcher.resources.launcher;

class father{
	String name ="ccz",wifename;
	
	void getWife(String name){
		this.wifename=name;
	}
}
class sons extends father{
	String sonName="wtf";
	
}
public class son {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		father c = new father();
		sons W =new sons();
		c.getWife("yy");
		System.out.printf(c.name);
		W.getWife("**");
		System.out.printf(W.wifename);
		
	}

}
