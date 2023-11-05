# Write your MySQL query statement below
SELECT id, movie, description, rating
FROM Cinema
WHERE id % 2 != 0 AND description != 'boring'
order by rating desc;
