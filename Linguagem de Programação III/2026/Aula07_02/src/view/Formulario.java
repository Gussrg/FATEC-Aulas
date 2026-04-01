package view;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

import negocio.Adicao;

public class Formulario {
	
	private JFrame frmCalculadora;
	private JLabel lblValor1, lblValor2, lblResultado;
	private JTextField txtValor1, txtValor2;
	private JButton btnSomar, btnSubtrair, btnMultiplicar, btnDividir;

	public Formulario() {
		inicializarComponentes();
	}

	private void inicializarComponentes() {
		
		frmCalculadora = new JFrame("Calculadora com OOP e Swing");
		frmCalculadora.setBounds(400, 200, 450, 250);
		frmCalculadora.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frmCalculadora.setLayout(null);
		Container painelDeConteudo = frmCalculadora.getContentPane();
		
		lblValor1 = new JLabel("Valor 1:");
		lblValor1.setBounds(50, 30, 50, 25);
		painelDeConteudo.add(lblValor1);
		
		txtValor1 = new JTextField();
		txtValor1.setBounds(120, 30, 60, 25);
		painelDeConteudo.add(txtValor1);
		
		lblValor2 = new JLabel("Valor 2:");
		lblValor2.setBounds(50, 70, 50, 25);
		painelDeConteudo.add(lblValor2);
		
		lblResultado = new JLabel("Resultado:");
		lblResultado.setBounds(140, 140, 150, 30);
		lblResultado.setFont(new Font("Arial", Font.BOLD, 14));
		lblResultado.setForeground(Color.BLUE);
		painelDeConteudo.add(lblResultado);
		
		txtValor2 = new JTextField();
		txtValor2.setBounds(120, 70, 60, 25);
		painelDeConteudo.add(txtValor2);
		
		btnSomar = new JButton("+");
		btnSomar.setBounds(250, 25, 50, 30);
		btnSomar.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				if (validarPreenchimento()){
					float v1 = Float.parseFloat(txtValor1.getText());
					float v2 = Float.parseFloat(txtValor2.getText());
					Adicao calc = new Adicao(v1, v2);
					calc.calcular();
					lblResultado.setText(
							String.format("Resultado: %.2f", 
									calc.getResultado()));
				}
			}
		});
		painelDeConteudo.add(btnSomar);

		btnSubtrair = new JButton("-");
		btnSubtrair.setBounds(330, 25, 50, 30);
		btnSubtrair.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
			}
		});
		painelDeConteudo.add(btnSubtrair);

		btnMultiplicar = new JButton("x");
		btnMultiplicar.setBounds(250, 80, 50, 30);
		btnMultiplicar.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
			}
		});
		painelDeConteudo.add(btnMultiplicar);

		btnDividir = new JButton("/");
		btnDividir.setBounds(330, 80, 50, 30);
		btnDividir.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
			}
		});
		painelDeConteudo.add(btnDividir);

		frmCalculadora.setVisible(true);
		
	}

	private boolean validarPreenchimento() {
		return (txtValor1.getText().length() > 0 &&
				txtValor2.getText().length() > 0);
	}
	
}


