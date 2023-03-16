package test;

import java.io.FileWriter;
import java.io.IOException;

public class java_IO {
	public static void main(String[] args) throws IOException{
		String str ="中华人民共和国";
		FileWriter w = new FileWriter("D:\\june\\user\\test.txt");
		w.write(str);
		w.close();
		
	}
}
