package test;

class students1 {
	int no;
	String name;
	double chi;
	double math;
	double eng;
	double ava;
	double sum;

//	student(int no, String name, double chi, double math, double eng) {
//		this.no = no;
//		this.name = name;
//		this.chi = chi;
//		this.math = math;
//		this.eng = eng;
//	}

	double chin() {
		return chi;
	}

	double math() {
		return math;
	}

	double eng() {
		return eng;
	}

	double ava() {
		double ava;
		ava = (chi + math + eng) / 3;
		return ava;
	}

	double sum() {
		double sum;
		sum = chi + math + eng;
		return sum;
	}

	void input(int no,String name,double chi,double math,double eng) {
		this.no = no;
		this.name = name;
		this.chi = chi;
		this.math = math;
		this.eng = eng;
	}

	void show() {

	}
}

public class input_stu {

	public static void main(String[] args) {
				students1[] stu = new students1[5];
				stu[0] = new students1();
				stu[1] = new students1();
				stu[2] = new students1();
				stu[3] = new students1();
				stu[4] = new students1();
				stu[0].input(1001,"张三",95,70,50);
				stu[1].input(1002,"王伟",95,80,80);
				stu[2].input(1003,"李山",95,50,70);
				stu[3].input(1004,"路为",95,60,60);
				stu[4].input(1005,"于洋",95,90,50);
				System.out.println("学号\t" + "姓名\t"+"语文\t"+"数学\t"+"英语\t"+"总成绩\t"+"平均成绩");
				for (int i = 0; i < stu.length; i++) { 
					System.out.println(stu[i].no+"\t" + stu[i].name+"\t"+stu[i].chi+"\t"+stu[i].math()+"\t"+stu[i].eng()+"\t"+stu[i].sum()+"\t"+stu[i].ava());
				}

			}

		}
