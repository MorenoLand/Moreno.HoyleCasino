// FUN_0043b830  0043b830

void __thiscall FUN_0043b830(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_80c [2048];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = *(int *)(DAT_007906d4 + 0xad8);
  if (local_8 == -1) {
    FUN_005e9f20("p != -1","..\\Casino\\crapsstate.cpp",0x998);
  }
  local_80c[0] = '\0';
  if (*(int *)(param_1 + 0xac4) == 0) {
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_1");
    strcpy(local_80c,pcVar2);
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_2");
    strcpy(local_80c,pcVar2);
    cVar1 = FUN_00435d40(local_8);
    if (cVar1 != '\0') {
      pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_3");
      strcat(local_80c,pcVar2);
    }
  }
  pcVar2 = local_80c;
  uVar3 = FUN_00630f40("SID_CASINO_BETTING",pcVar2);
  FUN_0057be80(0,uVar3,pcVar2);
  local_80c[0] = '\0';
  if (*(int *)(param_1 + 0xac4) == 0) {
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_4");
    strcat(local_80c,pcVar2);
    goto LAB_0043bac6;
  }
  if (param_2 == '\0') {
    cVar1 = FUN_004369a0(local_8,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_004369a0(local_8,1);
      if (cVar1 == '\0') goto LAB_0043b9e7;
    }
    cVar1 = FUN_004369a0(local_8,2);
    if (cVar1 != '\0') {
      cVar1 = FUN_004369a0(local_8,3);
      if (cVar1 == '\0') goto LAB_0043b9e7;
    }
  }
  else {
LAB_0043b9e7:
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_5");
    strcat(local_80c,pcVar2);
  }
  cVar1 = FUN_004369a0(local_8,4);
  if (cVar1 == '\0') {
    cVar1 = FUN_00435d40(local_8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004369a0(local_8,5);
      if (cVar1 == '\0') {
        cVar1 = FUN_00435de0(local_8);
        if (cVar1 == '\0') {
          pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_6");
          strcat(local_80c,pcVar2);
        }
      }
    }
  }
  cVar1 = FUN_00435d40(local_8);
  if (cVar1 == '\0') {
    cVar1 = FUN_00435de0(local_8);
    if (cVar1 == '\0') goto LAB_0043bac6;
  }
  pcVar2 = (char *)FUN_00630f40("SID_CRAPS_TUTORIAL_7");
  strcat(local_80c,pcVar2);
LAB_0043bac6:
  pcVar2 = local_80c;
  uVar3 = FUN_00630f40("SID_CRAPS_STRATEGY",pcVar2);
  FUN_0057be80(1,uVar3,pcVar2);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

