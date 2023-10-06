SELECT customers.name 
FROM customers
INNER JOIN Legal_person ON Legal_person.id_customers = customers.id
WHERE Legal_person.id_customers IS NOT NULL;