/* Write your PL/SQL query statement below */
Select Max(salary) As SecondHighestSalary from Employee where salary<>
(select Max(salary) from Employee);