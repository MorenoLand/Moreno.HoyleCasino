// FUN_0047b9c0  0047b9c0

void __fastcall FUN_0047b9c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  uVar2 = 0;
  FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
  FUN_004c70b0(uVar2);
  do {
    FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
    iVar1 = FUN_004c6cb0();
    if (iVar1 != 0) goto LAB_0047ba77;
    iVar1 = FUN_0047f950();
    if (*(int *)(param_1 + 0x488) < iVar1 + -1) {
      *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
      *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x488);
    }
    else {
      *(undefined4 *)(param_1 + 0x488) = 0;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0xb);
  *(undefined4 *)(param_1 + 0x488) = 0;
LAB_0047ba77:
  uVar2 = 1;
  FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
  FUN_004c70b0(uVar2);
  if (local_8 < 0xb) {
    FUN_00466e90();
  }
  else {
    FUN_005f87d0();
  }
  return;
}

