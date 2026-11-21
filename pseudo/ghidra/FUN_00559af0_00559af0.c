// FUN_00559af0  00559af0

undefined4 FUN_00559af0(void)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_28 [7];
  int local_c;
  int local_8;
  
  aiStack_28[2] = 0;
  aiStack_28[3] = 0;
  aiStack_28[4] = 0;
  aiStack_28[5] = 0;
  aiStack_28[0] = 0x559b1d;
  aiStack_28[6] = FUN_00559d00();
  local_8 = 0;
  if (aiStack_28[6] == 0) {
    uVar1 = 0;
  }
  else if (aiStack_28[6] < 4) {
    local_c = 0;
    while( true ) {
      aiStack_28[0] = 0x559b5b;
      iVar2 = FUN_00559380();
      if (iVar2 <= local_c) break;
      aiStack_28[0] =
           CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(aiStack_28[1] + 4 + local_c * 2));
      iVar2 = FUN_005593d0();
      if (iVar2 != 0x14) {
        aiStack_28[0] =
             CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(aiStack_28[1] + 4 + local_c * 2))
        ;
        aiStack_28[0] = FUN_00641280();
        iVar2 = FUN_00559d60();
        if (1 < iVar2) {
          return 0;
        }
        aiStack_28[0] =
             CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(aiStack_28[1] + 4 + local_c * 2))
        ;
        iVar2 = FUN_005593d0();
        aiStack_28[local_8 + 2] = iVar2;
        local_8 = local_8 + 1;
      }
      local_c = local_c + 1;
    }
    if ((aiStack_28[local_8 + 1] == 0xe) && (aiStack_28[local_8] < 6)) {
      uVar1 = 1;
    }
    else if (aiStack_28[2] + 4 < aiStack_28[local_8 + 1]) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

