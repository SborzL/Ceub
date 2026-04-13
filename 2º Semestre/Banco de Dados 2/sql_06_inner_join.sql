-- Exercicio bd_livro
-- usar o banco de dados bd_livro
use bd_livro

-- 1	Lista titulo, editora quando o preco maior que R$200,00
SELECT L.titulo, E.editora, L.preco from tb_livro L
INNER JOIN tb_editora E
ON L.cd_editora = E.cd_editora
WHERE L.preco > 200;

-- 2	Lista titulo, gênero quando o preco entre R$200,00 e R$300,00
SELECT L.titulo, G.genero, L.preco
FROM tb_livro L
INNER JOIN tb_genero G
ON L.cd_genero = G.cd_genero
WHERE L.preco BETWEEN 200 AND 300; 

-- 3	Lista  titulo, editora e gênero quando cd_editora 1, 2 e 3
SELECT L.titulo, E.editora, G.genero, L.cd_editora
FROM tb_livro L
INNER JOIN tb_editora E
ON L.cd_editora = E.cd_editora
INNER JOIN tb_genero G
ON L.cd_genero = G.cd_genero
WHERE L.cd_editora IN(1,2,3);

-- 4	lista titulo, editora, preco e preco com mais 20%
SELECT L.titulo, E.editora, L.preco, L.preco * 1.20 AS preco_mais_vinte
FROM tb_livro L
INNER JOIN tb_editora E
ON L.cd_editora = E.cd_editora;

-- Exercicios sobre View
-- 1	Criar uma View – liste isbn, titulo
CREATE VIEW vwe_01 AS
SELECT isbn, titulo FROM tb_livro;

SELECT * FROM vwe_01;

-- 2	Criar uma View – list isbn, titulo, preco, preco com 10%
CREATE VIEW vwe_02 AS
SELECT isbn, titulo, preco, preco * 1.1 AS preco_mas_10
FROM tb_livro;

SELECT * FROM vwe_02;

-- 3	Criar uma View – list isbn, titulo e editora
CREATE VIEW vwe_3 AS
SELECT L.isbn, L.titulo, E.editora
FROM tb_livro L
INNER JOIN tb_editora E
ON L.cd_editora = E.cd_editora;

SELECT * FROM vwe_03

-- 4	Criar uma View – list isbn, titulo e gênero por ordem de gênero.
CREATE VIEW vwe_04 AS
SELECT L.isbn, L.titulo, G.genero
FROM tb_livro L
INNER JOIN tb_genero G
ON L.cd_genero = G.cd_genero;

SELECT * FROM vwe_04
ORDER BY genero;

-- -- Exercicio bd_rh
-- usar o banco de dados bd_rh
use bd_rh;

 -- 01 Lista matricula, funcionário e setor
 SELECT F.matricula, F.funcionario, S.setor
 FROM tb_funcionario F
 INNER JOIN tb_setor S
 ON F.cd_setor = S.cd_setor;
 
-- 02 Lista matricula, funcionário, salario e cargo com salario acima de R$ 5.000,00
SELECT F.matricula, F.funcionario, F.salario, C.cargo
FROM tb_funcionario F
INNER JOIN tb_cargo C
ON F.cd_cargo = C.cd_cargo
WHERE salario > 5000;

-- 03 Lista  matricula, funcionário, salario, setor e cargo
SELECT F.matricula, F.funcionario, F.salario, S.setor, C.cargo
FROM tb_funcionario F
INNER JOIN tb_setor S
ON F.cd_setor = S.cd_setor
INNER JOIN tb_cargo C
ON F.cd_cargo = C.cd_cargo;

 -- 04 Criar uma view e Listar matricula, funcionário e setor
 CREATE VIEW vwe_01 AS
 SELECT F.matricula, F.funcionario, S.setor
 FROM tb_funcionario F
 INNER JOIN tb_setor S
 ON F.cd_setor = S.cd_setor;
 
 SELECT * FROM vwe_01;
 
-- 05 Criar uma view e Listar  matricula, funcionário, salario e cargo com salario acima de R$ 5.000,00
CREATE VIEW vwe_02 AS
SELECT F.matricula, F.funcionario, F.salario, C.cargo
FROM tb_funcionario F
INNER JOIN tb_cargo C
ON F.cd_cargo = C.cd_cargo
WHERE salario > 5000;

SELECT * FROM vwe_02;

-- 06 Criar uma view e Listar   matricula, funcionário, salario, setor e cargo






