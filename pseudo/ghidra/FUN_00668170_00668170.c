// FUN_00668170  00668170

void FUN_00668170(char param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Src;
  undefined1 *local_478;
  char local_44c [28];
  undefined1 *local_430;
  void *local_42c;
  void *local_428;
  uint local_424;
  undefined1 local_41d;
  FILE *local_41c;
  void *local_418;
  int local_414;
  uint local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1 == '\0') {
    FUN_00669310(local_44c);
  }
  else {
    pcVar2 = (char *)FUN_00673cb0();
    strcpy(local_44c,pcVar2);
  }
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcpy(&local_40c,local_44c);
  local_478 = operator_new(0x21496);
  if (local_478 == (undefined1 *)0x0) {
    local_478 = (undefined1 *)0x0;
  }
  else {
    memset(local_478,0,0x21496);
  }
  local_430 = local_478;
  memset(local_478,0,0x21496);
  uVar1 = FUN_005f3bf0();
  *local_430 = uVar1;
  piVar3 = (int *)FUN_005fb810(0);
  pcVar2 = (char *)(**(code **)(*piVar3 + 0xb8))();
  strcpy(local_430 + 1,pcVar2);
  memcpy(local_430 + 0x16,(void *)(*(int *)(DAT_016306d0 + 0x1bc) + 0x4c),0x21480);
  uVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))();
  local_42c = operator_new(-(uint)((int)((ulonglong)uVar4 * 0x4c >> 0x20) != 0) |
                           (uint)((ulonglong)uVar4 * 0x4c));
  local_414 = 0;
  while( true ) {
    iVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar5 <= local_414) break;
    memset((void *)(local_414 * 0x4c + (int)local_42c),0,0x4c);
    local_414 = local_414 + 1;
  }
  FUN_00668e10(local_42c);
  uVar6 = FUN_005f3bf0();
  local_410 = (**(code **)(*DAT_0162ee84 + 0x108))(uVar6);
  local_428 = operator_new(local_410);
  uVar6 = 0xffffffff;
  uVar4 = local_410;
  FUN_006375b0(0xffffffff);
  _Src = (void *)FUN_0063aae0(uVar6);
  memcpy(local_428,_Src,uVar4);
  local_424 = (**(code **)(*DAT_0162ee80 + 0x8c))();
  local_418 = operator_new(local_424);
  (**(code **)(*DAT_0162ee80 + 0x90))(local_418);
  local_41d = 0;
  local_41c = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (local_41c != (FILE *)0x0) {
    fwrite(local_430,0x21496,1,local_41c);
    local_414 = 0;
    while( true ) {
      iVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (iVar5 <= local_414) break;
      fwrite((void *)(local_414 * 0x4c + (int)local_42c),0x4c,1,local_41c);
      local_414 = local_414 + 1;
    }
    fwrite(&local_410,4,1,local_41c);
    fwrite(local_428,local_410,1,local_41c);
    fwrite(&local_424,4,1,local_41c);
    fwrite(local_418,local_424,1,local_41c);
    fclose(local_41c);
    local_41d = 1;
  }
  operator_delete(local_430);
  operator_delete(local_42c);
  operator_delete(local_428);
  operator_delete(local_418);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

