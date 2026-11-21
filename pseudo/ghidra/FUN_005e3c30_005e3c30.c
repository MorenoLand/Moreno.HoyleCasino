// FUN_005e3c30  005e3c30

uint __fastcall FUN_005e3c30(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_TOURNAMENT",0);
    uVar2 = FUN_00630f40("SID_SHELL_NOMOREHUMANS",uVar2);
    FUN_0062ff10(uVar2);
    uVar3 = FUN_0065fae0();
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

