# Write your MySQL query statement below
SELECT name,bonus FROM Employee
LEFT OUTER JOIN Bonus
ON Employee.empId=Bonus.empId
WHERE bonus<1000 || bonus IS NULL;