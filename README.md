# Semaphores-Mutexes
Aplicação para demonstração das primitivas de sincronização: semáforos e mutexes para garantir sincronização entre processos e evitar condições de corrida.
## Execução
A execução do programa se dá pelo arquivo main.c e é feita em duas etapas da seguinte forma:<br/>
Compilação: `gcc main.c -o main -lpthread`<br/>
Execução: `./main`

##Funcionamento
O programa quando executado sem o uso de semáforos e mutexes exibe um valor inconsistente na tela, visto que são criados 100 THREADS e cada uma delas acessa a região crítica de forma não sincronizada, ocasionando em leituras de valores desatualizados e consequentemente a soma inconsistente no final do programa.

## Uso das primitivas
As chamadas e usos das primitivas são encontradas nos arquivos `mutex.c` e `sempahore.c`, basta inicializá-los globalmente e chamar sua inicialização na função main. Já as chamadas da função `lock` e `unlock`, devem ser colocadas no início da região compartilhada e em seu fim respectivamente.

## Saída de dados
No fim da execução do programa é impressa na tela a soma do count das threads. 
