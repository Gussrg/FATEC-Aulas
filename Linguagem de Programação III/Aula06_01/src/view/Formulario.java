package view;

import java.awt.Button;
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemListener;
import java.awt.event.KeyListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Formulario {

	private JFrame form;
	private JLabel lblNome;
	private JTextField txtNome;
	private JButton btnEnviarDados;
	
	public Formulario() {
		inicializarComponentes();
	}

	private void inicializarComponentes() {
		// instancia JFrame
		form = new JFrame("Swing - meu primeiro formulário...");
		// define posição (x, y) e tamanho (width, height) do form
		form.setBounds(450, 200, 500, 250);
		// define operação padrão ao fechar o formulário
		form.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		// elimina pré-configurações de layout
		form.setLayout(null);
		// recupera instancia do painel de conteúdo 
		Container painelDeConteudo = form.getContentPane(); 
		
		// instancia JLabel
		lblNome = new JLabel("Nome:");
		// configura posição (x, y) e tamanho
		lblNome.setBounds(50, 60, 50, 30);
		// configura font da label (utilizando objeto anônimo)
		lblNome.setFont(new Font("Tahoma", Font.BOLD, 14));
		// configura cor da fonte
		lblNome.setForeground(Color.BLUE);
		// adiciona label ao painel de conteúdo
		painelDeConteudo.add(lblNome);
		
		txtNome = new JTextField();
		txtNome.setBounds(105, 60, 300, 30);
		txtNome.setFont(new Font("Tahoma", Font.PLAIN, 14));
		painelDeConteudo.add(txtNome);
		
		btnEnviarDados = new JButton("Enviar");
		btnEnviarDados.setBounds(150, 120, 200, 30);
		
		// configura evento "Action" a partir da interface
		// "ActionListener", usando, para isso, conceitos 
		// de classe anônima e aninhada (implementada
		// dinamicamente), a partir da qual é 
		// instanciado um objeto anônimo
		btnEnviarDados.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				JOptionPane.showMessageDialog(null,
						"Olá, " + txtNome.getText() + "!");			
				}
		});
		painelDeConteudo.add(btnEnviarDados);

		// exibe o formulário
		form.setVisible(true);
	}
}





