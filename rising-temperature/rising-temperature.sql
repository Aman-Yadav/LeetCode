select distinct(a.id) from weather a, weather b
where a.temperature > b.temperature
and DATEDIFF(a.recorddate,b.recorddate) = 1;