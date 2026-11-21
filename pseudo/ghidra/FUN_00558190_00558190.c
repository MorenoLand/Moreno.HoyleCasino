// FUN_00558190  00558190

void __fastcall FUN_00558190(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 local_8;
  
  FUN_00557310();
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    uVar1 = FUN_006436c0();
    FUN_00555270(CONCAT22(extraout_var_00,uVar1),local_8);
    FUN_00557e90(CONCAT22(extraout_var,uVar1));
  }
  FUN_00558330();
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_00557310();
  return;
}

