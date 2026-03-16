-- 1 criar o banco de dados
create database bd_pedido_0101;

-- 2 usar o banco de dados
use bd_pedido_0101;

-- 3 criar tabela cliente
create table tb_cliente
(cd_cliente int not null primary key,
cliente char(50));

-- 4 criar tabela veiculo
create table tb_veiculo
(cd_veiculo int not null primary key,
veiculo char(50),
valor_veiculo decimal(12,2));

-- 5 criar tabela vendedor
 create table tb_vendedor
 (cd_vendedor int not null primary key,
 vendedor char(50));
 
 -- 6 criar tabela pedido
 create table tb_pedido
 (nr_pedido int not null primary key,
 dt_pedido date,
 cd_veiculo int,
 cd_cliente int,
 cd_vendedor int,
 valor_pedido decimal(12,2),
 comissao decimal (12,2));
 
-- 7 relacionar pedidos com clientes
alter table tb_pedido
ADD constraint fk_cliente foreign key (cd_cliente)
references tb_cliente (cd_cliente);

-- 8 relacionar pedidos com vendedor
alter table tb_pedido
add constraint fk_vendedor foreign key (cd_vendedor)
references tb_vendedor (cd_vendedor);

-- 9 relacionar pedidos com veiculo
alter table tb_pedido
add constraint fk_veiculo foreign key (cd_veiculo)
references tb_veiculo (cd_veiculo);

-- popular o banco de dados

-- vendedor

select * from tb_vendedor 

Insert into tb_vendedor
(cd_vendedor, vendedor)
Values
(1, 'Anibal'),
(2, 'Antonio de Moraes'), 
(3, 'Barbara Alcantara'), 
(4, 'Deise Castro'),
(5, 'Eider Nascimento');

-- cliente
select * from tb_cliente 

Insert into tb_cliente
(cd_cliente, cliente) 
Values 
(1, 'Vallu Nascimento'),
(2, 'Rogeria Negreti'),
(3, 'Henrique Silva'),
(4, 'Wellington Alves'),
(5, 'Jose Pereira');

-- veiculo
select * from tb_veiculo 

Insert into tb_veiculo
(cd_veiculo, veiculo, valor_veiculo) 
Values
(1, 'Onix', 52000),
(2, 'Prisma', 49000),
(3, 'S10', 109000),
(4, 'Cruze', 101000),
(5, 'Spin', 69000),
(6, 'Cobalt', 63000);

-- Pedido 

select * from tb_pedido 

insert into tb_pedido
(nr_pedido, dt_pedido, cd_veiculo, cd_cliente, cd_vendedor, valor_pedido,comissao)
values
(1,'2019-01-10',1,2,3,52000,0),
(2,'2019-02-20',2,3,4,49000,0),
(3,'2019-03-30',3,4,5,109000,0),
(4,'2019-04-10',4,5,1,101000,0),
(5,'2019-05-20',5,5,1,69000,0),
(6,'2019-06-30',6,1,2,63000,0),
(7,'2019-07-10',1,4,5,52000,0),
(8,'2019-08-20',1,4,5,52000,0),
(9,'2019-09-30',1,4,5,52000,0),
(10,'2019-10-10',1,4,5,52000,0);

-- exercicios

-- 1 Incluir cliente Pedro Nóbrega
insert into tb_cliente
(cd_cliente, cliente)
values (6, 'Pedro Nóbrega');

-- 2 Alterar vendedor Anibal para Anibal Santoro
select * from tb_vendedor;
update tb_vendedor
set vendedor = 'Anibal Santoro'
where cd_vendedor = 1; 

-- 3 Alterar o valor do Pedido 1 para cd_veiculo 4 e valor R$101.000,00
select * from tb_pedido;
update tb_pedido
set cd_veiculo = 4 and valor_pedido = 101000.00
where nr_pedido = 1;

-- 4 Excluir Cliente quando o cd_cliente = 1  (vê se é possível ? Explique ?)
delete from tb_cliente where cd_cliente = 1;
-- Não é possível pois o cd_cliente está relacionado com a tabela tb_pedido por uma Foreign Key.

-- 5 Atualizar o valor da comissão em 10% do valor da venda
select * from tb_pedido;
update tb_pedido
set comissao = 10;
-- não é possível dar UPDATE e DELETE sem Where no Modo Safe, para desabilitar vá em Preferências SQL Editor desative o Safe Mode e reconecte no SQL.

-- 6 Lista os pedidos acima de R$100.000,00
select * from tb_pedido where valor_pedido > 100000.00;

-- 7 Lista os nr_pedido, veiculo, valor_pedido e comissao
select nr_pedido, cd_veiculo, valor_pedido, comissao from tb_pedido;  