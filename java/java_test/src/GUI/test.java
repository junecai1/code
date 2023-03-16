package GUI;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.Label;

public class test {
	public static void main(String[] args) {
		Frame windo = new Frame("hello");
		windo.setSize(500,500);
		windo.setLocation(100, 100);
		windo.setLayout(new FlowLayout());
		windo.setVisible(true);
		Label title = new Label();
		Label title1 = new Label();
		title.setText("hello");
		title.setBounds(120,120,80,40);
		title1.setText("world");
		title1.setBounds(120,120,80,40);
		windo.add(title1);
		windo.add(title);
		Button ok =new Button("ok");
		Button dealy =new Button();
		dealy.setLabel("dealy");
		windo.add(ok);
		windo.add(dealy);
		
		
	}
}
