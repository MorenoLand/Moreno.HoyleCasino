// FUN_0043bbd0  0043bbd0

void __thiscall
FUN_0043bbd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  
  if (param_4 < 4) {
    if ((((*(int *)(param_1 + 0x48 + param_4 * 0x20) == 0) &&
         (*(int *)(param_1 + param_4 * 0x20 + 0x4c) == 0)) ||
        ((iVar2 = FUN_00434820(param_1), iVar2 == 0 &&
         (cVar1 = FUN_005cb7d0(param_4,param_5), cVar1 == '\0')))) ||
       ((iVar2 = FUN_00434820(param_1), iVar2 == 2 &&
        (cVar1 = FUN_005cb7d0(param_4,param_5), cVar1 == '\0')))) {
      *(undefined4 *)(param_1 + 0xf0 + param_4 * 8) = param_2;
      *(undefined4 *)(param_1 + 0xf4 + param_4 * 8) = param_3;
    }
    FUN_005cb6d0(param_2,param_3,param_4,param_5);
  }
  return;
}

