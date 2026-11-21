// FUN_004fbca0  004fbca0

void FUN_004fbca0(void)

{
  undefined4 uVar1;
  char cVar2;
  char *_Source;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_3c [8];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = *(undefined4 *)(DAT_00791364 + 0xf4);
  local_c = FUN_00520540(local_10);
  FUN_004fb840();
  FUN_0047e540(1);
  *(undefined4 *)(DAT_00791364 + 0xec) = *(undefined4 *)(local_c + 0x14);
  *(undefined4 *)(DAT_00791364 + 0xf0) = *(undefined4 *)(local_c + 0x18);
  *(int *)(DAT_00791364 + 0x488) = (int)*(short *)(local_c + 0x3c);
  FUN_0047cb10((int)*(short *)(local_c + 0x3e));
  FUN_0047ce80(*(undefined4 *)(local_c + 8));
  *(undefined4 *)(DAT_00791364 + 0x100) = *(undefined4 *)(local_c + 0x38);
  *(undefined1 *)(DAT_00791364 + 0x104) = *(undefined1 *)(local_c + 0x28);
  *(undefined4 *)(DAT_00791364 + 0xf8) = *(undefined4 *)(local_c + 4);
  *(undefined4 *)(DAT_00791364 + 0xfc) = *(undefined4 *)(local_c + 0x24);
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(uint *)(DAT_00791364 + 0x114 + local_8 * 4) = (uint)*(byte *)(local_c + local_8 + 0x29);
  }
  FUN_0047a440(*(undefined4 *)(local_c + 0x20));
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_00791364 + 0x108 + local_8 * 4) =
         *(undefined4 *)(local_c + 0x2c + local_8 * 4);
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_00791364 + 0x3b4 + local_8 * 4) =
         *(undefined4 *)(local_c + 0x40 + local_8 * 4);
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    local_34 = FUN_0047e390(local_8);
    local_30 = *(undefined4 *)(local_c + 0xe8 + local_8 * 0x7c);
    local_24 = FUN_005dcb00(local_30);
    FUN_004c6d90(*(undefined4 *)(local_c + 0xe4 + local_8 * 0x7c));
    if (*(int *)(local_c + 0xe0 + local_8 * 0x7c) != -1) {
      FUN_004c6aa0(*(undefined4 *)(local_c + 0xe0 + local_8 * 0x7c));
      local_18 = *(undefined4 *)(local_c + 0xe0 + local_8 * 0x7c);
      local_14 = 0;
      FUN_005d5af0(local_18,0);
    }
    cVar2 = FUN_004c61b0();
    if (cVar2 == '\0') {
      local_1c = *(int *)(local_c + 0xec + local_8 * 0x7c);
      local_2c = *(undefined4 *)(&DAT_00720648 + local_1c * 0xc);
      *(int *)(local_34 + 0x74) = local_1c;
      if ((local_1c < 0x21) && (0x16 < local_1c)) {
        FUN_0063b490(local_2c);
        *(undefined4 *)(local_24 + 0xc) = 0xffffffff;
      }
      else {
        *(undefined4 *)(local_24 + 0xc) = local_2c;
      }
      FUN_004c67d0(*(undefined4 *)(local_c + 0xf0 + local_8 * 0x7c));
      FUN_004c68c0(*(undefined4 *)(local_c + 0xf4 + local_8 * 0x7c));
      _Source = (char *)FUN_00630f40((&PTR_s_SID_PTC_PIZZA_GUY_00720650)[local_1c * 3]);
      iVar3 = FUN_0063aac0();
      strcpy((char *)(iVar3 + 4),_Source);
    }
  }
  local_20 = FUN_006375d0(0xb);
  iVar3 = FUN_005dcb00(0);
  puVar4 = (undefined4 *)
           FUN_0064c630(local_3c,*(undefined4 *)(iVar3 + 0x4d4),*(undefined4 *)(iVar3 + 0x4d8));
  uVar1 = puVar4[1];
  *(undefined4 *)(local_20 + 0x10) = *puVar4;
  *(undefined4 *)(local_20 + 0x14) = uVar1;
  FUN_005dcb00(0);
  FUN_0063b0a0();
  for (local_8 = 0; local_8 < 0x21; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_00791364 + 0x120 + local_8 * 0x14) =
         *(undefined4 *)(local_c + 0x3f4 + local_8 * 0x14);
    *(undefined4 *)(DAT_00791364 + 300 + local_8 * 0x14) =
         *(undefined4 *)(local_c + 0x400 + local_8 * 0x14);
    *(undefined4 *)(DAT_00791364 + 0x124 + local_8 * 0x14) =
         *(undefined4 *)(local_c + 0x3f8 + local_8 * 0x14);
    *(undefined4 *)(DAT_00791364 + 0x130 + local_8 * 0x14) =
         *(undefined4 *)(local_c + 0x404 + local_8 * 0x14);
    *(undefined1 *)(DAT_00791364 + 0x128 + local_8 * 0x14) =
         *(undefined1 *)(local_c + 0x3fc + local_8 * 0x14);
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_00791364 + 0x3e4 + local_8 * 4) =
         *(undefined4 *)(local_c + 0x5c + local_8 * 4);
  }
  *(undefined4 *)(DAT_00791364 + 0x400) = *(undefined4 *)(local_c + 0x78);
  local_28 = FUN_00480d20();
  FUN_0047bc40(local_28 / 2);
  FUN_0047bc80(local_28 / 2);
  FUN_0047bcc0(local_28);
  FUN_0047bd00(local_28 << 1);
  (**(code **)(**(int **)(DAT_00791eb8 + 4) + 4))(2);
  FUN_0047e860();
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    FUN_005d9180(local_8,1);
  }
  return;
}

