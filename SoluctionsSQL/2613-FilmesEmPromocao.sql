SELECT M.id, M.name
FROM movies AS M 
INNER JOIN prices AS P ON M.id_prices = P.id
WHERE P.value < 2;