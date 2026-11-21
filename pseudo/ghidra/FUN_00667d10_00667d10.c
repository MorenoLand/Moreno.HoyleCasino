// FUN_00667d10  00667d10

uint FUN_00667d10(void)

{
  char cVar1;
  int *piVar2;
  char *_Str1;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_5;
  
  local_5 = 0;
  piVar2 = (int *)FUN_005fb810(0);
  _Str1 = (char *)(**(code **)(*piVar2 + 0xb8))();
  piVar2 = (int *)FUN_005fb720(0);
  cVar1 = (**(code **)(*piVar2 + 0xf0))(_Str1,1);
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_005fb720(0);
    iVar5 = (**(code **)(*piVar2 + 0xb8))();
    if (iVar5 == 100) {
      uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME",0);
      uVar3 = FUN_00630f40("SID_SHELL_TOOMANYSAVEDGAMES",uVar3);
      uVar4 = FUN_0062ff10(uVar3);
      return uVar4 & 0xffffff00;
    }
  }
  else {
    uVar3 = FUN_00630f40("SID_SHELL_DUPLICATEGAMENAME",4);
    uVar3 = FUN_00630f40("SID_SHELL_SAVEDGAMEEXISTS",uVar3);
    uVar4 = FUN_0062ff10(uVar3);
    if (uVar4 != 6) {
      return uVar4 & 0xffffff00;
    }
    local_5 = 1;
  }
  iVar5 = strcmp(_Str1,(char *)&PTR_006b27f8);
  if (iVar5 == 0) {
    uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME",0);
    uVar3 = FUN_00630f40("SID_SHELL_MUSTNAMEGAME",uVar3);
    uVar4 = FUN_0062ff10(uVar3);
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    FUN_005f87d0();
    FUN_00613f80();
    uVar4 = FUN_00668170(local_5);
  }
  return uVar4;
}

