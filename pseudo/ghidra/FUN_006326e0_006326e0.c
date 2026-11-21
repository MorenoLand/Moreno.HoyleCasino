// FUN_006326e0  006326e0

void __thiscall FUN_006326e0(int *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_005f3bf0();
  iVar2 = FUN_006352f0(uVar1);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0xe8))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*param_1 + 0xe8))();
      (**(code **)(*piVar3 + 0x8c))(param_2);
    }
  }
  return;
}

