
SELECT c.name, SUM(p.amount) 
FROM products  AS p INNER JOIN categories AS c ON p.id_categories = c.id
GROUP BY c.name 


