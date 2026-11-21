// FUN_00614760  00614760

undefined4 __fastcall FUN_00614760(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + 0x3f8) % 0x1f31d) * 0x41a7 +
          (*(uint *)(param_1 + 0x3f8) / 0x1f31d) * -0xb14;
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x3f8) = iVar1 + 0x7fffffff;
  }
  else {
    *(int *)(param_1 + 0x3f8) = iVar1;
  }
  return *(undefined4 *)(param_1 + 0x3f8);
}

