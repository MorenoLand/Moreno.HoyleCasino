// FUN_00585850  00585850

void __thiscall FUN_00585850(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  cVar1 = FUN_00585eb0();
  if (cVar1 != '\0') {
    local_8 = FUN_00585e60(param_2);
    if (local_8 == -1) {
      iVar2 = FUN_00585ed0();
      if (iVar2 == 0x14) {
        return;
      }
      if ('\x03' < **(char **)(param_1 + 4)) {
        return;
      }
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = FUN_00585ed0();
      *(undefined1 *)(iVar2 + 5 + iVar3) = (undefined1)param_2;
      iVar2 = FUN_00585ed0();
      if (iVar2 == 0x14) {
        if (*(char *)(*(int *)(param_1 + 4) + 1) < '\x06') {
          *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 5;
        }
        else {
          *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 10;
        }
      }
      else {
        iVar2 = FUN_00585ed0();
        if ((9 < iVar2) && (*(char *)(*(int *)(param_1 + 4) + 1) == '\x01')) {
          *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 2;
        }
        iVar2 = FUN_00585ed0();
        if ((iVar2 < 10) && (*(char *)(*(int *)(param_1 + 4) + 1) == '\x02')) {
          *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 1;
        }
      }
    }
    else {
      for (; local_8 < 0x13; local_8 = local_8 + 1) {
        *(undefined1 *)(*(int *)(param_1 + 4) + 5 + local_8) =
             *(undefined1 *)(*(int *)(param_1 + 4) + 6 + local_8);
      }
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x18) = 0;
      iVar2 = FUN_00585ed0();
      if ((iVar2 < 10) && (*(char *)(*(int *)(param_1 + 4) + 1) == '\x02')) {
        *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 1;
      }
    }
    iVar2 = FUN_00585ed0();
    if (((iVar2 < 4) || (iVar2 = FUN_00585ed0(), 6 < iVar2)) &&
       (*(char *)(*(int *)(param_1 + 4) + 3) != '\0')) {
      *(undefined1 *)(*(int *)(param_1 + 4) + 3) = 0;
      switch(*(undefined1 *)(*(int *)(param_1 + 4) + 1)) {
      case 7:
        *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 1;
        break;
      case 0xe:
        *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 5;
        break;
      case 0x1c:
        *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 10;
        break;
      case 0x46:
        *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0x14;
      }
    }
    FUN_00585830();
  }
  return;
}

