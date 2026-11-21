// FUN_005f4070  005f4070

int __thiscall
FUN_005f4070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005f41f0(param_1);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1b1) != '\0')) &&
     ((iVar1 = FUN_005f3fe0(), iVar1 == 0 || (*(char *)(iVar1 + 0x1b1) != '\0')))) {
    iVar1 = FUN_005f40e0(param_2,param_3,param_4);
  }
  return iVar1;
}

