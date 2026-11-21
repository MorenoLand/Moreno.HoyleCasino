// FUN_005c9390  005c9390

int __thiscall FUN_005c9390(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0xffffffff;
  local_8 = 0;
  FUN_005c9550(param_2,param_3,&local_10,&local_8);
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  local_c = FUN_005c9640(param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),param_3,local_10,
                         local_8);
  local_c = local_c * (iVar2 / iVar1);
  iVar2 = FUN_005c96c0(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
  if (iVar2 <= local_c) {
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  return local_c;
}

