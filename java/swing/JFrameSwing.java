import javax.swing.JFrame;

import java.awt.Color;

import javax.swing.ImageIcon;
public class JFrameSwing extends JFrame{
    JFrameSwing(){
        //JFrame : a GUI window to add components to
        //JFrame frame = new JFrame(); //instance
        this.setTitle("First App");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setSize(420,420);
        this.setVisible(true);

        ImageIcon image = new ImageIcon("~/wrk/SourceCode/java/logogm.png");
        this.setIconImage(image.getImage());
        this.getContentPane().setBackground(new Color(123,50, 250));

    }
}
