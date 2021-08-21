select a.name as Employee from
employee AS a, employee AS b
where a.managerid = b.id
and
a.salary > b.salary;