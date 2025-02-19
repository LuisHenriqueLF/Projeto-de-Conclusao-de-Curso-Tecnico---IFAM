# Projeto de Conclusão de Curso Técnico - IFAM

Eu, junto com dois colegas, desenvolvemos um dispositivo que monitora a postura corporal do usuário através de sensores e auxilia na sua correção. O projeto foi desenvolvido com o objetivo de concluir o ensino médio técnico em Mecatrônica.<br>
### OBJETIVO
O objetivo principal do dispositivo é corrigir e prevenir problemas posturais por meio de um colete equipado com sensores e um sistema de alerta, garantindo que o usuário mantenha uma postura adequada durante suas atividades diárias

### FUNCIONAMENTO
O colete utiliza um sensor MPU6050 (acelerômetro e giroscópio) para monitorar a inclinação e alinhamento do tronco em tempo real. Caso o usuário adote uma postura inadequada por um período prolongado, o sistema emite um alerta sonoro para lembrá-lo de corrigir sua posição.


![colete](https://github.com/user-attachments/assets/37b9c364-47eb-4cff-b3d2-5fd74df9c667)
## EM FUNCIONAMENTO



https://github.com/user-attachments/assets/415c5523-c478-4af2-a551-5cf1bef48308



https://github.com/user-attachments/assets/bb5f238c-6761-4075-bb81-45dd99e50e79

## LÓGICA DE FUNCIONAMENTO
1- Leitura dos sensores: O MPU6050 coleta os dados de inclinação do corpo.<br>
2- Processamento dos dados: O Arduino interpreta os valores e define se a postura está correta ou incorreta.<br>
3- Alerta sonoro: Se a postura estiver inadequada por um tempo predefinido, buzzer é acionado.<br>

## SISTEMA
Programação: C.<br>
Hardware: Arduino,Sensores,Placa de Circuito Impresso (PCI). <br>
Ferramentas de Projeto: Arduino IDE. <br>

![414904949-b3fc8e88-8a22-462c-88de-737f81da48dc](https://github.com/user-attachments/assets/37868248-5934-43b0-a5cd-a03dda4c01b7)
