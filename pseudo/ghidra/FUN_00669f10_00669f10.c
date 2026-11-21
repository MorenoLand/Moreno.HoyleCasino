// FUN_00669f10  00669f10

void __fastcall FUN_00669f10(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_13c;
  char local_114 [256];
  uint local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00628ba0();
  iVar2 = FUN_00615260();
  if (iVar2 != -1) {
    iVar2 = FUN_00606570();
    if (iVar2 == 6) {
      iVar2 = FUN_005e4390();
      if (iVar2 == 0) {
        local_13c = 0;
      }
      else {
        FUN_005e4390();
        local_13c = what();
      }
      local_c = (undefined4 *)FUN_00666e40(local_13c);
      if (local_c != (undefined4 *)0x0) {
        local_8 = 0;
        while (iVar2 = FUN_00666c70(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),*local_c),
              local_8 < iVar2) {
          sprintf(local_114,"%d",local_8);
          uVar3 = FUN_00666740(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),*local_c,local_8);
          cVar1 = FUN_00666840(uVar3);
          if (cVar1 == '\0') {
            strcat(local_114," [missing line]");
          }
          FUN_00628980(0,local_114,0xffffffff,0);
          local_8 = local_8 + 1;
        }
      }
    }
    else if (iVar2 == 7) {
      local_10 = FUN_00639520(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
      local_8 = 0;
      while (iVar4 = local_10 * 0x380, iVar2 = FUN_00615260(),
            local_8 < *(int *)(&DAT_00763584 + iVar2 * 0x2c + iVar4)) {
        sprintf(local_114,"%d",local_8);
        FUN_00628980(0,local_114,0xffffffff,0);
        local_8 = local_8 + 1;
      }
    }
    else if (iVar2 == 8) {
      local_10 = FUN_00639520(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
      for (local_8 = 0; local_8 < *(int *)(&DAT_0076357c + local_10 * 0x380); local_8 = local_8 + 1)
      {
        sprintf(local_114,"%d",local_8);
        FUN_00628980(0,local_114,0xffffffff,0);
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

