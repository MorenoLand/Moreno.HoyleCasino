// FUN_00667ec0  00667ec0

void FUN_00667ec0(char *param_1,char *param_2)

{
  char cVar1;
  FILE *_File;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  void *local_444;
  int local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  FUN_00667c70(param_1);
  strcpy(&local_40c,param_1);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    local_444 = operator_new(0x21496);
    if (local_444 == (void *)0x0) {
      local_444 = (void *)0x0;
    }
    else {
      memset(local_444,0,0x21496);
    }
    fread(local_444,0x21496,1,_File);
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    pcVar3 = operator_new(-(uint)((int)((ulonglong)uVar2 * 0x4c >> 0x20) != 0) |
                          (uint)((ulonglong)uVar2 * 0x4c));
    local_410 = 0;
    while( true ) {
      iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (iVar4 <= local_410) break;
      fread(pcVar3 + local_410 * 0x4c,0x4c,1,_File);
      local_410 = local_410 + 1;
    }
    fclose(_File);
    if ((*pcVar3 == '\x02') || (*pcVar3 == '\x03')) {
      FUN_006375b0();
      iVar4 = FUN_0063aac0();
      iVar4 = strcmp(pcVar3 + 8,(char *)(iVar4 + 4));
      if (iVar4 == 0) {
        cVar1 = (**(code **)(*DAT_0162ee80 + 0x98))(param_1);
        if (cVar1 != '\0') {
          strcpy(param_2,(char *)((int)local_444 + 1));
        }
      }
    }
    operator_delete(local_444);
    operator_delete(pcVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

