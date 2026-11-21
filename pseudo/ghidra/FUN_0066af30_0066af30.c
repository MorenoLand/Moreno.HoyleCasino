// FUN_0066af30  0066af30

void __thiscall FUN_0066af30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_2 + 4) == '\0') && (*(int *)(param_2 + 0x20) == DAT_0162ee84[5])) &&
     ((iVar1 = *(int *)(param_2 + 0x18), iVar1 == 2 || (iVar1 == 4)))) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 600))(iVar1,param_1);
    (**(code **)(*DAT_0162ee84 + 0x34))(uVar2);
    *(undefined1 *)(param_2 + 4) = 1;
  }
  FUN_005f1680(param_2);
  return;
}

