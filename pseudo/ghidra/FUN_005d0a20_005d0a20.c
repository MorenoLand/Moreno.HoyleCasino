// FUN_005d0a20  005d0a20

void __thiscall FUN_005d0a20(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 local_10 [8];
  int local_8;
  
  if (999999 < param_2) {
    local_8 = param_2 + -999999;
    puVar1 = (undefined4 *)FUN_005d0c30(local_10,local_8);
    FUN_005d1420(*puVar1,puVar1[1]);
    param_2 = 999999;
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

