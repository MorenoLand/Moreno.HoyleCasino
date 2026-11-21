// FUN_005ef8e0  005ef8e0

bool __fastcall FUN_005ef8e0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int local_10;
  int local_8;
  
  local_10 = *(int *)(param_1 + 4);
  cVar1 = FUN_005f54c0();
  if ((cVar1 == '\0') && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) {
    for (; *(int *)(local_10 + 0x1a4) != 0; local_10 = *(int *)(local_10 + 0x1a4)) {
    }
    if ((*(char *)(local_10 + 0x1b0) == '\0') || (local_10 == *(int *)(param_1 + 4))) {
      if (*(char *)(local_10 + 0x1b0) == '\0') {
        if (local_10 == *(int *)(param_1 + 4)) {
          return false;
        }
        local_8 = FUN_0060c9a0();
        do {
          local_8 = local_8 + -1;
          if (local_8 < 0) goto LAB_005ef9f9;
          iVar2 = FUN_0060ca40(local_8);
        } while (*(int *)(iVar2 + 0x1a8) != *(int *)(local_10 + 0x1a8));
        if (*(int *)(param_1 + 4) != iVar2) {
          return false;
        }
      }
LAB_005ef9f9:
      iVar2 = FUN_005f95c0();
      bVar3 = iVar2 == param_1;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

