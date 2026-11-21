// FUN_004185c0  004185c0

bool __fastcall FUN_004185c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00418400(0xffffffff);
    bVar3 = *(char *)(iVar2 + 5) != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

