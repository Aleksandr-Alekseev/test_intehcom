-- phpMyAdmin SQL Dump
-- version 5.1.3
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Янв 24 2023 г., 01:46
-- Версия сервера: 5.7.38-log
-- Версия PHP: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `sorting`
--

-- --------------------------------------------------------

--
-- Структура таблицы `sorting_table`
--

CREATE TABLE `sorting_table` (
  `id` int(2) NOT NULL,
  `min_length` int(4) NOT NULL,
  `max_length` int(4) NOT NULL,
  `min_diameter` int(3) NOT NULL,
  `max_diameter` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Дамп данных таблицы `sorting_table`
--

INSERT INTO `sorting_table` (`id`, `min_length`, `max_length`, `min_diameter`, `max_diameter`) VALUES
(2, 4000, 4500, 140, 170),
(3, 4501, 5000, 160, 180),
(4, 4501, 5000, 170, 200),
(5, 4501, 5000, 190, 210),
(6, 5001, 5500, 200, 230),
(7, 5001, 5500, 220, 240),
(8, 5001, 5500, 230, 260),
(9, 5501, 6000, 250, 270),
(10, 5501, 6000, 260, 290),
(11, 5501, 6000, 280, 300),
(12, 6001, 6500, 290, 320),
(13, 6001, 6500, 310, 330),
(14, 6001, 6500, 320, 350),
(1, 4000, 4500, 130, 150);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
