-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Máy chủ: localhost
-- Thời gian đã tạo: Th4 09, 2019 lúc 05:21 PM
-- Phiên bản máy phục vụ: 10.1.38-MariaDB
-- Phiên bản PHP: 7.3.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Cơ sở dữ liệu: `bd_user`
--

-- --------------------------------------------------------

--
-- Cấu trúc bảng cho bảng `user`
--

CREATE TABLE `user` (
  `Username` varchar(30) NOT NULL,
  `Password` varchar(30) NOT NULL,
  `SDT` varchar(11) NOT NULL,
  `Name_user` varchar(30) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Đang đổ dữ liệu cho bảng `user`
--

INSERT INTO `user` (`Username`, `Password`, `SDT`, `Name_user`) VALUES
('hieudeptrai', '123456', '0178797567', 'Doan Van Hieu'),
('quandeptrai', '237649', '018987757', 'Doan Thi Quan'),
('tandeptrai', 'tandeptrai', '01786713', 'Nguyen Thi Tan'),
('toannhinhanh', 'toannhinhanh', '0178967832', 'Nguyen Tien Toan'),
('tienxauxi', 'tienxauxi', '0178362718', 'Nguyen Van Tien'),
('user5', 'user5', '08193271', 'user5'),
('user7', 'user7', '01832893', 'Nguyen'),
('user8', 'user8', '018937298', 'Nguyen'),
('user9', 'user9', '0138921', 'Toan'),
('user10', 'user10', '0183921', 'Tan'),
('user11', 'user11', '01783927', 'Thang');

--
-- Chỉ mục cho các bảng đã đổ
--

--
-- Chỉ mục cho bảng `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`Username`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
