-- Exercicio de DDL 
-- 23-02-2026 

-- 1 criar o banco de dados 
create database bd_rh_0101; 

-- 2 usar o banco de dados 
use bd_rh_0101; 

-- 3 criar tabelas
create table tb_cargo
(cd_cargo int not null primary key, 
cargo char(30)); 

-- 4 tb setor
create table tb_setor
(cd_setor int not null primary key, 
setor char(30));

-- 5 tb_funcionario 
create table tb_funcionario 
(matricula int not null primary key, 
funcionario char(50),
dt_nascimento date, 
cd_setor int, 
cd_cargo int, 
salario decimal(8,2));

-- relacionamento 
alter table tb_funcionario 
add constraint fk_cargo foreign key (cd_cargo) 
references tb_cargo (cd_cargo);

alter table tb_funcionario 
add constraint fk_setor foreign key (cd_setor) 
references tb_setor (cd_setor);