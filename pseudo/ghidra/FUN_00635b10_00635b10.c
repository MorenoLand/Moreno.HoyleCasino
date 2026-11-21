// FUN_00635b10  00635b10

void __thiscall FUN_00635b10(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_007960d8 + 0x10) != 0) {
    FUN_00613da0(param_1);
  }
  FUN_005f3c80(param_2);
  DAT_0162ee80 = (int *)0x0;
  if (param_2 != -1) {
    if ((param_2 != 0x3e9) && (iVar1 = (**(code **)(*DAT_0162ee84 + 0x154))(), iVar1 != 0)) {
      FUN_005f85d0();
      uVar3 = 0;
      uVar2 = (**(code **)(*DAT_0162ee84 + 0x154))(0);
      FUN_005f83d0(uVar2,uVar3);
      FUN_00613f80();
    }
    if (param_2 == 0x3eb) {
      uVar2 = FUN_006375b0();
      iVar1 = FUN_0063aac0(param_1,uVar2);
      *(undefined1 *)(iVar1 + 0x25d) = 0;
    }
    DAT_0162ee80 = (int *)(**(code **)(*DAT_0162ee84 + 0xf8))(param_2);
    if (DAT_0162ee80 == (int *)0x0) {
      FUN_005e9f20(&DAT_006da5e4,"..\\casinoShell\\shell.cpp",0x725);
    }
    else {
      (**(code **)(*DAT_0162ee80 + 4))();
    }
  }
  return;
}

