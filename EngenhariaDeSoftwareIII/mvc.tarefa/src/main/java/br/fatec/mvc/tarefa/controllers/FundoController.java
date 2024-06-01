package br.fatec.mvc.tarefa.controllers;

import br.fatec.mvc.tarefa.models.Fundo;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import java.util.ArrayList;
import java.util.List;

@Controller
@RequestMapping(value = "/fundos")
public class FundoController {

    private static final List<Fundo> fundos = new ArrayList<Fundo>();

    public FundoController() {
        fundos.add(new Fundo("XPMLG11","Tijolo   ",14));
        fundos.add(new Fundo("HSML11","Tijolo",18));
        fundos.add(new Fundo("MXRF11","Papel",23));

    }
    @GetMapping

    public String getFundos(Model model){
        model.addAttribute("fundos", fundos);
        return "fundos";
    }
}
