// FUN_004c67d0  004c67d0

void __thiscall FUN_004c67d0(int param_1,uint param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  
  cVar1 = FUN_004c6670(param_2);
  if (cVar1 == '\0') {
    FUN_005e9f20("false","..\\Casino\\PokerPlayer.cpp",0x17e);
  }
  FUN_004c9300(param_2 & 0xffff);
  FUN_004c9be0(CONCAT22(extraout_var_06,(undefined2)param_2));
  FUN_004d03c0(CONCAT22(extraout_var,(undefined2)param_2));
  FUN_004d2f80(CONCAT22(extraout_var_03,(undefined2)param_2));
  FUN_004d5bd0(CONCAT22(extraout_var_07,(undefined2)param_2));
  FUN_004d7f60(CONCAT22(extraout_var_00,(undefined2)param_2));
  FUN_004ddcf0(CONCAT22(extraout_var_04,(undefined2)param_2));
  FUN_004e1740(CONCAT22(extraout_var_08,(undefined2)param_2));
  FUN_004eaf80(CONCAT22(extraout_var_01,(undefined2)param_2));
  FUN_004ed310(CONCAT22(extraout_var_05,(undefined2)param_2));
  FUN_004ef800(CONCAT22(extraout_var_09,(undefined2)param_2));
  FUN_004f1e00(CONCAT22(extraout_var_02,(undefined2)param_2));
  *(uint *)(param_1 + 0x3fc) = param_2;
  return;
}

