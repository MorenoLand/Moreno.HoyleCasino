// FUN_0065c0c0  0065c0c0

void __fastcall FUN_0065c0c0(int *param_1)

{
  char cVar1;
  char *_Source;
  undefined4 uVar2;
  int iVar3;
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _Source = (char *)FUN_0065d130();
  strcpy(local_24,_Source);
  cVar1 = (**(code **)(*param_1 + 0x84))(local_24);
  if (cVar1 == '\0') {
    uVar2 = FUN_00630f40("SID_SHELL_DELETEFACE",4);
    uVar2 = FUN_00630f40("SID_SHELL_CONFIRMDELETEFACE",uVar2);
    iVar3 = FUN_0062ff10(uVar2);
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_FACEINUSE",4);
    uVar2 = FUN_00630f40("SID_SHELL_FACEINUSEMESSAGE",uVar2);
    iVar3 = FUN_0062ff10(uVar2);
  }
  if (iVar3 == 6) {
    cVar1 = *(char *)((int)param_1 + 0x1c2);
    iVar3 = FUN_00615260();
    if (cVar1 == iVar3) {
      cVar1 = FUN_00663c50();
      *(char *)((int)param_1 + 0x1c2) = cVar1 + -1;
    }
    uVar2 = FUN_00615260();
    FUN_0065cfe0(uVar2);
    (**(code **)(*param_1 + 0x94))(local_24);
    FUN_0065c300();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

