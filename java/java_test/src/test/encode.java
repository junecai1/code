package test;

import java.util.Random;

/***
 * 
 * @author junecai1
 *         <h1>这是一个加密程序，请完成对它的破解
 *         <h1>
 */

class encoder {
	String str;
	int Key;

	public encoder(String str, int key) {
		// TODO 自动生成的构造函数存根
		this.str = str;
		this.Key = key;
	}
	
	int turn_X() {
		return Key<<3;
	}	
	String encode(){
		char[] strArry=str.toCharArray();
		String rstr="";
		Key=turn_X();
		for (int i = 0; i < strArry.length; i++) {
			int tmp=strArry[i]^Key;
			rstr+=(int)tmp;
		}
		
		return rstr;
	}
}

public class encode {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		String miwen = "flag{Y0u_iS_G0od!}";
//		String miwen = "flag{你好！}";
		Random random = new Random();
		int key = 119;
		encoder encoder=new encoder(miwen, key);
		System.out.println(encoder.encode());
	}

}
