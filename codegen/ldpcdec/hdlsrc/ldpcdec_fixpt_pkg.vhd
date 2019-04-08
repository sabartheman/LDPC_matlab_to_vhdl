-- -------------------------------------------------------------
-- 
-- File Name: /home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/hdlsrc/ldpcdec_fixpt_pkg.vhd
-- Created: 2019-04-07 19:08:09
-- 
-- Generated by MATLAB 9.5, MATLAB Coder 4.1 and HDL Coder 3.13
-- 
-- 
-- -------------------------------------------------------------


LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

PACKAGE ldpcdec_fixpt_pkg IS
  TYPE vector_of_std_logic_vector2 IS ARRAY (NATURAL RANGE <>) OF std_logic_vector(1 DOWNTO 0);
  TYPE vector_of_std_logic_vector10 IS ARRAY (NATURAL RANGE <>) OF std_logic_vector(9 DOWNTO 0);
  TYPE vector_of_signed2 IS ARRAY (NATURAL RANGE <>) OF signed(1 DOWNTO 0);
  TYPE vector_of_signed10 IS ARRAY (NATURAL RANGE <>) OF signed(9 DOWNTO 0);
  TYPE vector_of_signed16 IS ARRAY (NATURAL RANGE <>) OF signed(15 DOWNTO 0);
  TYPE vector_of_signed14 IS ARRAY (NATURAL RANGE <>) OF signed(13 DOWNTO 0);
  TYPE vector_of_unsigned14 IS ARRAY (NATURAL RANGE <>) OF unsigned(13 DOWNTO 0);
  TYPE vector_of_unsigned16 IS ARRAY (NATURAL RANGE <>) OF unsigned(15 DOWNTO 0);
  TYPE vector_of_signed8 IS ARRAY (NATURAL RANGE <>) OF signed(7 DOWNTO 0);
  TYPE vector_of_signed25 IS ARRAY (NATURAL RANGE <>) OF signed(24 DOWNTO 0);
  TYPE vector_of_signed39 IS ARRAY (NATURAL RANGE <>) OF signed(38 DOWNTO 0);
  TYPE vector_of_signed12 IS ARRAY (NATURAL RANGE <>) OF signed(11 DOWNTO 0);
  TYPE vector_of_signed17 IS ARRAY (NATURAL RANGE <>) OF signed(16 DOWNTO 0);
  TYPE vector_of_signed28 IS ARRAY (NATURAL RANGE <>) OF signed(27 DOWNTO 0);
  TYPE vector_of_unsigned33 IS ARRAY (NATURAL RANGE <>) OF unsigned(32 DOWNTO 0);
  TYPE vector_of_signed40 IS ARRAY (NATURAL RANGE <>) OF signed(39 DOWNTO 0);
  TYPE vector_of_signed6 IS ARRAY (NATURAL RANGE <>) OF signed(5 DOWNTO 0);
  TYPE vector_of_signed5 IS ARRAY (NATURAL RANGE <>) OF signed(4 DOWNTO 0);
  TYPE vector_of_signed32 IS ARRAY (NATURAL RANGE <>) OF signed(31 DOWNTO 0);
  TYPE vector_of_signed33 IS ARRAY (NATURAL RANGE <>) OF signed(32 DOWNTO 0);
  TYPE vector_of_signed15 IS ARRAY (NATURAL RANGE <>) OF signed(14 DOWNTO 0);
  TYPE vector_of_signed23 IS ARRAY (NATURAL RANGE <>) OF signed(22 DOWNTO 0);
  TYPE vector_of_signed38 IS ARRAY (NATURAL RANGE <>) OF signed(37 DOWNTO 0);
  TYPE vector_of_signed37 IS ARRAY (NATURAL RANGE <>) OF signed(36 DOWNTO 0);
  TYPE vector_of_unsigned15 IS ARRAY (NATURAL RANGE <>) OF unsigned(14 DOWNTO 0);
  TYPE vector_of_unsigned3 IS ARRAY (NATURAL RANGE <>) OF unsigned(2 DOWNTO 0);
  TYPE vector_of_signed13 IS ARRAY (NATURAL RANGE <>) OF signed(12 DOWNTO 0);
  TYPE vector_of_signed43 IS ARRAY (NATURAL RANGE <>) OF signed(42 DOWNTO 0);
  TYPE vector_of_signed86 IS ARRAY (NATURAL RANGE <>) OF signed(85 DOWNTO 0);
END ldpcdec_fixpt_pkg;
