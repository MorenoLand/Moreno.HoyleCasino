// FUN_0065cd50  0065cd50

int __fastcall FUN_0065cd50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x8c) + 0x1c1) == '\0') {
    iVar2 = FUN_00663c50();
  }
  else if (DAT_00795fbe == '\0') {
    iVar2 = (**(code **)(*DAT_0162ee84 + 500))();
  }
  else {
    iVar1 = (**(code **)(*DAT_0162ee84 + 500))();
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x1f8))();
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}

