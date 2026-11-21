// FUN_0063b3c0  0063b3c0

void __thiscall FUN_0063b3c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = FUN_00646f80();
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      iVar1 = FUN_00646f80();
      (**(code **)(**(int **)(iVar1 + 400) + 0xb4))
                (param_2,*(int **)(iVar1 + 400),param_1,uVar2,uVar3);
      return;
    }
  }
  FUN_005e9f20("false","..\\casinoShell\\player.cpp",0x15c);
  return;
}

