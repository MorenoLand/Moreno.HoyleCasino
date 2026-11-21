// FUN_00668620  00668620

void __fastcall FUN_00668620(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  void *pvVar6;
  void *_DstBuf;
  char *local_490;
  undefined1 local_488;
  uint local_428;
  uint local_424;
  FILE *local_420;
  void *local_41c;
  int local_418;
  uint local_414;
  uint local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*DAT_0162ee80 + 0x80))();
  if (cVar1 == '\0') {
    uVar2 = FUN_00630f40("SID_SHELL_RESTOREGAME",4);
    uVar2 = FUN_00630f40("SID_SHELL_CONFIRMRESTORE",uVar2);
    iVar3 = FUN_0062ff10(uVar2);
    if (iVar3 != 6) goto LAB_00668d1f;
  }
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  pcVar4 = (char *)FUN_00673cb0();
  strcpy(&local_40c,pcVar4);
  local_420 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (local_420 != (FILE *)0x0) {
    local_490 = operator_new(0x21496);
    if (local_490 == (char *)0x0) {
      local_490 = (char *)0x0;
    }
    else {
      memset(local_490,0,0x21496);
    }
    fread(local_490,0x21496,1,local_420);
    cVar1 = *local_490;
    iVar3 = FUN_005f3bf0();
    if (cVar1 == iVar3) {
      uVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      pvVar6 = operator_new(-(uint)((int)((ulonglong)uVar5 * 0x4c >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 0x4c));
      local_418 = 0;
      while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_418 < iVar3) {
        fread((void *)(local_418 * 0x4c + (int)pvVar6),0x4c,1,local_420);
        local_418 = local_418 + 1;
      }
      uVar2 = FUN_005f3bf0();
      local_410 = (**(code **)(*DAT_0162ee84 + 0x108))(uVar2);
      fread(&local_428,4,1,local_420);
      if (local_428 == local_410) {
        _DstBuf = operator_new(local_428);
        fread(_DstBuf,local_428,1,local_420);
        cVar1 = (**(code **)(*DAT_0162ee80 + 0x88))();
        if (cVar1 == '\0') {
          fread(&local_414,4,1,local_420);
        }
        else {
          local_424 = (**(code **)(*DAT_0162ee80 + 0x8c))();
          fread(&local_414,4,1,local_420);
          if (local_414 != local_424) {
            uVar2 = FUN_00630f40("SID_GENERIC_RESTORE",0);
            uVar2 = FUN_00630f40("SID_SHELL_RESTORECHANGESIZE",uVar2);
            FUN_0062ff10(uVar2);
            operator_delete(local_490);
            operator_delete(pvVar6);
            operator_delete(_DstBuf);
            fclose(local_420);
            goto LAB_00668d1f;
          }
        }
        local_41c = operator_new(local_414);
        fread(local_41c,local_414,1,local_420);
        fclose(local_420);
        cVar1 = FUN_006693f0(pvVar6);
        if (cVar1 != '\0') {
          cVar1 = FUN_00669580(local_41c);
          if (cVar1 != '\0') {
            uVar2 = FUN_00630f40("SID_SHELL_PLAYERDELETED",0);
            uVar2 = FUN_00630f40("SID_SHELL_RESTOREDELETEDPLAYER",uVar2);
            FUN_0062ff10(uVar2);
            pcVar4 = (char *)FUN_00673cb0();
            remove(pcVar4);
            operator_delete(local_490);
            operator_delete(pvVar6);
            operator_delete(_DstBuf);
            operator_delete(local_41c);
            goto LAB_00668d1f;
          }
          uVar2 = FUN_00630f40("SID_SHELL_PLAYERDELETED",0);
          uVar2 = FUN_00630f40("SID_SHELL_REPLACINGDELETEDPLAYER",uVar2);
          FUN_0062ff10(uVar2);
        }
        FUN_005f87d0();
        FUN_00668fa0(pvVar6);
        uVar2 = *(undefined4 *)(param_1 + 4);
        cVar1 = *local_490;
        FUN_006375b0();
        iVar3 = FUN_0063aac0();
        local_488 = (undefined1)uVar2;
        *(undefined1 *)(iVar3 + 0x5d + (int)cVar1) = local_488;
        FUN_00650550(0);
        FUN_00636ee0();
        FUN_005f45d0(0);
        uVar2 = FUN_005f3bf0(_DstBuf);
        (**(code **)(*DAT_0162ee84 + 0x330))(uVar2);
        (**(code **)(*DAT_0162ee80 + 0x94))(local_41c);
        (**(code **)(*DAT_0162ee80 + 0x1fc))(0);
        operator_delete(local_490);
        operator_delete(pvVar6);
        operator_delete(_DstBuf);
        operator_delete(local_41c);
        *(undefined1 *)(DAT_0162ee80 + 0x10) = 1;
      }
      else {
        uVar2 = FUN_00630f40("SID_GENERIC_RESTORE",0);
        uVar2 = FUN_00630f40("SID_SHELL_RESTORECHANGESIZE",uVar2);
        FUN_0062ff10(uVar2);
        operator_delete(local_490);
        operator_delete(pvVar6);
        fclose(local_420);
      }
    }
    else {
      FUN_005e9f20("false","..\\casinoShell\\savegame.cpp",0xd7);
    }
  }
LAB_00668d1f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

