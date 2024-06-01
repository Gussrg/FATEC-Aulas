package br.fatec.mvc.tarefa.controllers;

import br.fatec.mvc.tarefa.models.Fundo;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/api/fundos")
public class FundoApiController {
    private static final List<Fundo> fundos = new ArrayList<Fundo>();

    public FundoApiController() {
        fundos.add(new Fundo("XPMLG11","Tijolo   ",14));
        fundos.add(new Fundo("HSML11","Tijolo",18));
        fundos.add(new Fundo("MXRF11","Papel",23));

    }
    @GetMapping
    public List<Fundo> GetFundos()
    {
        return fundos;
    }

}
