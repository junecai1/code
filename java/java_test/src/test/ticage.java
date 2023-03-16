package test;

import javax.sound.midi.MidiDevice.Info;

class ticket{
	private int age;
	public ticket(int age) {
		this.age=age;
	}
	 int judge(int age) {
		if(age <=12&&age>=1)
			return 20;
		else if (age<=40&&age>12) 
			return 40;
		else if(age <=50&&age>40)
			return 80;
		else 
			return 35;
	}
	 void info(){
		 System.out.println("age is"+age+",charge is "+judge(age));
	 }
	
}
public class ticage {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		ticket test =new ticket(20);
		test.info();
	}

}
