// FUN_00663650  00663650

void FUN_00663650(char *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  FILE *_File;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *local_440;
  int local_428;
  int local_41c;
  char local_418;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acb5a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  pvVar3 = operator_new(0x6c);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_440 = (undefined4 *)0x0;
  }
  else {
    local_440 = (undefined4 *)FUN_006634a0(uVar2);
  }
  local_8 = 0xffffffff;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  sprintf(&local_418,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_1);
  _File = (FILE *)FUN_005ea9c0(&local_418,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    fread(local_440 + 8,0x4c,1,_File);
    fclose(_File);
    for (local_428 = 0; local_428 < 0xc; local_428 = local_428 + 1) {
    }
  }
  cVar1 = FUN_00665200(local_440 + 8);
  if (cVar1 != '\0') {
    strcpy((char *)(local_440 + 1),param_1);
    for (local_41c = 0; iVar4 = FUN_0060c9a0(), local_41c < iVar4; local_41c = local_41c + 1) {
      pcVar10 = param_1;
      pcVar5 = (char *)FUN_006639a0(local_41c);
      iVar4 = strcmp(pcVar5,pcVar10);
      if (iVar4 == 0) {
        iVar4 = FUN_0060ca40(local_41c);
        puVar8 = local_440 + 8;
        puVar9 = (undefined4 *)(iVar4 + 0x20);
        for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        if (local_440 != (undefined4 *)0x0) {
          (**(code **)*local_440)(1);
        }
        goto LAB_00663978;
      }
    }
    for (local_41c = 0; iVar4 = FUN_0060c9a0(), local_41c < iVar4; local_41c = local_41c + 1) {
      pcVar10 = param_1;
      pcVar5 = (char *)FUN_006639a0(local_41c);
      iVar4 = _stricmp(pcVar5,pcVar10);
      if (0 < iVar4) {
        if (local_41c == 0) {
          FUN_0060c7d0(local_440);
        }
        else {
          puVar8 = local_440;
          uVar6 = FUN_0060ca40(local_41c + -1);
          FUN_0060cb20(uVar6,puVar8);
        }
        break;
      }
    }
    iVar4 = FUN_0060c9a0();
    if (local_41c == iVar4) {
      FUN_0060c840(local_440);
    }
  }
LAB_00663978:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

