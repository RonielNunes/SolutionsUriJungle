SELECT M.id, M.name
FROM movies AS M
INNER JOIN genres AS G ON M.id_genres = G.id
WHERE G.description = 'Action';
