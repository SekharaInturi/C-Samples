# C-Samples
C++Samples 
Create a Program  to determine if a word or phrase is a palindrome. The function will take as input a string and return a boolean that is true if the word or phrase is a palindrome and false otherwise. Examples of palindromes are:

1. 1881
2. Dad
3. Step on no pets


SQL Querys & Results  : 

SQL Question 1 
A retail company maintains the data of its customers in the CUSTOMER table. Write a query to print the IDs and the NAMEs of the customers, sorted by CUSTOMER.NAME in descending order. If two or more customers have the same CUSTOMER.NAME, then sort these by CUSTOMER.ID in ascending order.



Answers )    select ID , name , country ,credits from customers order by name desc,ID  ;



 SQL Question 2 :   
    The given student table 'students' contains the total marks of a student in a class. The teacher of the class wants to assign grades to the students with the following lo

·         Greater > 90 | A+

·         Greater > 70 | A

·         Greater > 50 | B

·         Greater >= 40 | C

·         Less than 40 | Fail

Answer ) 
select id,name,marks,
case when marks>90 then 'A+'
when marks>70 then 'A'
when marks>50 then 'B'
when marks>40 then 'C'
else 'Fail' end as grade
from students
