// FUN_005c9960  005c9960

undefined4 __thiscall FUN_005c9960(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  FUN_005c9140();
  if (*(int *)(param_1 + 0x18 + param_2 * 4) < 0) {
    local_c = -*(int *)(param_1 + 0x18 + param_2 * 4);
  }
  else {
    local_c = *(int *)(param_1 + 0x18 + param_2 * 4);
  }
  iVar1 = (param_3 - local_c) + 2;
  if ((iVar1 < 0) || (4 < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x54 + param_2 * 0x14 + iVar1 * 4);
  }
  return uVar2;
}

