// FUN_005d5500  005d5500

void __thiscall FUN_005d5500(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == -1) {
    param_3 = FUN_005f3bf0(param_1);
  }
  iVar1 = (**(code **)(*DAT_007947e0 + 0x3dc))(param_3);
  iVar2 = FUN_005d52e0();
  *(undefined1 *)(iVar2 + 0x31 + iVar1) = param_2;
  return;
}

