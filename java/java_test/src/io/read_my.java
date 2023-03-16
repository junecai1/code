package io;

import java.io.BufferedReader;
import java.io.BufferedWriter;
//import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class read_my {
	
	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		String name="姓名：蔡长志";
		String cl="班级：21计应程序二班";
		String no="学号：2104113211";
		String filename="E://T.txt";
		BufferedWriter out =new BufferedWriter(new FileWriter(filename));
		out.write(name);
		out.newLine();
		out.write(cl);
		out.newLine();
		out.write(no);
		out.newLine();
		out.close();
		BufferedReader in =new BufferedReader(new FileReader(filename));
		String line=in.readLine();
		while(line != null){
			System.out.printf(line);
			line=in.readLine();
		}
		in.close();
		}
	}

