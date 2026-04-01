package view;

import java.awt.Container;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Formulario {
	
	private JFrame frmPrincipal;
	private JLabel lblNome;
	private JTextField txtNome;
	private JButton btnEnviarDados;

	public Formulario() {
		inicializarComponentes();
	}

	private void inicializarComponentes() {
		
		frmPrincipal = new JFrame("Meu primeiro Swing");
		frmPrincipal.setBounds(400, 200, 500, 250);
		frmPrincipal.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frmPrincipal.setLayout(null);
		Container painelDeConteudo = frmPrincipal.getContentPane();
		
		lblNome = new JLabel("Nome:");
		lblNome.setBounds(50, 30, 40, 25);
		painelDeConteudo.add(lblNome);
		
		txtNome = new JTextField();
		txtNome.setBounds(100, 30, 300, 25);
		painelDeConteudo.add(txtNome);
		
		btnEnviarDados = new JButton("Enviar dados...");
		btnEnviarDados.setBounds(140, 100, 200, 30);
		painelDeConteudo.add(btnEnviarDados);
		
		frmPrincipal.setVisible(true);
		
	}
	
}








