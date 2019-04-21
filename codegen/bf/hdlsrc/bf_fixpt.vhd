-- -------------------------------------------------------------
-- 
-- File Name: /home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/hdlsrc/bf_fixpt.vhd
-- Created: 2019-04-20 17:52:25
-- 
-- Generated by MATLAB 9.5, MATLAB Coder 4.1 and HDL Coder 3.13
-- 
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Design base rate: 1
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: bf_fixpt
-- Source Path: bf_fixpt
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY bf_fixpt IS
  PORT( r                                 :   IN    std_logic_vector(0 TO 6);  -- ufix1 [7]
        iter                              :   IN    std_logic_vector(6 DOWNTO 0);  -- ufix7
        out_rsvd                          :   OUT   std_logic_vector(0 TO 6)  -- ufix1 [7]
        );
END bf_fixpt;


ARCHITECTURE rtl OF bf_fixpt IS

  -- Signals
  SIGNAL iter_unsigned                    : unsigned(6 DOWNTO 0);  -- ufix7

BEGIN
  iter_unsigned <= unsigned(iter);

  --HDL code generation from MATLAB function: bf_fixpt
  --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  --                                                                          %
  --           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
  --                                                                          %
  --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  -- file name:    bf.m
  -- description:  out = bf(r,H,n) performs bit-flipping decoding for an ldpc code specified by the parity-check matrix H,
  --               where r is the received binary sequence, and n the number of decoding iterations.
  -- algorithm:    bit flipping decoding
  -- author:       y. jiang 
  -- date:         june 2010
  -- revision:     1.0
  out_rsvd <= r;

END rtl;
