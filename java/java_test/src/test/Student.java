package test;

class Person{
	String name;
	int age;
	
void read(){
	System.out.println("name:"+name+",age:"+age);
}
}
public class Student {
	public static void main(String[] args) {
		Person xiaoming = new Person();
		xiaoming.name="yangyue";
		xiaoming.age=20;
		xiaoming.read();
	}
}
//public class Student {
//    public static void main(String[] args) {
//        Person ming = new Person();
//        ming.setBirth(2000);
//        System.out.println(ming.getAge());
//    }
//}
//
//class Person {
//    private String name;
//    private int birth;
//
//    public void setBirth(int birth) {
//        this.birth = birth;
//    }
//
//    public int getAge() {
//        return calcAge(2022); // 调用private方法
//    }
//
//    // private方法:
//    private int calcAge(int currentYear) {
//        return currentYear - this.birth;
//    }
//}
