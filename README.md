# 🏃‍♀️ Calculadora de Pace em C

Este é um projeto de terminal desenvolvido em **C** para calcular o *pace* médio (ritmo) de uma corrida. A partir da distância percorrida e do tempo total (minutos e segundos), o programa converte os valores e retorna o pace exato formatado no padrão `MM:SS min/km`.

## 💻 Conceitos Aplicados
Este projeto foi construído para aplicar e consolidar fundamentos importantes de Ciência da Computação e programação estruturada:
- **Ponteiros (Pointers) e Passagem por Referência:** Uso de múltiplos ponteiros (`*paceMin`, `*paceSeg`) para permitir que uma única função retorne e altere mais de um valor na memória.
- **Lógica Matemática e Casting:** Conversão de valores decimais flutuantes (`float`) para inteiros (`int`) visando separar a parte inteira (minutos) da fração (segundos).
- **Formatação de Saída (I/O):** Uso de máscaras de formatação (`%02d`) para garantir a exibição correta no padrão de relógio/cronômetro.

## 🚀 Como executar o projeto

Pré-requisitos: Ter um compilador C (como o GCC / MinGW) instalado no seu sistema.

1. Clone o repositório em sua máquina:
```bash
git clone [https://github.com/emillyveronica/calculadora-pace-c.git](https://github.com/emillyveronica/calculadora-pace-c.git)