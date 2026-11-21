// FUN_00643730  00643730

void __thiscall FUN_00643730(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x808) < *(int *)(param_1 + 0x80c)) {
    uVar1 = FUN_00641230(param_2,param_3);
    *(undefined2 *)(param_1 + 4 + *(int *)(param_1 + 0x808) * 2) = uVar1;
    *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + 1;
  }
  else {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x3af);
  }
  return;
}

