// FUN_00571a50  00571a50

void __fastcall FUN_00571a50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0062fbf0(10);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_0062fbf0(10);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  cVar1 = FUN_00571c80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (cVar1 == '\0') {
    uVar2 = FUN_0062fbf0(10);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  else {
    uVar2 = FUN_0062fbf0(9);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    if (0 < *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  cVar1 = FUN_00571c80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_00571c80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10)),
     cVar1 == '\0')) {
    uVar2 = FUN_0062fbf0(10);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  else {
    uVar2 = FUN_0062fbf0(8);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      if ((0 < *(int *)(param_1 + 0x14)) &&
         (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1,
         *(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14))) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if (0 < *(int *)(param_1 + 0x14)) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
  }
  return;
}

