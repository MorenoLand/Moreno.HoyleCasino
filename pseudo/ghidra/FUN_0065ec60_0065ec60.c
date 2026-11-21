// FUN_0065ec60  0065ec60

uint __fastcall FUN_0065ec60(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *_Str1;
  int iVar4;
  undefined **_Str2;
  
  uVar2 = FUN_00660f70();
  cVar1 = FUN_0065fb70(uVar2);
  if (cVar1 == '\0') {
    _Str2 = &PTR_006b27f8;
    _Str1 = (char *)FUN_00660f70();
    iVar4 = strcmp(_Str1,(char *)_Str2);
    if (iVar4 == 0) {
      uVar2 = FUN_00630f40("SID_SHELL_INVALIDNAME",0);
      uVar2 = FUN_00630f40("SID_SHELL_MUSTCREATEPLAYER",uVar2);
      uVar3 = FUN_0062ff10(uVar2);
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x9c))();
    }
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_DUPLICATEPLAYER",0);
    uVar2 = FUN_00630f40("SID_SHELL_PLAYEREXISTS",uVar2);
    uVar3 = FUN_0062ff10(uVar2);
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

