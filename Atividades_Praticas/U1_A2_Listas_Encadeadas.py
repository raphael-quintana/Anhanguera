# Criando a classe Node, definindo os atributos Data como 0, e next_item
# como None.


class Node:
    def __init__(self, data=0, next_item=None):
        self.data = data
        self.next = next_item

    def __repr__(self):
        return f"{self.data} --> {self.next}"


# Criando a class Linked List, definindo o atributo Head como None.


class LinkedList:
    def __init__(self):
        self.head = None

    # Definindo o método append para adicionar nodes na lista

    def append(self, data):

        # Criamos um objeto para armazenar o Node, chamado item.
        item = Node(data)

        # Criando uma condicional para verificar se já possuem nodes na lista,
        # caso esteja vazia, o node criado se torna o head.
        # Caso já possua items, usamos o navegar para iterar até o último node,
        # para então adicionar o novo item, seguindo a função append()
        # tradicional de listas no Python, adicionando pelo final da Linked List.

        if self.head == None:
            self.head = item
        else:
            navegar = self.head
            while (
                navegar.next is not None
            ):  # Identificamos o último node pelo atributo next, onde sempre será None.
                navegar = navegar.next

            navegar.next = item

        # Definindo a função print_list para imprimir a Linked List.

    def print_list(self):
        print(self.head)

        # Defininado a função count_nodes, que realiza a contagem de
        # quantos nodes nossa Linked List possui.

    def count_nodes(self):
        counter = 0  # Criando um objeto contador zerado.
        navegar = self.head  # Apontamos o navegar para o head da lista.

        # Usamos o while para que enquanto o próximo node do navegar não
        # seja None, ele soma mais 1 no contador de nodes, e pula
        # para o próximo node, retornando o numero total.

        while navegar is not None:
            counter += 1
            navegar = navegar.next

        return counter


# Criando a lista e executando as funções

lista = LinkedList()

lista.append(2)
lista.append(4)
lista.append(6)
lista.append(8)
lista.append(10)

lista.print_list()

qtd_de_nodes = lista.count_nodes()
print(f"Essa lista encadeada possui {qtd_de_nodes} nodes!")
