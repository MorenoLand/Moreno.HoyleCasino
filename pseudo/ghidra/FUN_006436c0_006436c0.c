// FUN_006436c0  006436c0

undefined2 __fastcall FUN_006436c0(int param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x808) < 0) {
    FUN_005e9f20("FALSE","..\\casinoShell\\card.cpp",0x3a7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 4 + *(int *)(param_1 + 0x808) * 2);
    *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + -1;
  }
  return uVar1;
}

