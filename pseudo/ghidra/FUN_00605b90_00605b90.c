// FUN_00605b90  00605b90

undefined4 * __thiscall
FUN_00605b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aab68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc680(param_2,param_3);
  local_8 = 0;
  *param_1 = sciDropListButton::vftable;
  *(undefined1 *)(param_1 + 0x7d) = param_4;
  FUN_005f2370(param_2,param_5,1);
  iVar1 = FUN_005f2300(param_2);
  if (*(int *)(iVar1 + 0x1c0) == 0) {
    puVar2 = param_1;
    FUN_005f2300(param_2);
    FUN_005ff040(puVar2);
  }
  param_1[0x7c] = 0xffffffff;
  param_1[0x7e] = param_5;
  ExceptionList = local_10;
  return param_1;
}

