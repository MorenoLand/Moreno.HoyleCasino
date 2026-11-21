// FUN_00660030  00660030

void __thiscall FUN_00660030(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_86c [16];
  char local_85c [52];
  char local_828 [16];
  int local_818;
  FILE *local_814;
  int local_810;
  undefined1 local_80c;
  undefined1 local_80b [1023];
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_80c = 0;
  memset(local_80b,0,0x3ff);
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  FUN_00635f30(param_2,local_86c);
  strcat(&local_40c,local_86c);
  local_814 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (local_814 != (FILE *)0x0) {
    local_818 = FUN_00636090(param_2);
    fclose(local_814);
    (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))("LastLogin",&PTR_006b27f8,local_85c,0x33);
    iVar2 = strcmp(local_85c,param_2);
    if (iVar2 == 0) {
      (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x14))("LastLogin",&PTR_006b27f8);
    }
    uVar4 = 0;
    FUN_005fb720(0);
    uVar3 = FUN_00615260(uVar4);
    FUN_005fb720(0);
    FUN_00628ab0(uVar3,uVar4);
    remove(&local_40c);
    strcpy(local_828,local_86c);
    for (local_810 = 0; local_810 < 0xd; local_810 = local_810 + 1) {
      if (local_828[local_810] == '.') {
        local_828[local_810] = '\0';
        break;
      }
    }
    FUN_00660310(local_828,&DAT_006dedb8,&DAT_006dedbc);
    _rmdir(local_828);
    (**(code **)(*param_1 + 0xa4))(param_2,local_828);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))();
    if ((cVar1 != '\0') && (-1 < local_818)) {
      sprintf(local_86c,"rchk%d.log",local_818);
      strcpy(&local_40c,local_86c);
      remove(local_86c);
      sprintf(local_86c,"rled%d.log",local_818);
      strcpy(&local_40c,local_86c);
      remove(local_86c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

