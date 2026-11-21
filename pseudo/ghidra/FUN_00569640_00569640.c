// FUN_00569640  00569640

void __fastcall FUN_00569640(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 local_8;
  
  FUN_005687b0();
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    uVar1 = FUN_006436c0();
    FUN_005624a0(CONCAT22(extraout_var_00,uVar1),local_8);
    FUN_00569340(CONCAT22(extraout_var,uVar1));
  }
  FUN_00569780();
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_005687b0();
  return;
}

