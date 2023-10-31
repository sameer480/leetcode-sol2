# Write your MySQL query statement below
select P.product_name,S.year,S.price FROM Sales S INNER JOIN Product P on P.product_id=S.product_id