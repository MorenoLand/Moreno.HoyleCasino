// FUN_004708e0  004708e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004708e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_c;
  
  iVar1 = FUN_0047e420();
  iVar2 = FUN_0062fbf0(0xb);
  iVar3 = FUN_0062fbf0(0xb);
  iVar4 = FUN_0062fbf0(0xb);
  iVar5 = FUN_0062fbf0(0xb);
  *(double *)(&DAT_007912a0 + iVar1 * 8) =
       (double)(iVar2 + 0x50 + iVar3 + iVar4 + iVar5) * _DAT_006bc270;
  iVar2 = FUN_0062fbf0(0x15);
  iVar3 = FUN_0062fbf0(0x15);
  iVar4 = FUN_0062fbf0(0x15);
  iVar5 = FUN_0062fbf0(0x15);
  *(double *)(&DAT_00790fc8 + iVar1 * 8) =
       (double)(iVar2 + 0x3c + iVar3 + iVar4 + iVar5) * _DAT_006bc270;
  local_c = 0;
  while( true ) {
    iVar2 = FUN_0047f950();
    if (iVar2 <= local_c) break;
    iVar2 = FUN_0062fbf0(0x33);
    iVar3 = FUN_0062fbf0(0x33);
    iVar4 = FUN_0062fbf0(0x33);
    *(double *)(&DAT_00791060 + local_c * 8 + iVar1 * 0x40) =
         (double)(iVar2 + 0x19 + iVar3 + iVar4) * _DAT_006bc270;
    local_c = local_c + 1;
  }
  return;
}

