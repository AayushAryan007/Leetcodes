# Write your MySQL query statement below
SELECT e2.Name
FROM Employee e1 
    JOIN Employee e2 ON e1.ManagerId = e2.Id
GROUP BY e1.ManagerId
HAVING count(e1.Id) >= 5;