// FUN_00659d30  00659d30

void __thiscall FUN_00659d30(int param_1,char *param_2)

{
  FILE *_File;
  int iVar1;
  char *_Source;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_420;
  int local_41c;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_2);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (_File != (FILE *)0x0) {
    for (local_41c = 0; local_41c < 0xc; local_41c = local_41c + 1) {
    }
    fwrite((void *)(*(int *)(param_1 + 0x1dc) + 0x10),0x4c,1,_File);
    fclose(_File);
    for (local_420 = 0; local_420 < 0xc; local_420 = local_420 + 1) {
    }
    iVar1 = FUN_005fb5e0(0x400);
    if (iVar1 != 0) {
      iVar1 = FUN_005fb5e0(0x400);
      FUN_006659e0(param_2,*(int *)(iVar1 + 0x1f0) + -0x186bf);
    }
    strcpy((char *)(param_1 + 0x1bc),param_2);
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
    puVar3 = (undefined4 *)(param_1 + 0x1e0);
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if ((DAT_016306b0 == 0) && (DAT_01630690 == 0)) {
      FUN_006375b0();
      _Source = (char *)(param_1 + 0x1bc);
      iVar1 = FUN_0063aac0();
      strcpy((char *)(iVar1 + 0x38),_Source);
      FUN_006375b0();
      puVar2 = (undefined4 *)FUN_0063aac0();
      *puVar2 = 3;
      FUN_00637610();
    }
    else {
      if (DAT_016306b0 != 0) {
        FUN_0065c1f0(param_1 + 0x1bc);
      }
      if (DAT_01630690 != 0) {
        FUN_0065c1f0(param_1 + 0x1bc);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

