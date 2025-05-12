CREATE DATABASE Assignment;

USE Assignment;

-- Create Student Table
-- Q-1 
CREATE TABLE Student (Student_ID INT PRIMARY KEY,Frame VARCHAR(255),Lname VARCHAR(255),Rollno INT,Mo_No VARCHAR(15),Address TEXT,Division VARCHAR(50),Medium VARCHAR(50),Fees DECIMAL(10, 2),Subjects TEXT);
SELECT * FROM student;

-- Create Course Table
CREATE TABLE Course (Course_ID INT PRIMARY KEY,Course_Details TEXT,Subjects TEXT,Student_ID INT,FOREIGN KEY (Student_ID) REFERENCES Student(Student_ID));
SELECT * FROM course;

-- Create Stream Table
CREATE TABLE Stream (Stream_ID INT PRIMARY KEY,Stream_Details TEXT,Course_Details TEXT,Course_ID INT,FOREIGN KEY (Course_ID) REFERENCES Course(Course_ID));
SELECT * FROM stream;

-- Create MoneyManagement Table
CREATE TABLE MoneyManagement (Uses_ID INT PRIMARY KEY,Fees DECIMAL(10, 2),Salary DECIMAL(10, 2),Scholarship DECIMAL(10, 2),Events TEXT);
SELECT * FROM moneymanagement;

-- Create Teacher Table
CREATE TABLE Teacher (Teacher_ID INT PRIMARY KEY,Frame VARCHAR(255),Lname VARCHAR(255),Mo_No VARCHAR(15),Address TEXT,Subjects TEXT,Salary DECIMAL(10, 2));
SELECT * FROM Teacher;




-- Q-2
-- Create Doctor Table
CREATE TABLE Doctor (Doctor_ID INT PRIMARY KEY,Fname VARCHAR(255),Lname VARCHAR(255),Disease_Expertise TEXT,Salary DECIMAL(10, 2));

-- Create Patient Table
CREATE TABLE Patient (Patient_ID INT PRIMARY KEY,Fname VARCHAR(255),Lname VARCHAR(255),Patient_Disease_Fees DECIMAL(10, 2));

-- Create HospitalDetails Table
CREATE TABLE HospitalDetails (Hospital_ID INT PRIMARY KEY,Hospital_Name VARCHAR(255),Hospital_Facilities TEXT,Hospital_Description TEXT,Doctor_ID INT,Patient_ID INT,FOREIGN KEY (Doctor_ID) REFERENCES Doctor(Doctor_ID),FOREIGN KEY (Patient_ID) REFERENCES Patient(Patient_ID));

-- Create MoneyManagement Table
CREATE TABLE MoneyManagement (Uses_ID INT PRIMARY KEY,Fees DECIMAL(10, 2),Salary DECIMAL(10, 2),Row3 TEXT);

-- Select all doctors
SELECT * FROM Doctor;

-- Select all patients
SELECT * FROM Patient;

-- Select all hospital details
SELECT * FROM HospitalDetails;

-- Select all money management records
SELECT * FROM MoneyManagement;



-- Q-3
-- Create Book Details table
CREATE TABLE Book_Details (Book_ID INT PRIMARY KEY,Title VARCHAR(255),Author VARCHAR(255),ISBN VARCHAR(20),Publisher VARCHAR(255),YOP INT,Copies INT);

-- Create Member Detail table
CREATE TABLE Member_Detail (Membership_ID INT PRIMARY KEY,Name VARCHAR(255),Address VARCHAR(255),Age INT,Mo_no VARCHAR(15));

-- Create Reservation table
CREATE TABLE Reservation (Reservation_ID INT PRIMARY KEY,Book_ID INT,Membership_ID INT,Status VARCHAR(50),Date DATE);

-- Create Librarian table
CREATE TABLE Librarian (Librarian_ID INT PRIMARY KEY,Fname VARCHAR(255),Lname VARCHAR(255),Age INT,Address VARCHAR(255),Reservation_ID INT);

-- Select Queries
SELECT * FROM Book_Details;
SELECT * FROM Member_Detail;
SELECT * FROM Reservation;
SELECT * FROM Librarian;







-- Q-4
-- Create Restaurant table
CREATE TABLE Restaurant (Restaurant_ID INT PRIMARY KEY,Name VARCHAR(255),Location VARCHAR(255),Star_Rating DECIMAL(2,1),Types_of_Food VARCHAR(255));

-- Create User table
CREATE TABLE User (User_ID INT PRIMARY KEY,Name VARCHAR(255),Email VARCHAR(255),Phone VARCHAR(20),Review TEXT);

-- Create Order table
CREATE TABLE Order_Table (Order_ID INT PRIMARY KEY,Restaurant_ID INT,User_ID INT,Delivery_ID INT,Status VARCHAR(50));

-- Create Delivery table
CREATE TABLE Delivery (Delivery_ID INT PRIMARY KEY,Order_ID INT,User_ID INT,Partner_ID INT,Status VARCHAR(50));

-- Simple SELECT Query
SELECT * FROM Restaurant;
SELECT * FROM User;
SELECT * FROM Order_Table;
SELECT * FROM Delivery;








-- Q-5
-- Create Seller table
CREATE TABLE Seller (Seller_ID INT PRIMARY KEY,Name VARCHAR(255),Address VARCHAR(255),Mo_no VARCHAR(15));

-- Create Product table
CREATE TABLE Product (Product_ID INT PRIMARY KEY,Name VARCHAR(255),Price DECIMAL(10,2),Description TEXT,Product_Type VARCHAR(100),Seller_ID INT);

-- Create Customer table
CREATE TABLE Customer (Customer_ID INT PRIMARY KEY,Fname VARCHAR(255),Lname VARCHAR(255),DOB DATE,Address VARCHAR(255),Mo_no VARCHAR(15),Payment_Status VARCHAR(50));

-- Create Order table
CREATE TABLE Order_Table (Order_ID INT PRIMARY KEY,Customer_ID INT,Order_Date DATE,Price DECIMAL(10,2));

-- Create Payment table
CREATE TABLE Payment (Payment_ID INT PRIMARY KEY,Order_ID INT,Amount DECIMAL(10,2),Payment_Status VARCHAR(50));

-- Simple SELECT Query
SELECT * FROM Seller;
SELECT * FROM Product;
SELECT * FROM Customer;
SELECT * FROM Order_Table;
SELECT * FROM Payment;
