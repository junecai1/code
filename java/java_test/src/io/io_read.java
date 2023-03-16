package io;

import java.io.File;
import java.io.FileReader;


class io_read{
	public static void main(String[] args) throws Exception {
		 int data;
		 String dataname="D:\\june\\user\\ip.txt";
		 File f = new File(dataname);
		 FileReader in = new FileReader(f);
		 data=in.read();
//		 while (true) {
//			 System.out.println(data);
//		}
	}
 
  
}
 