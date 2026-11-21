// FUN_00579260  00579260

void __fastcall FUN_00579260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005f3e50();
  if (*(int *)(param_1 + 0x80) < iVar1) {
    iVar1 = FUN_005f3e50();
    *(int *)(param_1 + 0x80) = iVar1 + 0xe10;
    FUN_005f4620(0x1925a,0x3f800000);
  }
  return;
}

