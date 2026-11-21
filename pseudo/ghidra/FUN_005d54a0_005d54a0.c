// FUN_005d54a0  005d54a0

bool __thiscall FUN_005d54a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0(param_1);
  }
  iVar1 = (**(code **)(*DAT_007947e0 + 0x3dc))(param_2);
  iVar2 = FUN_005d52e0();
  return *(char *)(iVar2 + 0x31 + iVar1) != '\0';
}

