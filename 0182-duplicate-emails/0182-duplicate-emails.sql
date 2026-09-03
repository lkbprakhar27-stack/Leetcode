SELECT DISTINCT T1.email 
FROM Person AS T1, Person AS T2 
WHERE T1.email = T2.email 
  AND T1.id <> T2.id;
