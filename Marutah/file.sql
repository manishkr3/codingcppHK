-- Assignment 1

CREATE TABLE CLIENT_MASTER (
    Client_no VARCHAR(6) PRIMARY KEY,
    Name VARCHAR(20) NOT NULL,
    Address1 VARCHAR(30),
    Address2 VARCHAR(30),
    City VARCHAR(15),
    Pincode INT,
    State VARCHAR(15)
);
CREATE TABLE PRODUCT_MASTER (
  Product_no varchar(6) PRIMARY KEY,
  Description varchar(20) ,
  Quantity_on_hand int ,
  Reorder_level int ,
  Cost_price double ,
  Selling_price double
);
CREATE TABLE SALESMAN_MASTER (
  Salesman_no varchar(6) PRIMARY KEY,
  Name varchar(20) NOT NULL,
  Address1 varchar(30) ,
  Address2 varchar(30) ,
  City varchar(15) ,
  Pincode int ,
  State varchar(15) ,
  Date_of_joining date ,
  Salary double 
);

INSERT INTO CLIENT_MASTER VALUES (1, 'Chrono', '47 MySakila Drive','47 MySakila Drive','Alberta',176546,'Alberta');
INSERT INTO CLIENT_MASTER VALUES (2, 'Ronaldo', '1121 Loja Avenue','1121 Loja Avenue','California',196526,'Texas');
INSERT INTO CLIENT_MASTER VALUES (3, 'Champ', '270 Toulon Boulevard','270 Toulon Boulevard','Kaduna',143682,'Yamaguchi');
INSERT INTO CLIENT_MASTER VALUES (4, 'Charlie', '47 MySakila Drive','47 MySakila Drive','Alberta',176546,'Alberta');
INSERT INTO CLIENT_MASTER VALUES (5, 'Shampoo', '1121 Loja Avenue','1121 Loja Avenue','California',196526,'Texas');
INSERT INTO CLIENT_MASTER VALUES (6, 'Shawn', '176 Mandaluyong Place','176 Mandaluyong Place','Kanpur',143682,'Uttar Pradesh');

INSERT INTO PRODUCT_MASTER VALUES (1, 'Motherboard', 1595,10,800,1000);
INSERT INTO PRODUCT_MASTER VALUES (2, 'screen guard', 1064,5,80,200);
INSERT INTO PRODUCT_MASTER VALUES (3, 'mouse', 1236,25,750,900);
INSERT INTO PRODUCT_MASTER VALUES (4, 'desktop', 4239,6,5400,6299);
INSERT INTO PRODUCT_MASTER VALUES (5, 'cooling pad', 10064,51,1000,1500);
INSERT INTO PRODUCT_MASTER VALUES (6, 'otg cable', 1869,22,190,250);

INSERT INTO SALESMAN_MASTER VALUES (1, 'ALEC', '391 Callao Drive','391 Callao Drive','Midi-Pyrnes',179635,'So Paulo','2006-09-13',35800.36);
INSERT INTO SALESMAN_MASTER VALUES (2, 'SANDRA', '1718 Valencia Street','939 Probolinggo Loop','Georgia',174090,'Sucre','2002-08-27',52600.20);
INSERT INTO SALESMAN_MASTER VALUES (3, 'SISSY', '1135 Izumisano Parkway','1031 Daugavpils Parkway','Tete',359876,'Buenos Aires','2018-12-10',10000.00);
INSERT INTO SALESMAN_MASTER VALUES (4, 'BURT', '939 Probolinggo Loop','1668 Saint Louis Place','Callao',179635,'Songkhla','2006-09-13',35800.36);
INSERT INTO SALESMAN_MASTER VALUES (5, 'REESE', '1964 Allappuzha Street','1206 Dos Quebradas Place','Midi-Pyrnes',174090,'Brunei','2002-08-27',52600.20);
INSERT INTO SALESMAN_MASTER VALUES (6, 'SANDRA', '1668 Saint Louis Place','1718 Valencia Street','Lipetsk',359876,'So Paulo','2018-12-10',10000.00);

SELECT * FROM CLIENT_MASTER;
SELECT * FROM PRODUCT_MASTER;
SELECT * FROM SALESMAN_MASTER;
SELECT * FROM client_location;

UPDATE client_master SET Name= 'Manish' where Name='Shampoo' AND Client_no=5 ;
UPDATE product_master SET Quantity_on_hand = 4002 where Product_no=4 ;
UPDATE salesman_master SET City= 'Solan' where Salesman_no=3 ;

DELETE FROM client_master WHERE Client_no=6;
DELETE FROM product_master WHERE Product_no=6;
DELETE FROM salesman_master WHERE Salesman_no=6;

CREATE TABLE client_Location as SELECT Client_no, Address1,City,State FROM client_master;

INSERT INTO client_location (Client_no, Address1,City,State)
SELECT Salesman_no, Address1,City,State FROM salesman_master;

ALTER TABLE client_master add Last_name VARCHAR(20) after Name;
ALTER TABLE product_master add Brand VARCHAR(20) after Description;
ALTER TABLE salesman_master add Last_name VARCHAR(20) after Name;

DROP TABLE client_location;

RENAME TABLE salesman_master to salesman_data;
RENAME TABLE salesman_data to salesman_master;

DESCRIBE product_master;

-- Assignment 2

select Selling_price-Cost_price from product_master;

select Selling_price-Cost_price as Profit from product_master;

SELECT * FROM PRODUCT_MASTER
WHERE Cost_price>500 AND Selling_price<=6000;

SELECT * FROM PRODUCT_MASTER
WHERE Cost_price<=900 OR Selling_price>=6100;

SELECT * FROM PRODUCT_MASTER
WHERE Cost_price BETWEEN 100 AND 800;

SELECT * FROM PRODUCT_MASTER
WHERE Cost_price NOT BETWEEN 100 AND 800;

SELECT * FROM CLIENT_MASTER
WHERE Name LIKE 'P%e';

SELECT * FROM CLIENT_MASTER
WHERE Name LIKE 'P%e' OR Name LIKE 'N%' OR Name LIKE 'B%';

SELECT * FROM CLIENT_MASTER
WHERE Name IN ('Manish', 'Ronaldo', 'Shampoo', 'AREN', 'Shawn', 'JOHN' );

SELECT * FROM CLIENT_MASTER
WHERE Name NOT IN ('Manish', 'Ronaldo', 'Shampoo', 'AREN', 'Shawn', 'JOHN' );

SELECT  DATE_FORMAT(Date_of_joining, '%b %Y') AS Joining
FROM salesman_master;