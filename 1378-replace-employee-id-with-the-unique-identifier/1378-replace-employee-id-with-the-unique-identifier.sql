# Write your MySQL query statement below
select e.unique_id, ee.name
from EmployeeUNI e right join Employees ee
on e.id = ee.id
