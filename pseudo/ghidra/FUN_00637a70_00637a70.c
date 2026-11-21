// FUN_00637a70  00637a70

int __fastcall FUN_00637a70(int *param_1)

{
  int iVar1;
  
  if (DAT_00795f94 == '\0') {
    FUN_006375b0();
    iVar1 = FUN_0063a040();
    if (iVar1 == -1) {
      iVar1 = (**(code **)(*param_1 + 0x1e0))();
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x1dc))();
  }
  return iVar1;
}

