# Write your MySQL query statement below



select max(salary) as SecondHighestSalary
from employee
where salary<(select MAX(Salary) from Employee);