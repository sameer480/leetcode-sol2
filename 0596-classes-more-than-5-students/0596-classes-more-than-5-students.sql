SELECT class
FROM Courses
GROUP BY class
 having COUNT(class) >= 5;
