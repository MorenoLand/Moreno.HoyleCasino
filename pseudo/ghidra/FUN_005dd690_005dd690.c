// FUN_005dd690  005dd690

void __fastcall FUN_005dd690(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (DAT_007947e4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_007947e4 + 0x254))();
    if (iVar1 != 0) {
      local_8 = (**(code **)(*DAT_007947e4 + 0x254))();
    }
  }
  FUN_005f47e0(local_8);
  return;
}

