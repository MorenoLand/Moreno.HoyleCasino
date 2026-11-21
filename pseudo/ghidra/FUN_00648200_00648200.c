// FUN_00648200  00648200

undefined1 __fastcall FUN_00648200(int param_1)

{
  int iVar1;
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + 0x17c) == 0)) {
LAB_00648256:
    local_c = 0;
  }
  else {
    iVar1 = FUN_005fc380();
    if (iVar1 != 4) {
      iVar1 = FUN_005fc380();
      if (iVar1 != 5) goto LAB_00648256;
    }
    local_c = 1;
  }
  return local_c;
}

