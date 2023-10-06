SELECT products.name 
FROM products 
INNER JOIN providers ON products.id_providers = providers.id
WHERE (products.amount >=10 and products.amount <=20) 
AND providers.name LIKE 'P%';