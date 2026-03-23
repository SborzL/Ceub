-- 23-03-2026
-- Backup - Restore
-- DML - Exercicio

-- Select
SELECT * FROM tb_funcionario;

-- and or - operadores
SELECT * FROM tb_funcionario
WHERE cd_setor = 1 AND cd_cargo = 1;

SELECT * FROM tb_funcionario
WHERE cd_setor = 1 OR cd_cargo = 1;

-- entre
SELECT *  FROM tb_funcionario
WHERE salario >=1000 AND salario <=6000;

SELECT *  FROM tb_funcionario
WHERE salario BETWEEN 1000 AND 6000;

-- like
-- comeca com J
SELECT matricula, funcionario FROM tb_funcionario
WHERE funcionario like 'j%';

-- termina com A
SELECT matricula, funcionario FROM tb_funcionario
WHERE funcionario like '%a';

-- Contenha 'A'
SELECT matricula, funcionario FROM tb_funcionario
WHERE funcionario like '%a%';

-- in
-- cd_setor tenha 1,2,3
SELECT * FROM tb_funcionario
WHERE cd_setor in (1,2,3);

-- order by
select * from tb_funcionario
order by funcionario; 
-- default asc  

-- decrescente 
select * from tb_funcionario 
order by funcionario desc; 

-- colocar 2 campos em ordem alfabetica 
-- cd_cargo e funcionario 
select * from tb_funcionario 
order by cd_cargo, funcionario;

-- limit 2
SELECT * FROM tb_funcionario
LIMIT 2;

-- top - todos sgbd
SELECT TOP 2 * FROM tb_funcionarios;

-- lista os dois ultimos registros
SELECT * FROM tb_funcionario
ORDER BY matricula DESC LIMIT 2;


-- distinct
SELECT DISTINCT cd_cargo FROM tb_funcionario ;

-- EXERCICIOS
--    01)  Alterar na tabela tb_funcionario  matricula = 1  salario (6000)
UPDATE tb_funcionario SET salario = 6000 WHERE matricula = 1;

--    02)  Alterar – aumentar os salarios dos tb_funcionarios em 10%
UPDATE tb_funcionario SET salario += 10%;

--    03)  Listar a tabela (tb_funcionario)  salario > 5000
SELECT * FROM tb_funcionario WHERE salario > 5000;

--    04) Lista os funcionários começa com a letra J
SELECT funcionario FROM tb_funcionario
WHERE funcionario like 'j%';

--    05) Lista os funcionários que termina com a letra a
SELECT funcionario FROM tb_funcionario
WHERE funcionario like '%a';

--    06) Lista os funcionários que tem salario entre 5000 e 10000
SELECT funcionario,salario FROM tb_funcionario
WHERE salario BETWEEN 5000 AND 10000;

--    07) Lista os funcionários do setor 1 e cargo 1
SELECT * FROM tb_funcionario
WHERE cd_setor = 1 AND cd_cargo = 1;

--    08) Lista os funcionários do setor 1 ou setor 2
SELECT * FROM tb_funcionario
WHERE cd_setor = 1 OR cd_setor = 2;


