# Write your MySQL query statement below
SELECT u.name AS NAME,SUM(t.amount) AS BALANCE
FROM Transactions t LEFT JOIN Users u
ON u.account = t.account
GROUP BY u.account 
# Aggregate function can go directly after HAVING
HAVING SUM(t.amount)>10000;