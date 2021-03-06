-- -------------------------------------------------------------
-- 
-- File Name: /home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcenc/hdlsrc/ldpcenc_fixpt.vhd
-- Created: 2019-04-07 12:52:54
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
-- Module: ldpcenc_fixpt
-- Source Path: ldpcenc_fixpt
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.ldpcenc_fixpt_pkg.ALL;

ENTITY ldpcenc_fixpt IS
  PORT( m                                 :   IN    std_logic_vector(0 TO 3);  -- ufix1 [4]
        codedout                          :   OUT   std_logic_vector(0 TO 6)  -- ufix1 [7]
        );
END ldpcenc_fixpt;


ARCHITECTURE rtl OF ldpcenc_fixpt IS

  -- Constants
  CONSTANT b0                             : std_logic_vector(0 TO 27) := 
    ('1', '0', '1', '1', '1', '1', '1', '0', '0', '1', '1', '1', '1', '0', '0', '0', '0', '1', '0', '0', '0', '0',
     '1', '0', '0', '0', '0', '1');  -- ufix1 [28]

BEGIN
  ldpcenc_fixpt_1_output : PROCESS (m)
    VARIABLE c : vector_of_unsigned4(0 TO 6);
    VARIABLE iA : vector_of_unsigned8(0 TO 6);
    VARIABLE z1 : vector_of_unsigned8(0 TO 6);
    VARIABLE add_cast : vector_of_signed64(0 TO 3);
    VARIABLE t_0 : std_logic_vector(0 TO 3);
    VARIABLE add_cast_0 : vector_of_unsigned5(0 TO 3);
    VARIABLE ia_0 : vector_of_unsigned8(0 TO 6);
    VARIABLE cast : vector_of_signed9(0 TO 6);
    VARIABLE mul_temp : vector_of_signed41(0 TO 6);
    VARIABLE sub_cast : vector_of_signed32(0 TO 6);
    VARIABLE sub_cast_0 : vector_of_unsigned8(0 TO 6);
  BEGIN
    --HDL code generation from MATLAB function: ldpcenc_fixpt
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    --                                                                          %
    --           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
    --                                                                          %
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    -- file name:    ldpcenc.m
    -- description:  codedout = ldpcenc(m,G) performs ldpc encoding given the message block m and the generator matrix G.
    --               see 'ldpcsim.m' for an example.
    --               note that the function actually applies to binary block encoding in general.
    --   
    --               This code is modified for a 7,4 coding scheme
    --
    -- algorithm:    c = m*G
    -- author:       y. jiang 
    -- modified:     Skylar T.
    -- date:         april 2019
    -- revision:     1.1a
    --pre-allocating, hdl-coder doesn't like passing arrays, since vhdl doesn't
    --have any support for passing an array
    --might be able to replace this with a xor gate and a multiply, but will
    --leave for now

    FOR m1 IN 0 TO 6 LOOP
      c(m1) := to_unsigned(16#0#, 4);

      FOR k IN 0 TO 3 LOOP
        add_cast(k) := resize(to_signed(m1, 32) & '0' & '0', 64);
        IF m(k) = '1' THEN 
          t_0(k) := b0(to_integer(to_signed(k, 32) + resize(add_cast(k), 32)));
        ELSE 
          t_0(k) := '0';
        END IF;
        add_cast_0(k) := '0' & '0' & '0' & '0' & t_0(k);
        c(m1) := resize(resize(c(m1), 5) + add_cast_0(k), 4);
      END LOOP;

      iA(m1) := resize(c(m1), 8);
      ia_0(m1) := iA(m1) srl 1;
      cast(m1) := signed(resize(ia_0(m1), 9));
      -- CSD Encoding (2) : 10; Cost (Adders) = 0
      mul_temp(m1) := resize(cast(m1) & '0', 41);
      sub_cast(m1) := mul_temp(m1)(31 DOWNTO 0);
      sub_cast_0(m1) := unsigned(sub_cast(m1)(7 DOWNTO 0));
      z1(m1) := iA(m1) - sub_cast_0(m1);
      codedout(m1) <= z1(m1)(0);
    END LOOP;

  END PROCESS ldpcenc_fixpt_1_output;


END rtl;

