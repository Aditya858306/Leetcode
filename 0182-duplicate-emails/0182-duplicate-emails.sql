# Write your MySQL query statement below
select distinct p1.email from person p1 JOIN person p2 on p1.id != p2.id and p1.email = p2.email;