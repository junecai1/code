package GUI;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextArea;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.swing.tree.DefaultTreeCellEditor.DefaultTextField;

public class login {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Frame windos =new Frame("登录");
		windos.setSize(500,500);
		windos.setLocation(500, 300);
		windos.setVisible(true);
		
		windos.setLayout(new FlowLayout());
		Label user = new Label("USER:");
		user.setLocation(120, 100);
		user.setSize(100,100);
		
		Label passwd = new Label("PASSWORD:");
		passwd.setSize(100,100);
		passwd.setLocation(100, 200);
		windos.add(user);
		windos.add(passwd);
		
		Button loginButton =new Button("login");
		loginButton.setSize(30,50);
		loginButton.setLocation(100, 200);
		
		Button okButton =new Button("ok");
		okButton.setSize(30,50);
		okButton.setLocation(200, 200);
		
		windos.add(loginButton);
		windos.add(okButton);
		
		TextArea textArea =new TextArea();
		textArea.setSize(10,100);
		textArea.setColumns(11);
		textArea.setEditable(true);
	}

}
