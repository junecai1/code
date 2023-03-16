package test;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

class studentss{
	String sName;
	float sNO,yw,yy,sx;
	public studentss(int no,String name,float yw,float yy,float sx) {
		// TODO 自动生成的构造函数存根
		this.sNO=no;
		this.sName=name;
		this.yw=yw;
		this.yy=yy;
		this.sx=sx;
	}
	 float sum_grade() {
		// TODO 自动生成的方法存根
		 return yw+sx+yy;
	}
}
public class stud_info {
	public static void main(String[] args) throws IOException{
		studentss[] xs = new studentss[5];
		xs[0] = new studentss(1001,"张三",95,70,50);
		xs[1] = new studentss(1002,"王伟",95,80,80);
		xs[2] = new studentss(1003,"李山",95,50,70);
		xs[3] = new studentss(1004,"路为",95,60,60);
		xs[4] = new studentss(1005,"于洋",95,90,50);
		for(int i=0;i<xs.length;i++) {
			System.out.printf("NO:%.0f,Name is %s,Chinese grades is %.2f,Englishi grades is %.2f,Math grades is %.2f\n",xs[i].sNO,xs[i].sName,xs[i].yw,xs[i].yy,xs[i].sx);
		}
		BufferedWriter write = new BufferedWriter( new  FileWriter("D://june//user//studentInfo.txt"));
		write.write("NO\tname\t\tChinese\t\tEnglishi\t\tMath");
		write.newLine();
		for(int i=0;i<xs.length;i++) {
			write.write("NO:"+xs[i].sNO+",Name is "+xs[i].sName+",Chinese grades is "+xs[i].yw+",Englishi grades is "+xs[i].yy+",Math grades is "+xs[i].sx);
			write.newLine();
		}
		write.close();
	}
}
//NO	name		Chinese		Englishi		Math
//NO:1001.0,Name is 张三,Chinese grades is 95.0,Englishi grades is 70.0,Math grades is 50.0
//NO:1002.0,Name is 王伟,Chinese grades is 95.0,Englishi grades is 80.0,Math grades is 80.0
//NO:1003.0,Name is 李山,Chinese grades is 95.0,Englishi grades is 50.0,Math grades is 70.0
//NO:1004.0,Name is 路为,Chinese grades is 95.0,Englishi grades is 60.0,Math grades is 60.0
//NO:1005.0,Name is 于洋,Chinese grades is 95.0,Englishi grades is 90.0,Math grades is 50.0

