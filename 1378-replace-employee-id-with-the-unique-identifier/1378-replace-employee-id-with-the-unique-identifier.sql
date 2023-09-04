# Write your MySQL query statement below
SELECT unique_id,Employees.name FROM Employees
LEFT OUTER JOIN EmployeeUNI
ON Employees.id=EmployeeUNI.id;