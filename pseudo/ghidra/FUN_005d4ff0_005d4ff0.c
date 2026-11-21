// FUN_005d4ff0  005d4ff0

void __thiscall FUN_005d4ff0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0();
  }
  (**(code **)(*DAT_0162ee84 + 0x32c))
            (param_2,*(undefined4 *)(*(int *)(param_1 + 0x3a8) + param_2 * 4));
  iVar1 = FUN_005f3bf0();
  if (param_2 == iVar1) {
    uVar2 = FUN_0064c8a0(0,0);
    *(undefined8 *)(param_1 + 0x4d4) = uVar2;
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005d5f80(uVar2);
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005d6050(uVar2);
  }
  return;
}

