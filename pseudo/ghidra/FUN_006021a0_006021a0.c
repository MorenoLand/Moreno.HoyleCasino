// FUN_006021a0  006021a0

undefined4 __thiscall FUN_006021a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 4) == '\0') {
    iVar1 = tolower((int)*(char *)(param_2 + 0x14));
    if (iVar1 != *(char *)(param_1 + 0x1a9)) {
      iVar1 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar1 != *(char *)(param_1 + 0x1aa)) {
        iVar1 = tolower((int)*(char *)(param_2 + 0x14));
        if (iVar1 != *(char *)(param_1 + 0x1ab)) goto LAB_00602213;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00602213:
    uVar2 = 0;
  }
  return uVar2;
}

