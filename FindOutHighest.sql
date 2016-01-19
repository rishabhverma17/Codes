SELECT * FROM Employees ORDER BY Salary desc

SELECT MAX(Salary) FROM Employees 
	WHERE Salary < (SELECT MAX(Salary) FROM Employees) 
GO

SELECT DISTINCT TOP 2 Salary
	FROM Employees
	ORDER BY Salary desc
GO
--Make this Quesr a Sub Query
--Using the upper Query as SUB Query
SELECT TOP 1 Salary FROM 
(SELECT DISTINCT TOP 3 Salary
	FROM Employees
	ORDER BY Salary desc)
RESULT
ORDER BY Salary 

--Providing Rank to Salary
SELECT Salary, DENSE_RANK() OVER (ORDER BY Salary desc) as SalaryRank
FROM Employees
GO
