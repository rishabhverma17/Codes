CREATE DATABASE TEST
GO

USE master
GO

DROP DATABASE TEST
GO

CREATE DATABASE DBMS
GO

USE DBMS;
GO

CREATE TABLE Employee
	(Eid int PRIMARY KEY NOT NULL,
	 Name varchar(25) NOT NULL,
	 Sex char(1) NOT NUll,
	 DeptNo smallint)
GO

INSERT dbo.Employee(Eid,Name,Sex,DeptNo) values (1,'Rishabh','M',201)
go

USE DBMS
GO

ALTER TABLE Employee
	ALTER COLUMN DeptNo int NOT NULL;


ALTER TABLE employee
  ADD last_name VARCHAR(50);

ALTER TABLE Employee
	DROP COLUMN last_name;

