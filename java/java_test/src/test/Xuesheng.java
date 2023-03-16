package test;

//1、定义一个表示学生信息的类Student，要求如下：　
//（1）类Student的成员变量：sNO　表示学号；sName表示姓名；sSex表示性别；sAge表示年龄；sJava：表示Java课程成绩。　
//（2）类Student带参数的构造方法： 在构造方法中通过形参完成对成员变量的赋值操作。
//（3）类Student的方法成员：getNo（）：获得学号； getName（）：获得姓名； getSex（）：获得性别；getAge（）获得年龄；getJava（）：
//获得Java 课程成绩根据类Student的定义，创建五个该类的对象，输出每个学生的信息，计算并输出这五个学生Java语言成绩的平均值，以及计算并输出他们Java语言成绩的最大值和最小值
class Students {
	String sNO, sName, sSex, sAge;
	float sJava;

	public Students(String NO, String NAME, String SEX, String AGE, float JAVA) {
		// TODO 自动生成的构造函数存根
		sNO = NO;
		sName = NAME;
		sSex = SEX;
		sAge = AGE;
		sJava = JAVA;
	}

	String getNO() {
		return sNO;
	}

	String getName() {
		return sName;
	}

	String getSex() {
		return sSex;
	}

	String getAge() {
		return sAge;
	}

	float getJava() {
		return sJava;
	}

	void showInfo() {
		System.out.printf("Name is %s ,NO : %s ,sex is :%s, age is : %s ,Java grades is %3.1f\n", sName, sNO, sSex,
				sAge, sJava);
	}
}

public class Xuesheng {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Students hua = new Students("01", "小华", "男", "15", 85);
		Students yang = new Students("02", "小杨", "女", "15", 99);
		Students yu = new Students("03", "小羽", "男", "15", 86);
		Students lin = new Students("04", "小林", "男", "15", 82);
		Students ye = new Students("05", "小叶", "女", "15", 91);
		hua.showInfo();
		yang.showInfo();
		yu.showInfo();
		lin.showInfo();
		ye.showInfo();
		float Grades[]= {hua.sJava,yang.sJava,yu.sJava,lin.sJava,ye.sJava};
		float[] Min_Max_Aver=count_Min_Max_Aver(Grades);
		System.out.println("Max garde is :"+Min_Max_Aver[0]+",Min grade is :"+Min_Max_Aver[1]+"Average is :"+Min_Max_Aver[2]);
	}
	public static float[] count_Min_Max_Aver(float[] grades) {
		float res[]= new float[3]; 
		float max=grades[0],min=grades[0],sum=grades[0];
		for(int i=1;i<grades.length;i++) {
			if(max<grades[i])
				max=grades[i];
			if(min>grades[i])
				min=grades[i];
			sum+=grades[i];
		}
		res[0]=max;
		res[1]=min;
		res[2]=sum/grades.length;
		return res;
	}
//	public static float Max(float A, float B) throws IllegalArgumentException {
//		// TODO 自动生成的方法存根
//		try {
//			if (A >= B)
//				return A;
//			else
//				return B;
//		} catch (Exception e) {
//			// TODO: handle exception
//			System.out.println("Error!!!!!");
//			return 0;
//		}
//	}
//
//	public static float Min(float A, float B) throws IllegalArgumentException {
//		if (A <= B) {
//			return A;
//		} else {
//			return B;
//		}
//	}
//	public static float Average(float num1,float num2,float num3, float num4,float num5) {
//		return (num1+num2+num3+num4+num5)/5;
//	}
//	public static float FindNum(float num1,float num2,float num3, float num4,float num5) {
//		
//	}
}
