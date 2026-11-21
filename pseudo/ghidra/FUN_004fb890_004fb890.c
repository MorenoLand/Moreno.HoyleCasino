// FUN_004fb890  004fb890

void FUN_004fb890(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *_Source;
  undefined4 local_48;
  int local_c;
  
  iVar3 = FUN_00520540(*(undefined4 *)(DAT_00791364 + 0xf4));
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(DAT_00791364 + 0xec);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(DAT_00791364 + 0xf0);
  uVar2 = FUN_0047bbc0();
  *(undefined2 *)(iVar3 + 0x3c) = uVar2;
  uVar2 = FUN_0047cb80();
  *(undefined2 *)(iVar3 + 0x3e) = uVar2;
  uVar4 = FUN_0047ce60();
  *(undefined4 *)(iVar3 + 8) = uVar4;
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(DAT_00791364 + 0x100);
  *(undefined1 *)(iVar3 + 0x28) = *(undefined1 *)(DAT_00791364 + 0x104);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(DAT_00791364 + 0xf8);
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(DAT_00791364 + 0xfc);
  uVar4 = FUN_0047a510();
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(bool *)(iVar3 + local_c + 0x29) = *(int *)(DAT_00791364 + 0x114 + local_c * 4) != 0;
  }
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(undefined4 *)(iVar3 + 0x2c + local_c * 4) =
         *(undefined4 *)(DAT_00791364 + 0x108 + local_c * 4);
  }
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    *(undefined4 *)(iVar3 + 0x40 + local_c * 4) =
         *(undefined4 *)(DAT_00791364 + 0x3b4 + local_c * 4);
  }
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    iVar5 = FUN_0047e390(local_c);
    uVar4 = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar3 + 0xe8 + local_c * 0x7c) = uVar4;
    iVar6 = FUN_004c6cb0();
    *(int *)(iVar3 + 0xe4 + local_c * 0x7c) = iVar6;
    if (iVar6 == 0) {
      local_48 = 0xffffffff;
    }
    else {
      local_48 = FUN_004c6a70();
    }
    *(undefined4 *)(iVar3 + 0xe0 + local_c * 0x7c) = local_48;
    FUN_005dcb00(uVar4);
    _Source = (char *)FUN_004c6150();
    strcpy((char *)(iVar3 + 0x7c + local_c * 0x7c),_Source);
    cVar1 = FUN_004c61b0();
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar3 + 0xec + local_c * 0x7c) = *(undefined4 *)(iVar5 + 0x74);
      *(undefined4 *)(iVar3 + 0xf0 + local_c * 0x7c) = *(undefined4 *)(iVar5 + 0x3fc);
      *(undefined4 *)(iVar3 + 0xf4 + local_c * 0x7c) = *(undefined4 *)(iVar5 + 0x400);
    }
  }
  for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
    *(undefined4 *)(iVar3 + 0x3f4 + local_c * 0x14) =
         *(undefined4 *)(DAT_00791364 + 0x120 + local_c * 0x14);
    *(undefined4 *)(iVar3 + 0x400 + local_c * 0x14) =
         *(undefined4 *)(DAT_00791364 + 300 + local_c * 0x14);
    *(undefined4 *)(iVar3 + 0x3f8 + local_c * 0x14) =
         *(undefined4 *)(DAT_00791364 + 0x124 + local_c * 0x14);
    *(undefined4 *)(iVar3 + 0x404 + local_c * 0x14) =
         *(undefined4 *)(DAT_00791364 + 0x130 + local_c * 0x14);
    *(undefined1 *)(iVar3 + 0x3fc + local_c * 0x14) =
         *(undefined1 *)(DAT_00791364 + 0x128 + local_c * 0x14);
  }
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    *(undefined4 *)(iVar3 + 0x5c + local_c * 4) =
         *(undefined4 *)(DAT_00791364 + 0x3e4 + local_c * 4);
  }
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(DAT_00791364 + 0x400);
  FUN_006375b0();
  FUN_0063b0a0();
  uVar4 = FUN_00520d60();
  FUN_005209d0(uVar4);
  return;
}

