// FUN_0056a580  0056a580

void __thiscall FUN_0056a580(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = FUN_0056b910(param_1);
  local_8 = local_8 + 1;
  puVar2 = (undefined4 *)FUN_005d0c30(local_10,1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  FUN_0064c560((double)local_8);
  return;
}

