SELECT C.name, R.rentals_date
FROM rentals AS R 
INNER JOIN customers AS C ON R.id_customers = C.id
WHERE R.rentals_date >= '2016-09-01' AND R.rentals_date <= '2016-09-30'