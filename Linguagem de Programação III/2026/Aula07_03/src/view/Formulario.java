package view;

import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Formulario {
	
	private JFrame frmPrincipal;
	private JLabel lblCiclosRestantes;
	private JComboBox<String> cboCiclosRestantes;

	public Formulario() {
		inicializarComponentes();
	}

	private void inicializarComponentes() {
		
		frmPrincipal = new JFrame("JComboBox");
		frmPrincipal.setBounds(450, 200, 350, 250);
		frmPrincipal.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frmPrincipal.setLayout(null);
		Container painelDeConteudo = frmPrincipal.getContentPane();
		
		lblCiclosRestantes = new JLabel("Quantos ciclos faltam para se formar?");
		lblCiclosRestantes.setBounds(50, 30, 250, 25);
		painelDeConteudo.add(lblCiclosRestantes);
		
		// String[] qtdeCiclos = {"1 ciclo", "2 ciclos", "3 ciclos", "4 ou mais ciclos"};
		// cboCiclosRestantes = new JComboBox<String>(qtdeCiclos);

		cboCiclosRestantes = new JComboBox<String>();
		cboCiclosRestantes.setBounds(60, 70, 200, 25);
		cboCiclosRestantes.addItem("1 ciclo");
		cboCiclosRestantes.addItem("2 ciclos");
		cboCiclosRestantes.addItem("3 ciclos");
		cboCiclosRestantes.addItem("4 ou mais ciclos");
		cboCiclosRestantes.addItemListener(new ItemListener() {
			
			/// TODO: analisar por que a mensagem está sendo exibida 2 vezes
			@Override
			public void itemStateChanged(ItemEvent e) {
				String msg = "";
				switch (cboCiclosRestantes.getSelectedIndex()){
					case 0: msg = "Parabéns! Está no tempo certo."; break;
					case 1: msg = "Ok, está no caminho."; break;
					case 2: msg = "É... Ainda vai um tempinho..."; break;
					case 3: msg = "Pretende \"jubilar\"?"; break;
				}
				JOptionPane.showMessageDialog(null, msg);
			}
		});
		painelDeConteudo.add(cboCiclosRestantes);
		
		frmPrincipal.setVisible(true);
		
	}
	
}

