package io;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Random;


public class print100 {
	public static void main(String[] args) throws Exception{
		String dataname="D:\\june\\user\\math.txt";
		File f =new File(dataname); 
		if (f.exists()) {   //判断是否存在，有则删除，再创建
			f.delete();
			f.createNewFile();
		}
		
		FileOutputStream nums= new FileOutputStream(dataname);
		DataOutputStream dataio =new DataOutputStream(nums);
		Random num =new Random();//随机数生成
		int count =0;
		while (count <100) {
			dataio.writeInt(num.nextInt(0,100));
			count ++;
		}
		FileInputStream nums_in = new FileInputStream(dataname);
		DataInputStream data_in = new DataInputStream(nums_in);
		count =1;
		for (int i = 0; i < 100; i++) {
			System.out.printf("%d\t",data_in.readInt());
			if (count % 5 ==0) {       //每隔五个换行
				System.out.printf("\n");
			}
			count ++;
		}
	}
}
