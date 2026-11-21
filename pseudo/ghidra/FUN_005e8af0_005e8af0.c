// FUN_005e8af0  005e8af0

void __fastcall FUN_005e8af0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    FUN_005e9bc0();
  }
  else if (iVar1 == 1) {
    FUN_005e8d00();
  }
  else if (iVar1 == 2) {
    FUN_005e94b0();
  }
  return;
}

