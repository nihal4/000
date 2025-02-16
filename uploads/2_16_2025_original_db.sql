-- phpMyAdmin SQL Dump
-- version 4.8.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 16, 2025 at 03:46 AM
-- Server version: 10.1.37-MariaDB
-- PHP Version: 7.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `emp_info_c1_nihal`
--

-- --------------------------------------------------------

--
-- Table structure for table `course`
--

CREATE TABLE `course` (
  `CCode` varchar(16) NOT NULL,
  `CName` varchar(32) NOT NULL,
  `Credit` int(11) DEFAULT NULL,
  `DId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `course`
--

INSERT INTO `course` (`CCode`, `CName`, `Credit`, `DId`) VALUES
('BA105', 'Statics', 3, 5),
('BA106', 'Accounting', 3, 5),
('BA107', 'Linear Algebra', 4, 5),
('BIO110', 'Genetics', 2, 9),
('BIO111', 'Design Principles', 2, 9),
('CH109', 'Organic Chemistry', 2, 8),
('CS101', 'Data Structures', 3, 1),
('CS102', 'Algorithms', 4, 1),
('CS108', 'Quantum Mechanics', 3, 1),
('CS112', 'Ethics in Law', 3, 1),
('EE103', 'Circuits', 4, 2),
('EE104', 'Thermodynamics', 3, 2),
('EE113', 'Psychological Testing', 3, 2),
('PSY114', 'Macroeconomics', 3, 14),
('PSY115', 'Modern History', 2, 14);

-- --------------------------------------------------------

--
-- Table structure for table `dpt`
--

CREATE TABLE `dpt` (
  `DId` int(11) NOT NULL,
  `Dname` varchar(65) NOT NULL,
  `Location` varchar(128) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `dpt`
--

INSERT INTO `dpt` (`DId`, `Dname`, `Location`) VALUES
(1, 'Computer Science', 'Building A'),
(2, 'Electrical Engineering', 'Building A'),
(3, 'Mechanical Engineering', 'Building B'),
(4, 'Civil Engineering', 'Building D'),
(5, 'Business Administration', 'Building D'),
(6, 'Mathematics', 'Building D'),
(7, 'Physics', 'Building B'),
(8, 'Chemistry', 'Building C'),
(9, 'Biology', 'Building C'),
(10, 'Architecture', 'Building A'),
(11, 'Philosophy', 'Building D'),
(12, 'Economics', 'Building D'),
(13, 'Law', 'Building A'),
(14, 'Psychology', 'Building C'),
(15, 'History', 'Building B');

-- --------------------------------------------------------

--
-- Table structure for table `result`
--

CREATE TABLE `result` (
  `SId` int(11) NOT NULL,
  `CCode` varchar(16) NOT NULL,
  `Mark` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `result`
--

INSERT INTO `result` (`SId`, `CCode`, `Mark`) VALUES
(1, 'CS101', 85),
(1, 'CS102', 90),
(1, 'CS108', 88),
(1, 'CS112', 75),
(2, 'CS101', 87),
(2, 'EE103', 80),
(2, 'EE104', 82),
(3, 'BIO110', 72),
(3, 'CH109', 65),
(3, 'CS101', 70),
(3, 'CS102', 78),
(4, 'CS108', 60),
(4, 'EE104', 74),
(5, 'BIO111', 89),
(5, 'CS112', 93),
(5, 'PSY114', 88),
(5, 'PSY115', 85),
(6, 'BIO110', 78),
(6, 'CH109', 70),
(6, 'CS102', 81),
(7, 'BA105', 88),
(7, 'CS101', 90),
(7, 'CS112', 95),
(7, 'EE103', 85),
(8, 'CH109', 62),
(9, 'BA106', 75),
(9, 'BIO111', 82),
(9, 'CS112', 90),
(9, 'PSY115', 78),
(10, 'BA105', 73),
(10, 'CS101', 88),
(10, 'CS102', 84),
(10, 'EE113', 77);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `SId` int(11) NOT NULL,
  `Sname` varchar(65) NOT NULL,
  `Age` int(11) DEFAULT NULL,
  `Thana` varchar(32) DEFAULT NULL,
  `Disctrict` varchar(32) NOT NULL,
  `Email` varchar(64) DEFAULT NULL,
  `DId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`SId`, `Sname`, `Age`, `Thana`, `Disctrict`, `Email`, `DId`) VALUES
(1, 'Alice', 20, 'Thana1', 'District1', 'alice@example.com', 1),
(2, 'Bob', 21, 'Thana2', 'District2', 'bob@example.com', 2),
(3, 'Charlie', 22, 'Thana3', 'District3', 'charlie@example.com', 3),
(4, 'David', 23, 'Thana4', 'District4', 'david@example.com', 1),
(5, 'Eve', 24, 'Thana5', 'District5', 'eve@example.com', 2),
(6, 'Frank', 20, 'Thana6', 'District6', 'frank@example.com', 3),
(7, 'Grace', 21, 'Thana7', 'District7', 'grace@example.com', 7),
(8, 'Hannah', 22, 'Thana8', 'District8', 'hannah@example.com', 8),
(9, 'Ivy', 23, 'Thana9', 'District9', 'ivy@example.com', 8),
(10, 'Jack', 24, 'Thana10', 'District10', 'jack@example.com', 10),
(11, 'Kathy', 20, 'Thana11', 'District11', 'kathy@example.com', 10),
(12, 'Leo', 21, 'Thana12', 'District12', 'leo@example.com', 12),
(13, 'Mona', 22, 'Thana13', 'District13', 'mona@example.com', 12),
(14, 'Nathan', 23, 'Thana14', 'District14', 'nathan@example.com', 14),
(15, 'Olivia', 24, 'Thana15', 'District15', 'olivia@example.com', 15);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `course`
--
ALTER TABLE `course`
  ADD PRIMARY KEY (`CCode`),
  ADD KEY `DId` (`DId`);

--
-- Indexes for table `dpt`
--
ALTER TABLE `dpt`
  ADD PRIMARY KEY (`DId`);

--
-- Indexes for table `result`
--
ALTER TABLE `result`
  ADD PRIMARY KEY (`SId`,`CCode`),
  ADD KEY `CCode` (`CCode`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`SId`),
  ADD KEY `DId` (`DId`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `course`
--
ALTER TABLE `course`
  ADD CONSTRAINT `course_ibfk_1` FOREIGN KEY (`DId`) REFERENCES `dpt` (`DId`);

--
-- Constraints for table `result`
--
ALTER TABLE `result`
  ADD CONSTRAINT `result_ibfk_1` FOREIGN KEY (`SId`) REFERENCES `student` (`SId`),
  ADD CONSTRAINT `result_ibfk_2` FOREIGN KEY (`CCode`) REFERENCES `course` (`CCode`);

--
-- Constraints for table `student`
--
ALTER TABLE `student`
  ADD CONSTRAINT `student_ibfk_1` FOREIGN KEY (`DId`) REFERENCES `dpt` (`DId`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
