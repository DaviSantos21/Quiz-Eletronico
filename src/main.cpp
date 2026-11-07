#include <Arduino.h>


struct Pergunta {
  const char* enunciado;
  const char* alternativas[4];
  uint8_t correta;   
};

Pergunta banco[] = {
  {
    "O que é racismo estrutural?",
    {"Uma forma de discriminação restrita a atos e ofensas individuais.", 
    "A discriminação enraizada na sociedade, instituições, economia e política de forma automática.",
    "Um preconceito que ocorre apenas em ambientes corporativos e de trabalho.", 
    "A crença de que a discriminação racial foi superada totalmente no século XX."},
    1
  },

  {
    "O que estabelece a Lei nº 7.716/1989 (Lei Caó) no Brasil?",
    {"Torna o racismo um crime imprescritível e inafiançável.", 
    "Prevê apenas aplicação de multas leves para ofensas de cor.", 
    "Regulamenta exclusivamente o acesso do público às praias e parques federais.", 
    "Define regras apenas para o ambiente escolar e universitário."},
    0
  },

  {
    "O que é celebrado no dia 20 de novembro no Brasil?",
    {"A assinatura da Lei Áurea pela Princesa Isabel.", 
    "O Dia da Consciência Negra, em memória à morte de Zumbi dos Palmares.",
    "A promulgação da primeira Constituição Federal do Brasil.",
    "O início do movimento dos Direitos Civis nos Estados Unidos."},
    1
  },

  {
    "Segundo intelectuais e ativistas, o que significa ser 'antirracista'?",
    {"Apenas declarar publicamente que não se tem preconceito de cor.",
    "Evitar debates sobre raça para não gerar divergências na sociedade.",
    "Adotar uma postura ativa de oposição, combate e desmonte do racismo.",
    "Ignorar as diferenças culturais e étnicas entre todas as pessoas."},
    2
  },

  {
    "Como podem ser definidas as 'microagressões raciais'?",
    {"Agressões físicas graves cometidas em espaços públicos.",
    "Leis formais criadas para restringir direitos de minorias.",
    "Comentários ou atitudes sutis e cotidianas que reforçam estereótipos e preconceitos.",
    "Crimes virtuais praticados exclusivamente por redes sociais."},
    2
  },
  
  {
    "Qual foi a situação da população negra logo após a Abolição da Escravidão no Brasil (1888)?",
    {"Recebeu terras e auxílio financeiro do governo para iniciar seus negócios.",
    "Foi libertada sem políticas de inclusão, reparação ou acesso à educação e terra.",
    "Foi rapidamente integrada no mercado de trabalho formal com salários equivalentes.",
    "Teve garantido o acesso imediato e prioritário às universidades do país."},
    1
  },

  {
    "O que caracteriza o conceito de 'colorismo'?",
    {"A escolha de cores de vestuário de acordo com a tradição cultural afro-brasileira.",
    "A discriminação baseada na tonalidade da pele dentro do mesmo grupo étnico.",
    "Um estilo artístico desenvolvido durante a resistência quilombola.",
    "A divisão administrativa de bairros com base em marcadores étnicos."},
    1
  },

  {
    "Qual é o objetivo principal das políticas de cotas raciais?",
    {"Garantir privilégios perpétuos a um grupo de indivíduos.",
    "Substituir critérios acadêmicos por seleções baseadas apenas na etnia.",
    "Reduzir a concorrência geral em processos seletivos e vestibulares.",
    "Corrigir desigualdades históricas/estruturais e promover a diversidade."},
    3
  },

  {
    "O que diferencia o racismo institucional do racismo individual?",
    {"O racismo institucional refere-se à falha coletiva de organizações em atender com equidade.",
    "O racismo institucional é praticado apenas por órgãos públicos federais.",
    "O racismo individual é o único respaldado e tipificado pela legislação penal.",
    "O racismo institucional ocorre exclusivamente em transações comerciais e bancárias."},
    0
  },

  {
    "O que é 'letramento racial'?",
    {"O processo de alfabetização de adultos em regiões vulneráveis.",
    "A reeducação para reconhecer vieses, linguagem e desconstruir práticas racistas.",
    "O aprendizado obrigatório de idiomas do continente africano nas escolas.",
    "O estudo exclusivo da legislação sobre crimes de intolerância e injúria."},
    1
  }
};

const uint8_t TOTAL = sizeof(banco) / sizeof(banco[0]);

void exibirPergunta(uint8_t index){
Serial.println();
Serial.print("Pergunta ");
Serial.print(index + 1);
Serial.print(" de ");
Serial.println(TOTAL);
Serial.println(banco[index].enunciado);
for(uint8_t i = 0; i < 4; i++){
Serial.print(char('A' + i));
Serial.print(") ");
Serial.println(banco[index].alternativas[i]);
}
}


void setup() {

  Serial.begin(115200);
  Serial.println("Electronic Quiz System iniciado!");
  for(uint8_t i = 0; i < TOTAL; i++){
    exibirPergunta(i);
  }

}



void loop() {
}


