# Write your MySQL query statement below
SELECT s.user_id, 
ROUND( IFNULL(SUM(c.action = 'confirmed')/NULLIF(COUNT(c.action), 0), 0), 2) 
AS confirmation_rate
FROM Signups s
LEFT JOIN confirmations c
ON s.user_id = c.user_id
GROUP by s.user_id;