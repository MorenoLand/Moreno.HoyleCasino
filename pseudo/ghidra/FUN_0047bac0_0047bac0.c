// FUN_0047bac0  0047bac0

void __fastcall FUN_0047bac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
  FUN_004c70b0(uVar2);
  iVar1 = FUN_0047f950();
  if (*(int *)(param_1 + 0x488) < iVar1 + -1) {
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x488);
  }
  else {
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  while( true ) {
    FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
    iVar1 = FUN_004c6cb0();
    if (iVar1 != 0) break;
    iVar1 = FUN_0047f950();
    if (*(int *)(param_1 + 0x488) < iVar1 + -1) {
      *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
      *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x488);
    }
    else {
      *(undefined4 *)(param_1 + 0x488) = 0;
    }
  }
  uVar2 = 1;
  FUN_0047e390(*(undefined4 *)(param_1 + 0x488));
  FUN_004c70b0(uVar2);
  return;
}

