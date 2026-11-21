// FUN_00681240  00681240

undefined4 * FUN_00681240(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_38;
  int *local_34;
  int local_2c;
  int local_24;
  int local_10;
  undefined4 *local_8;
  
  if (((DAT_01631852 == '\0') && (DAT_0162ee84 != (int *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_0162ee84 + 0x98))(), cVar1 != '\0')) {
    DAT_01631852 = '\x01';
  }
  iVar2 = param_1 + 0x20;
  local_10 = iVar2 / 10;
  if (DAT_0078142c <= local_10) {
    local_10 = DAT_0078142c + -1;
  }
  *(int *)(&DAT_01631078 + local_10 * 4) = *(int *)(&DAT_01631078 + local_10 * 4) + 1;
  if (iVar2 < 0x101) {
    DAT_01630704 = DAT_01630704 + 1;
    if (DAT_01630bc0 < DAT_01630704) {
      DAT_01630bc0 = DAT_01630704;
    }
    *(int *)(&DAT_01630708 + local_10 * 4) = *(int *)(&DAT_01630708 + local_10 * 4) + 1;
    if (*(int *)(&DAT_01630bc8 + local_10 * 4) < *(int *)(&DAT_01630708 + local_10 * 4)) {
      *(undefined4 *)(&DAT_01630bc8 + local_10 * 4) = *(undefined4 *)(&DAT_01630708 + local_10 * 4);
    }
    local_34 = (int *)0x0;
    local_2c = 0xfc00;
    if (iVar2 < 0x41) {
      local_34 = &DAT_01630bbc;
      local_2c = 0x40;
    }
    else if (iVar2 < 0x81) {
      local_34 = &DAT_01630bb8;
      local_2c = 0x80;
    }
    else if (iVar2 < 0x101) {
      local_34 = &DAT_01630700;
      local_2c = 0x100;
    }
    local_8 = (undefined4 *)*local_34;
    if (local_8 == (undefined4 *)0x0) {
      iVar2 = (int)(0x10000 / (ulonglong)(longlong)local_2c);
      for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
        FUN_0062fde0("Allocating new Block of %i Objects of size %i (%i). Total Objects = %i\r\n",
                     iVar2,local_2c,0x10000,DAT_01630704);
        puVar3 = (undefined4 *)FUN_00666500(0x10000);
        if (DAT_01631848 < 100) {
          *(int *)(&DAT_01631528 + DAT_01631848 * 8) = local_2c;
          *(undefined4 **)(&DAT_0163152c + DAT_01631848 * 8) = puVar3;
          DAT_01631848 = DAT_01631848 + 1;
        }
        else {
          FUN_0062fde0("*****Out of Room in the Block Entries Array!!!\r\n");
        }
        local_40 = puVar3;
        for (local_38 = 0; local_44 = (undefined4 *)((int)local_40 + local_2c),
            local_38 < iVar2 + -1; local_38 = local_38 + 1) {
          *local_40 = 0xdddddddd;
          local_40[1] = 0xabcdabcd;
          local_40[2] = local_44;
          local_40 = local_44;
        }
        *local_40 = 0xdddddddd;
        local_40[2] = *local_34;
        *local_34 = (int)puVar3;
      }
      local_8 = (undefined4 *)*local_34;
      *local_34 = *(int *)(*local_34 + 8);
    }
    else {
      *local_34 = local_8[2];
    }
  }
  else {
    local_8 = (undefined4 *)FUN_00666500(iVar2);
    if (local_8 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  puVar3 = local_8;
  if (((uint)local_8 & 0xf) != 0) {
    puVar3 = (undefined4 *)(((uint)local_8 & 0xfffffff0) + 0x10);
  }
  if ((uint)((int)puVar3 - (int)local_8) < 0x10) {
    puVar3 = puVar3 + 4;
  }
  *local_8 = 0xaaaaaaaa;
  puVar3[-4] = 0xaaaaaaaa;
  *(short *)(puVar3 + -3) = DAT_01631850;
  DAT_01631850 = DAT_01631850 + 1;
  puVar3[-1] = local_8;
  puVar3[-2] = param_1;
  DAT_007950a8 = DAT_007950a8 + param_1;
  if (DAT_007950ac < DAT_007950a8) {
    DAT_007950ac = DAT_007950a8;
  }
  DAT_007950b0 = DAT_007950b0 + 1;
  if (DAT_01631852 != '\0') {
    FUN_0062fde0("Block   Allocated:\tAllocNumber %5i\tSize %5i\tPtr 0x%lx\tBase 0x%lx\r\n",
                 *(undefined2 *)(puVar3 + -3),puVar3[-2],puVar3,puVar3[-1]);
  }
  return puVar3;
}

