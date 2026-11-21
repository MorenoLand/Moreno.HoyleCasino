// FUN_004fa290  004fa290

undefined4 __fastcall FUN_004fa290(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xa4) == 0) || (*(int *)(*(int *)(param_1 + 0xa4) + 0x28) == 0)) {
    uVar1 = 1;
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_005f8910();
  }
  return uVar1;
}

