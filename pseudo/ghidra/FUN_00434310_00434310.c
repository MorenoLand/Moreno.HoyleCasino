// FUN_00434310  00434310

undefined4 __fastcall FUN_00434310(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_18 [5];
  
  local_18[0] = 1;
  local_18[1] = 2;
  local_18[2] = 3;
  local_18[3] = 5;
  local_18[4] = 10;
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    pcVar3 = (char *)FUN_00434200(0xffffffff);
    uVar2 = local_18[*pcVar3];
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

