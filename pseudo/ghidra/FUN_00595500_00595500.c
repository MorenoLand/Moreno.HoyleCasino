// FUN_00595500  00595500

void FUN_00595500(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_var;
  
  FUN_00599570(param_1,1);
  FUN_00591a70(extraout_var);
  FUN_00598810(param_1);
  iVar1 = FUN_005dcb00(param_1);
  *(undefined1 *)(iVar1 + 0x4a2) = 1;
  (**(code **)(**(int **)(DAT_007935a4 + 4) + 4))(1);
  return;
}

